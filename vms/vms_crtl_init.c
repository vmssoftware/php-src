#define __NEW_STARLET 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lib$routines.h>
#include <descrip.h>
#include <lnmdef.h>
#include <iledef.h>
#include <psldef.h>
#include <starlet.h>
#include <unixlib.h>
#include <errno.h>

#define $DESCR_STR(string)  { sizeof(string)-1, DSC$K_DTYPE_T, DSC$K_CLASS_S, string}
#define $ILE_STR(string)    {{ sizeof(string)-1, LNM$_STRING, string, NULL}, { 0, 0, 0, 0}}

typedef struct {
    struct dsc$descriptor_s name;
    ILE3                    value[2];
} llnm_pair;

#define LIB_ROOT "php$root:[lib.extensions]"

#ifndef OKAY
#define OKAY(STATUS) (((STATUS) & 1) != 0)
#endif


static void lnm_fixups() {
    static llnm_pair list[] = {
        { $DESCR_STR("OPENSSL"), $ILE_STR(LIB_ROOT "openssl.exe")}
    };

    unsigned long status;
    $DESCRIPTOR(table, "LNM$PROCESS");
    unsigned char mode = PSL$C_USER;

    for(int i = 0; i < sizeof(list)/sizeof(list[0]); ++i) {
        if (! OKAY((status = sys$crelnm(0, &table, &list[i].name, &mode, list[i].value)))) {
            lib$signal(status);
        }
    }
}


/*
** Sets current value for a feature
*/
static void set(const char *name, int value) {
     int index;
     errno = 0;

     index = decc$feature_get_index(name);

     if (index > 0) {
        decc$feature_set_value(index, 1, value);
     }
}

/*
** Sets default value for a feature
*/
static void set_default(char *name, int value) {
     int index;
     errno = 0;

     index = decc$feature_get_index(name);

     if (index > 0) {
        decc$feature_set_value (index, 0, value);
     }
}

static void set_coe ( void ) {
    set("DECC$ALLOW_REMOVE_OPEN_FILES", 1);
//    set("DECC$FILENAME_UNIX_ONLY", 1);
//    set("DECC$UNIX_LEVEL", 90);
    set ("DECC$UNIX_LEVEL", 100);

    const char *disable_feature[] = {
        "DECC$EFS_CASE_SPECIAL",
        "DECC$DETACHED_CHILD_PROCESS",
        "DECC$POSIX_STYLE_UID",         // else getpwuid() doesn't work
    };

    const char *enable_feature[] = {
        "DECC$EFS_FILE_TIMESTAMPS",
        "DECC$ENABLE_GETENV_CACHE",
        "DECC$EXIT_AFTER_FAILED_EXEC",
        "DECC$FILE_SHARING",
        "DECC$MAILBOX_CTX_STM",
        "DECC$POPEN_NO_CRLF_REC_ATTR",
        "DECC$POSIX_SEEK_STREAM_FILE",

        "DECC$ARGV_PARSE_STYLE",
        "DECC$DISABLE_TO_VMS_LOGNAME_TRANSLATION",
        "DECC$EFS_CASE_PRESERVE",
        "DECC$EFS_CHARSET",
        "DECC$FILENAME_UNIX_NO_VERSION",
        "DECC$FILENAME_UNIX_REPORT",
        "DECC$READDIR_DROPDOTNOTYPE",
        "DECC$RENAME_NO_INHERIT",
    };

    for(int i = 0; i < sizeof(disable_feature)/sizeof(disable_feature[0]); ++i) {
        set (disable_feature[i], 0);
    }

    for(int i = 0; i < sizeof(enable_feature)/sizeof(enable_feature[0]); ++i) {
        set (enable_feature[i], 1);
    }
    // set ("DECC$POSIX_COMPLIANT_PATHNAMES", 1);  // required for realpath(), but getcwd() is failed
    set ("DECC$PIPE_BUFFER_SIZE", 65535);

    // decc$set_reentrancy(C$C_MULTITHREAD);
}

#pragma extern_model save
#pragma extern_model strict_refdef "LIB$INITIALIZE" nowrt, long
#if __INITIAL_POINTER_SIZE
#    pragma __pointer_size __save
#    pragma __pointer_size 32
#else
#    pragma __required_pointer_size __save
#    pragma __required_pointer_size 32
#endif
void (* const iniarray[])() = {set_coe, lnm_fixups, } ; /* Set our contribution to the LIB$INITIALIZE array */
#if __INITIAL_POINTER_SIZE
#    pragma __pointer_size __restore
#else
#    pragma __required_pointer_size __restore
#endif
#pragma extern_model restore

int LIB$INITIALIZE();
globaldef int (*lib_init_ref)() = LIB$INITIALIZE;
