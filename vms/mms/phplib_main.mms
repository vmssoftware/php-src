############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.main])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ define lib [.ext.date.lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).main] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_main.olb
    ! phplib_main is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).main]SAPI.obj -
[.$(OBJ_DIR).main]alloca.obj -
[.$(OBJ_DIR).main]explicit_bzero.obj -
[.$(OBJ_DIR).main]fastcgi.obj -
[.$(OBJ_DIR).main]fopen_wrappers.obj -
[.$(OBJ_DIR).main]getopt.obj -
[.$(OBJ_DIR).main]internal_functions_cli.obj -
[.$(OBJ_DIR).main]main.obj -
[.$(OBJ_DIR).main]network.obj -
[.$(OBJ_DIR).main]output.obj -
[.$(OBJ_DIR).main]php_content_types.obj -
[.$(OBJ_DIR).main]php_ini.obj -
[.$(OBJ_DIR).main]php_open_temporary_file.obj -
[.$(OBJ_DIR).main]php_scandir.obj -
[.$(OBJ_DIR).main]php_syslog.obj -
[.$(OBJ_DIR).main]php_ticks.obj -
[.$(OBJ_DIR).main]php_variables.obj -
[.$(OBJ_DIR).main]reentrancy.obj -
[.$(OBJ_DIR).main]rfc1867.obj -
[.$(OBJ_DIR).main]snprintf.obj -
[.$(OBJ_DIR).main]spprintf.obj -
[.$(OBJ_DIR).main]strlcat.obj -
[.$(OBJ_DIR).main]strlcpy.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_main.olb : [.$(OUT_DIR)]phplib_main.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).main]SAPI.obj : [.main]SAPI.c $(HEADERS)
[.$(OBJ_DIR).main]alloca.obj : [.main]alloca.c $(HEADERS)
[.$(OBJ_DIR).main]explicit_bzero.obj : [.main]explicit_bzero.c $(HEADERS)
[.$(OBJ_DIR).main]fastcgi.obj : [.main]fastcgi.c $(HEADERS)
[.$(OBJ_DIR).main]fopen_wrappers.obj : [.main]fopen_wrappers.c $(HEADERS)
[.$(OBJ_DIR).main]getopt.obj : [.main]getopt.c $(HEADERS)
[.$(OBJ_DIR).main]internal_functions_cli.obj : [.main]internal_functions_cli.c $(HEADERS)
[.$(OBJ_DIR).main]main.obj : [.main]main.c $(HEADERS)
[.$(OBJ_DIR).main]network.obj : [.main]network.c $(HEADERS)
[.$(OBJ_DIR).main]output.obj : [.main]output.c $(HEADERS)
[.$(OBJ_DIR).main]php_content_types.obj : [.main]php_content_types.c $(HEADERS)
[.$(OBJ_DIR).main]php_ini.obj : [.main]php_ini.c $(HEADERS)
[.$(OBJ_DIR).main]php_open_temporary_file.obj : [.main]php_open_temporary_file.c $(HEADERS)
[.$(OBJ_DIR).main]php_scandir.obj : [.main]php_scandir.c $(HEADERS)
[.$(OBJ_DIR).main]php_syslog.obj : [.main]php_syslog.c $(HEADERS)
[.$(OBJ_DIR).main]php_ticks.obj : [.main]php_ticks.c $(HEADERS)
[.$(OBJ_DIR).main]php_variables.obj : [.main]php_variables.c $(HEADERS)
[.$(OBJ_DIR).main]reentrancy.obj : [.main]reentrancy.c $(HEADERS)
[.$(OBJ_DIR).main]rfc1867.obj : [.main]rfc1867.c $(HEADERS)
[.$(OBJ_DIR).main]snprintf.obj : [.main]snprintf.c $(HEADERS)
[.$(OBJ_DIR).main]spprintf.obj : [.main]spprintf.c $(HEADERS)
[.$(OBJ_DIR).main]strlcat.obj : [.main]strlcat.c $(HEADERS)
[.$(OBJ_DIR).main]strlcpy.obj : [.main]strlcpy.c $(HEADERS)
