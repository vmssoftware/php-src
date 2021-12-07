#define __NEW_STARLET
#include <string.h>
#include <assert.h>
#include <descrip.h>
#include <starlet.h>
#include <lksbdef.h>
#include <efndef.h>
#include <lckdef.h>
#include <ssdef.h>
#include <psldef.h>
#include <lib$routines.h>


static unsigned int status = SS$_NORMAL;


char *dlm_error()
{
    char msg[256], *tmp = NULL;
    unsigned short len;
    struct dsc$descriptor_s msg_dsc;

    msg_dsc.dsc$w_length = sizeof(msg) - 1;
    msg_dsc.dsc$b_class = DSC$K_CLASS_S;
    msg_dsc.dsc$b_dtype = DSC$K_DTYPE_T;
    msg_dsc.dsc$a_pointer = msg;

    lib$sys_getmsg(&status, &len, &msg_dsc, NULL, NULL);
    msg[len] = '\0';
    assert((tmp = strdup(msg)));
    return (tmp);
}


int dlm_lock_delete(unsigned int lkid)
{
    status = SS$_NORMAL;
    SYS$DEQ(lkid, 0, PSL$C_USER, LCK$M_CANCEL);
    status = SYS$DEQ(lkid, 0, PSL$C_USER, LCK$M_DEQALL);
    return (status == SS$_NORMAL ? 0 : -1);
}


long long dlm_lock_create(char *name, int sys)
{
    LKSB lck;
    struct dsc$descriptor name_dsc =
	{ 0, DSC$K_DTYPE_T, DSC$K_CLASS_S, 0 };
    unsigned int flags = LCK$M_EXPEDITE;

    assert(name);
    name_dsc.dsc$w_length = strlen(name);
    name_dsc.dsc$a_pointer = name;

    memset(&lck, 0, sizeof(lck));

    if (sys) {
	flags = LCK$M_EXPEDITE | LCK$M_SYSTEM;
    }

    status = SYS$ENQW(EFN$C_ENF,
		      LCK$K_NLMODE,
		      &lck,
		      flags,
		      &name_dsc, 0, 0, 0, 0, PSL$C_USER, 0, 0, 0);

    if (status == SS$_NORMAL)
	status = lck.lksb$w_status;
    if (status != SS$_NORMAL) {
	return (-1);
    }

    return (lck.lksb$l_lkid);
}



int dlm_lock_acquire(unsigned int lkid)
{
    LKSB lck;

    memset(&lck, 0, sizeof(lck));
    lck.lksb$l_lkid = lkid;

    status = SYS$ENQW(EFN$C_ENF,
		      LCK$K_EXMODE,
		      &lck,
		      LCK$M_CONVERT, 0, 0, 0, 0, 0, PSL$C_USER, 0, 0, 0);

    if (status == SS$_NORMAL) {
	status = lck.lksb$w_status;
    }

    return (status == SS$_NORMAL ? 0 : -1);
}


int dlm_lock_release(unsigned int lkid)
{
    LKSB lck;

    memset(&lck, 0, sizeof(lck));
    lck.lksb$l_lkid = lkid;

    status = SYS$ENQW(EFN$C_ENF,
		      LCK$K_NLMODE,
		      &lck,
		      LCK$M_CONVERT, 0, 0, 0, 0, 0, PSL$C_USER, 0, 0, 0);

    if (status == SS$_NORMAL) {
	status = lck.lksb$w_status;
    }

    return (status == SS$_NORMAL ? 0 : -1);
}
