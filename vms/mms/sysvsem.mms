############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.sysvsem] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]sysvsem.exe
    ! sysvsem is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.sysvsem]sysvsem.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]sysvsem.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]sysvsem.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.sysvsem]sysvsem.obj : [.ext.sysvsem]sysvsem.c $(HEADERS)
