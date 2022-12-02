/******************************************************************************/
/*
                                 DCLsymbol.c

A VMS-specific PHP extension!
Unashamedly plagiarised.
Monkey-see, monkey-do.

Three functions:

  dclsymbol_set(<name>,<value>[,boolean]);
  dclsymbol_get(<name>,[,boolean]);
  dclsymbol_delete(<name>,[,boolean]);

Set (assign) a DCL symbol with the specified name and value, default is local
with an optional boolean parameter when true assigning a global symbol.  Get a
symbol value by name with the same optional global boolean (if the boolean is
true then the symbol must be in the global table, if false then in the local
table).  The local table is always searched before the global table and so the
same local symbol will always override a global symbol.  Delete a symbol by
name with the same optional global boolean.

Test procedure:

  $ php 
  $ deck /dollars="$$$$$"
  <?php 
  if(!extension_loaded('dclsymbol')) dl('php_dclsymbol.exe');
  dclsymbol_set('BLAH_1',date('Y-m-d'));
  dclsymbol_set('BLAH_2','TWO');
  dclsymbol_set('BLAH_3',date('h:m:s'),true);
  dclsymbol_set('BLAH_4','global-4',true);
  print("BLAH_4 is \"" . dclsymbol_get("BLAH_4") . "\"\n");
  print("BLAH_4 (local) is \"" . dclsymbol_get("BLAH_4",false) . "\"\n");
  print("BLAH_4 (global) is \"" . dclsymbol_get("BLAH_4",true) . "\"\n");
  dclsymbol_delete('BLAH_2');
  dclsymbol_delete('BLAH_4',true);
  ?>
  $$$$$
  $ show symbol blah*


COPYRIGHT
---------
Copyright (C) 2012 Mark G.Daniel
This package comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it under the
conditions of the GNU GENERAL PUBLIC LICENSE, version 3, or any later version.
http://www.gnu.org/licenses/gpl.txt


VERSION HISTORY
---------------
01-FEB-2012  MGD  v1.0.1, 8192 max capacity (per MVB)
26-JAN-2012  MGD  v1.0.0, initial development
*/
/******************************************************************************/

#define SOFTWAREVN "1.0.1"
#define SOFTWARENM "DCLSYMBOL"
#ifdef __ALPHA
#  define SOFTWAREID SOFTWARENM " AXP-" SOFTWAREVN
#endif
#ifdef __ia64
#  define SOFTWAREID SOFTWARENM " IA64-" SOFTWAREVN
#endif

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include <descrip.h>
#include <ssdef.h>
#include <starlet.h>
#include <lib$routines.h>
#include <libclidef.h>

/* just enough of the PHP build environment to compile DCLSYMBOL */

#include "zend.h"
#include "zend_api.h"

#define PHPAPI
typedef zval pval;
#define function_entry zend_function_entry

#define PHP_FUNCTION ZEND_FUNCTION
#define PHP_FE ZEND_FE

#define PHP_MINIT       ZEND_MODULE_STARTUP_N
#define PHP_MSHUTDOWN   ZEND_MODULE_SHUTDOWN_N
#define PHP_RINIT       ZEND_MODULE_ACTIVATE_N
#define PHP_RSHUTDOWN   ZEND_MODULE_DEACTIVATE_N
#define PHP_MINFO       ZEND_MODULE_INFO_N

#define PHP_MINIT_FUNCTION      ZEND_MODULE_STARTUP_D
#define PHP_MSHUTDOWN_FUNCTION  ZEND_MODULE_SHUTDOWN_D
#define PHP_RINIT_FUNCTION      ZEND_MODULE_ACTIVATE_D
#define PHP_RSHUTDOWN_FUNCTION  ZEND_MODULE_DEACTIVATE_D
#define PHP_MINFO_FUNCTION      ZEND_MODULE_INFO_D

#include "info.h"

/* get down to it */

extern int decc$$translate ();

#define dclsymbol_module_ptr &dclsymbol_module_entry
#define phpext_dclsymbol_ptr dclsymbol_module_ptr

PHP_RINIT_FUNCTION (dclsymbol);
PHP_MINFO_FUNCTION (dclsymbol);
PHP_FUNCTION (dclsymbol_delete);
PHP_FUNCTION (dclsymbol_get);
PHP_FUNCTION (dclsymbol_set);

function_entry dclsymbol_functions[] =
{
   PHP_FE (dclsymbol_delete, NULL)
   PHP_FE (dclsymbol_get, NULL)
   PHP_FE (dclsymbol_set, NULL)
   { NULL, NULL, NULL }
};

zend_module_entry dclsymbol_module_entry =
{
   STANDARD_MODULE_HEADER,
   "dclsymbol",
   dclsymbol_functions,
   NULL,
   NULL,
   PHP_RINIT(dclsymbol), 
   NULL,
   PHP_MINFO(dclsymbol),
   SOFTWAREVN,
   STANDARD_MODULE_PROPERTIES,
};

ZEND_GET_MODULE (dclsymbol)

/******************************************************************************/
/*
Request initialisation.
*/

PHP_RINIT_FUNCTION (dclsymbol)

{
   /* initialize the status */
   decc$$translate (SS$_NORMAL);

   return SUCCESS;
}

/******************************************************************************/
/*
php_info() tabled information.
*/

PHP_MINFO_FUNCTION (dclsymbol)

{
   php_info_print_table_start ();
   php_info_print_table_row (2, "DCLsymbol support", "enabled");
   php_info_print_table_row (2, "Version", SOFTWAREID);
   php_info_print_table_end ();
}

/******************************************************************************/
/*
Assigns (creates or recreates) a local symbol (by default).  First parameter
is the symbol name, second parameter the symbol value, optional third
parameter the global table boolean.
*/

PHP_FUNCTION (dclsymbol_set)

{
   static $DESCRIPTOR (NameDsc, "");
   static $DESCRIPTOR (ValueDsc, "");

   int  status,
        SymbolNameLength = 0,
        SymbolType = LIB$K_CLI_LOCAL_SYM,
        SymbolValueLength = 0;
   unsigned char  SymbolGlobal = -1;
   char  *SymbolNamePtr = NULL,
         *SymbolValuePtr = NULL;

   /*********/
   /* begin */
   /*********/

   /* establish a normal status */
   decc$$translate (SS$_NORMAL);

   /* parse the aguments */
   if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ss|b",
                              &SymbolNamePtr,
                              &SymbolNameLength,
                              &SymbolValuePtr,
                              &SymbolValueLength,
                              &SymbolGlobal) == FAILURE) RETURN_FALSE;

   if (!SymbolNameLength) RETURN_FALSE;
   if (SymbolGlobal == 1) SymbolType = LIB$K_CLI_GLOBAL_SYM;
   NameDsc.dsc$a_pointer = SymbolNamePtr;
   NameDsc.dsc$w_length = SymbolNameLength;
   ValueDsc.dsc$a_pointer = SymbolValuePtr;
   ValueDsc.dsc$w_length = SymbolValueLength;
   status = lib$set_symbol (&NameDsc, &ValueDsc, &SymbolType);
   if (status & 1) RETURN_TRUE;
   RETURN_FALSE;
}

/******************************************************************************/
/*
Deletes a local symbol (by default).  First parameter is the symbol name,
optional second parameter the global table boolean.
*/

PHP_FUNCTION (dclsymbol_delete)

{
   static $DESCRIPTOR (NameDsc, "");

   int  status,
        SymbolNameLength = 0,
        SymbolType = LIB$K_CLI_LOCAL_SYM;
   unsigned char  SymbolGlobal = -1;
   char  *SymbolNamePtr = NULL;

   /*********/
   /* begin */
   /*********/

   /* establish a normal status */
   decc$$translate (SS$_NORMAL);

   /* parse the aguments */
   if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "s|b",
                              &SymbolNamePtr,
                              &SymbolNameLength,
                              &SymbolGlobal) == FAILURE) RETURN_FALSE;

   if (!SymbolNameLength) RETURN_FALSE;
   if (SymbolGlobal == 1) SymbolType = LIB$K_CLI_GLOBAL_SYM;
   NameDsc.dsc$a_pointer = SymbolNamePtr;
   NameDsc.dsc$w_length = SymbolNameLength;
   status = lib$delete_symbol (&NameDsc, &SymbolType);
   if (status & 1) RETURN_TRUE;
   RETURN_FALSE;
}

/******************************************************************************/
/*
Gets and returns a symbol value.  First parameter is the symbol name, optional
second parameter, a boolean, which if supplied true the symbol must exist in
the global table, and if supplied false must exist in the local table.  If the
symbol does not exist (optionally in the specified table) then return NULL. 
The local table is always searched before the global table and so the same
local symbol will always override a global symbol.
*/

PHP_FUNCTION (dclsymbol_get)

{
   static $DESCRIPTOR (NameDsc, "");
   static $DESCRIPTOR (ValueDsc, "");

   int  status,
        SymbolNameLength = 0,
        SymbolType = 0;
   unsigned short  ValueLength;
   unsigned char  SymbolGlobal = -1;
   char  *SymbolNamePtr = NULL;
   /* plenty big enough! */
   char  ValueBuffer [8192+1];

   /*********/
   /* begin */
   /*********/

   /* establish a normal status */
   decc$$translate (SS$_NORMAL);

   /* parse the aguments */
   if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "s|b",
                              &SymbolNamePtr,
                              &SymbolNameLength,
                              &SymbolGlobal) == FAILURE) RETURN_NULL();

   if (!SymbolNameLength) RETURN_NULL();
   NameDsc.dsc$a_pointer = SymbolNamePtr;
   NameDsc.dsc$w_length = SymbolNameLength;
   ValueDsc.dsc$a_pointer = ValueBuffer;
   ValueDsc.dsc$w_length = sizeof(ValueBuffer)-1;
   status = lib$get_symbol (&NameDsc, &ValueDsc, &ValueLength, &SymbolType);
   if (status & 1)
   {
       /* if a global boolean false and symbol in global table */
       if (SymbolGlobal == 0 && SymbolType == LIB$K_CLI_GLOBAL_SYM)
          RETURN_NULL();
       /* if a global boolean true and symbol in local table */
       if (SymbolGlobal == 1 && SymbolType == LIB$K_CLI_LOCAL_SYM)
          RETURN_NULL();
       ValueBuffer[ValueLength] = '\0';
       RETURN_STRING(ValueBuffer,1);
   }
   RETURN_NULL();
}

/******************************************************************************/