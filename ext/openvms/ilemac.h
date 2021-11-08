/*
**
** © Copyright 2002 Hewlett-Packard Development Company, L.P.
**
** Hewlett-Packard and the Hewlett-Packard logo are trademarks
** of Hewlett-Packard Development Company L.P. in the U.S. and/or
** other countries.
**
** Confidential computer software.
** Valid license from Hewlett-Packard required for possession, use
** or copying.  Consistent with FAR 12.211 and 12.212, Commercial
** Computer Software, Computer Software Documentation, and Technical
** Data for Commercial.  Items are licensed to the U.S. Government
** under vendor's standard commercial license.
**
** Hewlett-Packard shall not be liable for technical or editorial
** errors or omissions contained herein.  The information is provided
** "as is" without warranty of any kind and is subject to change
** without notice.  The warranties for Hewlett-Packard products are
** set forth in the express warranty statements accompanying such
** products.  Nothing herein should be construed as constituting an
** additional warranty.
**
*/

#ifndef __ILEMAC_H 
#define __ILEMAC_H 1

/*
** Item List 2 Macros
*/
#define ILE2_INIT(ile2)						\
    {								\
    Ile2Ptr = (ILE2 *) &ile2;					\
    }
#define ILE2_ADD(itmcod, buflen, bufptr)			\
    {								\
    Ile2Ptr->ile2$w_length = buflen;				\
    Ile2Ptr->ile2$w_code = itmcod;				\
    Ile2Ptr->ile2$ps_bufaddr = (void *) bufptr;			\
    Ile2Ptr++;							\
    }
#define ILE2_TERM						\
    {								\
    Ile2Ptr->ile2$w_length = 0;					\
    Ile2Ptr->ile2$w_code = 0;					\
    Ile2Ptr->ile2$ps_bufaddr = (void *) 0;			\
    }
#define ILE2_EMPTY(ile2)					\
    (ile2[0].ile2$w_length == 0 &&				\
     ile2[0].ile2$w_code == 0 && 				\
     ile2[0].ile2$ps_bufaddr == NULL ? 1 : 0)

/*
** Item List 3 Macros
*/
#define ILE3_INIT(ile3)						\
    {								\
    Ile3Ptr= (struct _ile3 *) &ile3;				\
    }
#define ILE3_ADD(itmcod, buflen, bufptr, retlen)		\
    {								\
    Ile3Ptr->ile3$w_length = buflen;				\
    Ile3Ptr->ile3$w_code = itmcod;				\
    Ile3Ptr->ile3$ps_bufaddr = (void *) bufptr;			\
    Ile3Ptr->ile3$ps_retlen_addr = (unsigned short *) retlen;	\
    Ile3Ptr++;							\
    }
#define ILE3_TERM						\
    {								\
    Ile3Ptr->ile3$w_length = 0;					\
    Ile3Ptr->ile3$w_code = 0;					\
    Ile3Ptr->ile3$ps_bufaddr = (void *) 0;			\
    Ile3Ptr->ile3$ps_retlen_addr = (unsigned short *) 0;	\
    }
#define ILE3_EMPTY(ile3)					\
    (ile3[0].ile3$w_length == 0 &&				\
     ile3[0].ile3$w_code == 0 && 				\
     ile3[0].ile3$ps_bufaddr == NULL &&				\
     ile3[0].ile3$ps_retlen_addr == NULL) ? 1 : 0)

#endif /* __ILEMAC_H */
