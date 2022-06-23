############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.vms], oss$root:[include])

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).vms] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.odbc] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]odbc.exe
    ! odbc is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).vms]odbc.obj -
[.$(OBJ_DIR).ext.odbc]php_odbc.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]odbc.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]odbc.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).vms]odbc.obj : [.vms]odbc.c $(HEADERS)
[.$(OBJ_DIR).ext.odbc]php_odbc.obj : [.ext.odbc]php_odbc.c $(HEADERS)
