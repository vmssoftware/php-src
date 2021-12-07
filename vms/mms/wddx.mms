############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define lib [.ext.date.lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.wddx] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]wddx.exe
    ! wddx is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.wddx]wddx.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]wddx.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]wddx.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.wddx]wddx.obj : [.ext.wddx]wddx.c $(HEADERS)
