#ifndef __LIMITS_LOADED
#define __LIMITS_LOADED 1
/****************************************************************************
**
**  <limits.h> - Sizes of integral types
**
*****************************************************************************
**  Header introduced by the ANSI C Standard
*****************************************************************************
**                                                                          *
**  HPE CONFIDENTIAL. This software is confidential proprietary software    *
**  licensed by Hewlett Packard Enterprise Development, LP, and is not      *
**  authorized to be used, duplicated or disclosed to anyone without the    *
**  prior written permission of HPE.                                        *
**  Copyright 2003 Hewlett Packard Enterprise Development, LP               *
**                                                                          *
**  VMS SOFTWARE, INC. CONFIDENTIAL. This software is confidential          *
**  proprietary software licensed by VMS Software, Inc., and is not         *
**  authorized to be used, duplicated or disclosed to anyone without        *
**  the prior written permission of VMS Software, Inc.                      *
**  Copyright 2020 VMS Software, Inc.                                       *
**                                                                          *
*****************************************************************************
**                                  Note
*****************************************************************************
**
**  Section 2.2.4.2 of the Rationale states "The limits for the maxima and
**  minima of unsigned types are specified as unsigned constants..."
**
**  The alert reader will notice there are no minima for the unsigned types,
**  but we will follow the Rationale's advice anyway.
**
*****************************************************************************
**                           Implementors Note
*****************************************************************************
**  INT_MAX is not a constant value across platforms. Sone constants in this
**  file, such as INT_MIN, are defined in terms of INT_MAX.
**  
**  Do not be tempted to speed up processing up by evaluating these expressions
**  into constant values.  This will work incorrectly.
*****************************************************************************
*/

#pragma __nostandard
#include <decc$types.h>

/*
**  Number of bits for the smallest object that is not a bit-field (byte)
*/
#define   CHAR_BIT    8


/*
**  Minimum and maximum values for "signed/unsigned char"
*/
#define   UCHAR_MAX   255u
#define   SCHAR_MAX   127
#define   SCHAR_MIN   (-SCHAR_MAX - 1)


/*
**  Minimum and maximum values for "char" affected by /unsigned_char qualifier
*/
#ifdef __UNSIGNED_CHAR
#define   CHAR_MIN    0
#define   CHAR_MAX    UCHAR_MAX
#else
#define   CHAR_MIN    SCHAR_MIN
#define   CHAR_MAX    SCHAR_MAX
#endif


/*
**  Minimum and maximum values for "signed/unsigned short int"
*/
#define   USHRT_MAX   65535u
#define   SHRT_MAX    32767
#define   SHRT_MIN    (-SHRT_MAX - 1)


/*
**  Minimum and maximum values for "signed/unsigned int"
*/
#define   UINT_MAX    4294967295u
#define   INT_MAX     2147483647
#define   INT_MIN     (-INT_MAX - 1)


/*
**  Minimum and maximum values for "signed/unsigned long int"
*/
#define   ULONG_MAX   4294967295u
#define   LONG_MAX    2147483647
#define   LONG_MIN    (-LONG_MAX - 1)


/*
**  Minimum and maximum values for "signed/unsigned long long int"
*/
#define   ULLONG_MAX  18446744073709551615u
#define   LLONG_MAX   9223372036854775807
#define   LLONG_MIN   (-LLONG_MAX - 1)


/*
**  Minimum and maximum values for "signed/unsigned __intxx"
*/ 
#define __UINT16_MAX  65535u
#define __INT16_MAX   32767
#define __INT16_MIN   (-__INT16_MAX - 1)

#define __UINT32_MAX  4294967295u
#define __INT32_MAX   2147483647
#define __INT32_MIN   (-__INT32_MAX - 1)

#define __UINT64_MAX  18446744073709551615u
#define __INT64_MAX   9223372036854775807
#define __INT64_MIN   (-__INT64_MAX - 1)

#if __CRTL_VER < 60200000
#   define  MB_LEN_MAX               1   /*  Before OpenVMS V6.2  */
#else
#   define  MB_LEN_MAX               8   /*  After  OpenVMS V6.2  */
#endif

/*
**  Limits which changed beginning with OpenVMS V6.2
*/
#   if defined(_XOPEN_SOURCE) || !defined(_ANSI_C_SOURCE)
#   define  COLL_WEIGHTS_MAX         5   /*  Max collate weights  */
#   define  NL_TEXTMAX            8192
#   define  NL_SETMAX            65535
#   define  NL_MSGMAX            65535
#   define  CHARCLASS_NAME_MAX      14
#   define  NL_ARGMAX                9
#   define  NL_LANGMAX              14
#   define  TZNAME_MAX              15
#   define  SSIZE_MAX          INT_MAX

    /*
    ** Limits needed to support *conf() functions.
    */
#   define  BC_BASE_MAX             -1   /* Max ibase and obase values for bc - not implemented */
#   define  BC_DIM_MAX              -1   /* Max num elements in array for bc - not implemented */
#   define  BC_SCALE_MAX            -1   /* Max scale value allowed by bc - not implemented */
#   define  BC_STRING_MAX           -1   /* Max len of string constant by bc - not implemented */

#   define  EXPR_NEST_MAX           (-1)  /* Max num expression nested for expr */
#   define  LINE_MAX                2048  /* Max len of utility input line */
#   define  RE_DUP_MAX              (-1)  /* Max num repeated reg for interval */

#   define  NGROUPS_MAX             0	  /* User can be in no extra groups */
#   define  PASS_MAX                31    /* Max bytes in a password */
#   define  ARG_MAX                 4096  /* Max len of arg to exec rtns */

    /*
    **  These are used by pathconf() as well as others
    */
#   define  LINK_MAX		   1      /* Only 1 link to a file */
#   define  MAX_CANON		   511    /* Max bytes in terminal canonical input */
#   define  MAX_INPUT		   511    /* Max bytes required as input before reading */ 
#   define  NAME_MAX		   255    /* Max bytes in filename (not including terminating null) */
#   define  PATH_MAX		   256    /* Max bytes in pathname (including terminating null) */
#   define  PIPE_BUF		   512    /* Max atomic bytes on write to pipe */

    /*  
    **  New limits with DEC C V5.2
    */  
#   define _POSIX_PIPE_BUF            512

#endif /* XOPEN_SOURCE */

#if defined(_XOPEN_SOURCE_EXTENDED) || !defined(_ANSI_C_SOURCE)
#   define  ATEXIT_MAX              32767 /* Max number of functions that may be registered
                                          ** with atexit().  essentially unlimited
                                          */
#   define  IOV_MAX                 1024  /* Maximum number of iovec structures
                                          ** that one process has available for
                                          ** use with readv() or writev() */
#endif



/*
**  Macros defined by the POSIX 1003.1c-1995 formally approved at
**  the June 1995 meeting of the IEEE Standards Board.  The correct 
**  feature test macro for strictly conforming POSIX 1003.1c-1995
**  applications is:
**
**      #define _POSIX_C_SOURCE 199506L
*/
#if _POSIX_C_SOURCE >= 199506 || !defined _ANSI_C_SOURCE

#   ifndef _POSIX_THREAD_DESTRUCTOR_ITERATIONS   
#      define _POSIX_THREAD_DESTRUCTOR_ITERATIONS   4
#   endif

#   ifndef _POSIX_THREAD_KEYS_MAX                
#      define _POSIX_THREAD_KEYS_MAX                128
#   endif

#   ifndef _POSIX_THREAD_THREADS_MAX             
#      define _POSIX_THREAD_THREADS_MAX             64
#   endif

#   ifndef PTHREAD_DESTRUCTOR_ITERATIONS         
#      define PTHREAD_DESTRUCTOR_ITERATIONS         _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#   endif

#   ifndef PTHREAD_KEYS_MAX
#      define PTHREAD_KEYS_MAX		            255
#   endif

#   ifndef PTHREAD_STACK_MIN                 
#      if !defined(__VAX)
#         define PTHREAD_STACK_MIN                  8192
#      else
#         define PTHREAD_STACK_MIN                  1024
#      endif
#   endif

#endif /* _POSIX_C_SOURCE >= 199506 */

#pragma __standard

#endif /* __LIMITS_LOADED */
