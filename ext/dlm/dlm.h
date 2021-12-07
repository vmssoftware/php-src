#ifndef __DLM_H__
#define __DLM_H__

#ifdef __cplusplus
extern "C" {
#endif

extern int dlm_lock_delete(unsigned int);
extern long long dlm_lock_create(char *, int);
extern int dlm_lock_acquire(unsigned int);
extern int dlm_lock_release(unsigned int);
extern char *dlm_error();

#ifdef __cplusplus
}
#endif
#endif
