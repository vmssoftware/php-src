############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
)

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ define readline oss$root:[include.readline]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.readline] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]readline.exe
    ! readline is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.readline]readline.obj -
[.$(OBJ_DIR).ext.readline]readline_cli.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]readline.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]readline.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.readline]readline.obj : [.ext.readline]readline.c $(HEADERS)
[.$(OBJ_DIR).ext.readline]readline_cli.obj : [.ext.readline]readline_cli.c $(HEADERS)
