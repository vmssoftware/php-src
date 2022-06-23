############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.ftp] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]ftp.exe
    ! ftp is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.ftp]ftp.obj -
[.$(OBJ_DIR).ext.ftp]php_ftp.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]ftp.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]ftp.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.ftp]ftp.obj : [.ext.ftp]ftp.c $(HEADERS)
[.$(OBJ_DIR).ext.ftp]php_ftp.obj : [.ext.ftp]php_ftp.c $(HEADERS)
