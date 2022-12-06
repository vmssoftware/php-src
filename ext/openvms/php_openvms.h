#ifndef PHP_OPENVMS_H
#define PHP_OPENVMS_H

extern zend_module_entry openvms_module_entry;
#define	openvms_module_ptr &openvms_module_entry

/* Functions */

PHP_MINIT_FUNCTION(openvms);
PHP_RINIT_FUNCTION(openvms);
PHP_MINFO_FUNCTION(openvms);

PHP_FUNCTION(openvms_cvt_filename);
PHP_FUNCTION(openvms_getdvi);
PHP_FUNCTION(openvms_getjpi);
PHP_FUNCTION(openvms_getsyi);
PHP_FUNCTION(openvms_message);
PHP_FUNCTION(openvms_status);
PHP_FUNCTION(openvms_time);
PHP_FUNCTION(openvms_uptime);
PHP_FUNCTION(openvms_trnlnm);
PHP_FUNCTION(openvms_crelnm);
PHP_FUNCTION(openvms_dellnm);
PHP_FUNCTION(openvms_symbol_set);
PHP_FUNCTION(openvms_symbol_get);
PHP_FUNCTION(openvms_symbol_delete);

#define phpext_openvms_ptr openvms_module_ptr

#define OPENVMS_MAJ_VER 1
#define OPENVMS_MIN_VER 0
#define OPENVMS_UPD_VER 0

#endif
