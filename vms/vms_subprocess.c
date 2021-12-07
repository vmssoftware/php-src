
#ifdef __VMS

#define __NEW_STARLET 1

// OpenVMS defines NGROUPS_MAX as 0... WHAT?!
#undef NGROUPS_MAX
#define NGROUPS_MAX 64

#undef _MAKE_INHERIT
#include "vms/vms_fcntl.h"
#include "vms/vms_dsc.h"
#define _IGNORE_FCNTL_BUSY
#ifndef _IGNORE_FCNTL_BUSY
#define _MAKE_INHERIT(fd, flg, atomic) vms_fcntl((fd), F_SETFD, (flg) ? 0 : FD_CLOEXEC)
#else
inline int _MAKE_INHERIT(fd, flg, atomic) {
    int ret = vms_fcntl((fd), F_SETFD, (flg) ? 0 : FD_CLOEXEC);
    if (ret == -1 && errno == EBUSY) {
        PyErr_Clear();
        errno = 0;
        ret = 0;
    }
    return ret;
}
#endif

#include <builtins.h>
#include <clidef.h>
#include <descrip.h>
#include <efndef.h>
#include <errno.h>
#include <lib$routines.h>
#include <processes.h>
#include <stsdef.h>
#include <unixio.h>
#include <unixlib.h>

#include "vms/vms_spawn_helper.h"
#include "vms/vms_sleep.h"
#include "vms/vms_mbx_util.h"

// set generation on child complete
static void child_complete(int arg) {
    vms_spawn_finish((unsigned int *)arg);
}

static int
exec_dcl(char *const argv[], int p2cread, int c2pwrite) {
    int status = -1;
    int pid = -1;
    unsigned char efn = EFN$C_ENF;
    int flags = CLI$M_NOWAIT;
    $DESCRIPTOR(execute, "");
    $DESCRIPTOR(input, "");
    $DESCRIPTOR(output, "");
    char input_name[PATH_MAX + 1] = "";
    char output_name[PATH_MAX + 1] = "";
    __void_ptr32 input_ptr = NULL;
    __void_ptr32 output_ptr = NULL;

    if (p2cread != -1) {
        if (getname(p2cread, input_name, 1)) {
            input.dsc$w_length = strlen(input_name);
            set_dsc_string(input, input_name);
            input_ptr = &input;
        }
    }

    if (c2pwrite != -1) {
        if (getname(c2pwrite, output_name, 1)) {
            output.dsc$w_length = strlen(output_name);
            set_dsc_string(output, output_name);
            output_ptr = &output;
        }
    }

    // TODO: enclose each parameter in quotes, tripling existing quotes
    int i = 1;  // skip DCL
    int exec_len = 0;
    while (argv[i]) {
        exec_len += strlen(argv[i]) + 1;
        ++i;
    }

    char *execute_str = alloca(exec_len + 1);

    i = 1;
    execute_str[0] = 0;
    while (argv[i]) {
        if (i > 1) {
            strcat(execute_str, " ");
        }
        strcat(execute_str, argv[i]);
        ++i;
    }

    execute.dsc$w_length = strlen(execute_str);
    set_dsc_string(execute, execute_str);

    unsigned int *ppid, *pfinished;
    int *pstatus;

    if (vms_spawn_alloc(&ppid, &pstatus, &pfinished) != -1) {
        status = lib$spawn(
            &execute,
            input_ptr,
            output_ptr,
            &flags,
            NULL,
            ppid,
            pstatus,
            &efn,
            &child_complete,
            pfinished);

        if ($VMS_STATUS_SUCCESS(status)) {
            pid = (int)*ppid;
        }
    }

    if (input_ptr) {
        free_dsc_string(input);
    }
    if (output_ptr) {
        free_dsc_string(output);
    }
    free_dsc_string(execute);

    return pid;
}

/*
fds_to_make_inherit = array of int, first is a counter
*/
static void check_and_change_to_non_inheritable(int fd_num, int **fds_to_make_inherit) {
    int result = vms_fcntl(fd_num, F_GETFD, 0);
    if (result != -1 && !(result & FD_CLOEXEC)) {
        ++(**fds_to_make_inherit);
        *fds_to_make_inherit = realloc(*fds_to_make_inherit, sizeof(int)*(**fds_to_make_inherit));
        (*fds_to_make_inherit)[**fds_to_make_inherit - 1] = fd_num;
        vms_fcntl(fd_num, F_SETFD, result | FD_CLOEXEC);
    }
#ifdef _IGNORE_FCNTL_BUSY
    if (errno == EBUSY) {
        PyErr_Clear();
        errno = 0;
    }
#endif
}

/*
fds_to_keep = array of int, first is a counter
*/
static int* make_fds_non_inheritable(
    int *fds_to_keep,
    int p2cread,
    int c2pwrite,
    int errwrite)
{
    if (p2cread > 0 || c2pwrite > 0 || errwrite > 0) {
        Py_ssize_t num_fds_to_keep = PyTuple_GET_SIZE(py_fds_to_keep);
        PyObject *py_list_keep = PyList_New(num_fds_to_keep);
        for(int i = 0; i < num_fds_to_keep; ++i) {
            PyObject *item = PyTuple_GET_ITEM(py_fds_to_keep, i);
            Py_INCREF(item);
            PyList_SET_ITEM(py_list_keep, i, item);
        }
        if (p2cread > 0) {
            PyObject *item = PyLong_FromLong(p2cread);
            PyList_Append(py_list_keep, item);
        }
        if (c2pwrite > 0) {
            PyObject *item = PyLong_FromLong(c2pwrite);
            PyList_Append(py_list_keep, item);
        }
        if (errwrite > 0) {
            PyObject *item = PyLong_FromLong(errwrite);
            PyList_Append(py_list_keep, item);
        }
        PyList_Sort(py_list_keep);
        py_tuple_to_keep = PyList_AsTuple(py_list_keep);
        Py_DECREF(py_list_keep);
    }
    int start_fd = 3;
    int end_fd = 256;
    int len = PyTuple_GET_SIZE(py_tuple_to_keep);
    PyObject *py_fds_to_make_inherit = PyList_New(0);
    for (int i = 0; i < len; ++i) {
        int keep_fd = PyLong_AsUnsignedLong(PyTuple_GET_ITEM(py_tuple_to_keep, i));
        for (int fd_num = start_fd; fd_num < keep_fd; ++fd_num) {
            check_and_change_to_non_inheritable(fd_num, py_fds_to_make_inherit);
        }
        start_fd = keep_fd + 1;
    }
    while (start_fd < end_fd) {
        check_and_change_to_non_inheritable(start_fd, py_fds_to_make_inherit);
        ++start_fd;
    }
    if (py_tuple_to_keep != py_fds_to_keep) {
        Py_DECREF(py_tuple_to_keep);
    }
    return py_fds_to_make_inherit;
}

static int
vms_child_exec(
    char *const exec_array[],
    char *const argv[],
    char *const envp[],
    const char *cwd,
    int p2cread, int p2cwrite,
    int c2pread, int c2pwrite,
    int errread, int errwrite,
    int errpipe_read, int errpipe_write,
    int close_fds, int restore_signals,
    int call_setsid,
    int call_setgid, gid_t gid,
    int call_setgroups, size_t groups_size, const gid_t *groups,
    int call_setuid, uid_t uid, int child_umask,
    const void *child_sigmask,
    PyObject *py_fds_to_keep,
    PyObject *preexec_fn,
    PyObject *preexec_fn_args_tuple)
{
    int pid = -1;

    if (argv && *argv && strcmp(*argv, "DCL") == 0) {
        pid = exec_dcl(argv, p2cread, c2pwrite);
        if (pid > 0) {
            map_fd_to_child(c2pread, -pid);
            map_fd_to_child(errread, -pid);
        }
        return pid;
    }

    static pthread_mutex_t _child_exec_vfork_mutex = PTHREAD_MUTEX_INITIALIZER;

    pthread_mutex_lock(&_child_exec_vfork_mutex);

    // we should always set CWD, even if it is NULL - to restore default value
    decc$set_child_default_dir(cwd);

    int exec_error = 0;
    PyObject *py_fds_to_make_inherit = NULL;

    if (make_inheritable(py_fds_to_keep, errpipe_write) < 0) {
        goto egress;
    }

    // make the parent ends non-inheritable
    if (p2cwrite >= 0 && _MAKE_INHERIT(p2cwrite, 0, 0) < 0) goto egress;
    if (c2pread >= 0 && _MAKE_INHERIT(c2pread, 0, 0) < 0) goto egress;
    if (errread >= 0 && _MAKE_INHERIT(errread, 0, 0) < 0) goto egress;
    if (errpipe_read >= 0 && _MAKE_INHERIT(errpipe_read, 0, 0) < 0) goto egress;
    if (errpipe_write >= 0 && _MAKE_INHERIT(errpipe_write, 0, 0) < 0) goto egress;

    // make inherited
    if (p2cread >= 0 && _MAKE_INHERIT(p2cread, 1, 0) < 0) goto egress;
    if (c2pwrite >= 0 && _MAKE_INHERIT(c2pwrite, 1, 0) < 0) goto egress;
    if (errwrite >= 0 && _MAKE_INHERIT(errwrite, 1, 0) < 0) goto egress;

    if (close_fds && py_fds_to_keep && PyTuple_CheckExact(py_fds_to_keep)) {
        // TODO: see RTLS-187
        py_fds_to_make_inherit = make_fds_non_inheritable(py_fds_to_keep, p2cread, c2pwrite, errwrite);
    }

    decc$set_child_standard_streams(p2cread, c2pwrite, errwrite);
    pid = vfork();
#if defined(__VMS) && __INITIAL_POINTER_SIZE == 64
    __char_ptr_ptr32 argv32 = 0, envp32 = 0;
#endif
    if (pid == 0) {
#if defined(__VMS) && __INITIAL_POINTER_SIZE == 64
        int n = 0;
        while (argv[n]) {
            ++n;
        }
        argv32 = _malloc32((n + 1)* sizeof(__void_ptr32));
        n = 0;
        while (argv[n]) {
            argv32[n] = _strdup32(argv[n]);
            ++n;
        }
        argv32[n] = NULL;
        if (envp) {
            int n = 0;
            while (envp[n]) {
                ++n;
            }
            envp32 = _malloc32((n + 1)* sizeof(__void_ptr32));
            n = 0;
            while (envp[n]) {
                envp32[n] = _strdup32(envp[n]);
                ++n;
            }
            envp32[n] = NULL;
        }
#endif
        for (int i = 0; exec_array[i] != NULL; ++i) {
            const char *executable = exec_array[i];
            if (envp) {
#if defined(__VMS) && __INITIAL_POINTER_SIZE == 64
                execve(executable, argv32, envp32);
#else
                execve(executable, argv, envp);
#endif
            } else {
#if defined(__VMS) && __INITIAL_POINTER_SIZE == 64
                execv(executable, argv32);
#else
                execv(executable, argv);
#endif
            }
            if (errno != ENOENT && errno != ENOTDIR) {
                break;
            }
        }
        exec_error = errno;
        if (!exec_error) {
            exec_error = -1;
        }
        exit(EXIT_FAILURE);
    }

egress:

#if defined(__VMS) && __INITIAL_POINTER_SIZE == 64
    if (argv32) {
        int n = 0;
        while(argv32[n]) {
            free(argv32[n]);
            ++n;
        }
        free(argv32);
    }
    if (envp32) {
        int n = 0;
        while(envp32[n]) {
            free(envp32[n]);
            ++n;
        }
        free(envp32);
    }
#endif

    // Test if exec() is failed
    if (exec_error) {
        if (pid > 0) {
            waitpid(pid, NULL, 0);
        }
        pid = -1;
        errno = exec_error;
    }

    if (py_fds_to_make_inherit) {
        int len = PyList_GET_SIZE(py_fds_to_make_inherit);
        for (int i = 0; i < len; ++i) {
            int make_fd_inherit = PyLong_AsUnsignedLong(PyList_GET_ITEM(py_fds_to_make_inherit, i));
            _MAKE_INHERIT(make_fd_inherit, 1, 0);   // ignore errors
        }
        Py_DECREF(py_fds_to_make_inherit);
    }

    if (pid > 0) {
        map_fd_to_child(c2pread, pid);
        map_fd_to_child(errread, pid);
    }

    pthread_mutex_unlock(&_child_exec_vfork_mutex);
    return pid;
}

#endif /* __VMS */

