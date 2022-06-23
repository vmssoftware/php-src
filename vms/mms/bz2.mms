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
    @ pipe create/dir [.$(OBJ_DIR).ext.bz2] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]bz2.exe
    ! bz2 is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.bz2]bz2.obj -
[.$(OBJ_DIR).ext.bz2]bz2_filter.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]bz2.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]bz2.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.bz2]bz2.obj : [.ext.bz2]bz2.c $(HEADERS)
[.$(OBJ_DIR).ext.bz2]bz2_filter.obj : [.ext.bz2]bz2_filter.c $(HEADERS)
