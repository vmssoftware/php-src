############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.sapi.cli])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define lib [.ext.date.lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).sapi.cli] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).vms] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]php.exe
    ! php client is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).sapi.cli]php_cli.obj -
[.$(OBJ_DIR).sapi.cli]php_cli_process_title.obj -
[.$(OBJ_DIR).sapi.cli]php_cli_server.obj -
[.$(OBJ_DIR).sapi.cli]php_http_parser.obj -
[.$(OBJ_DIR).sapi.cli]ps_title.obj -
[.$(OBJ_DIR).vms]vms_crtl_init.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]php.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /EXE=$(MMS$TARGET)/threads=upcalls [.vms.opt]php.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).sapi.cli]php_cli.obj : [.sapi.cli]php_cli.c $(HEADERS)
[.$(OBJ_DIR).sapi.cli]php_cli_process_title.obj : [.sapi.cli]php_cli_process_title.c $(HEADERS)
[.$(OBJ_DIR).sapi.cli]php_cli_server.obj : [.sapi.cli]php_cli_server.c $(HEADERS)
[.$(OBJ_DIR).sapi.cli]php_http_parser.obj : [.sapi.cli]php_http_parser.c $(HEADERS)
[.$(OBJ_DIR).sapi.cli]ps_title.obj : [.sapi.cli]ps_title.c $(HEADERS)
[.$(OBJ_DIR).vms]vms_crtl_init.obj : [.vms]vms_crtl_init.c $(HEADERS)
    $(CC) $(CC_FLAGS)/ACCEPT=VAXC_KEYWORDS /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)
