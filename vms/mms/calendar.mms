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
    @ pipe create/dir [.$(OBJ_DIR).ext.calendar] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]calendar.exe
    ! calendar is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.calendar]calendar.obj -
[.$(OBJ_DIR).ext.calendar]cal_unix.obj -
[.$(OBJ_DIR).ext.calendar]dow.obj -
[.$(OBJ_DIR).ext.calendar]easter.obj -
[.$(OBJ_DIR).ext.calendar]french.obj -
[.$(OBJ_DIR).ext.calendar]gregor.obj -
[.$(OBJ_DIR).ext.calendar]jewish.obj -
[.$(OBJ_DIR).ext.calendar]julian.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]calendar.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]calendar.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.calendar]calendar.obj : [.ext.calendar]calendar.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]cal_unix.obj : [.ext.calendar]cal_unix.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]dow.obj : [.ext.calendar]dow.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]easter.obj : [.ext.calendar]easter.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]french.obj : [.ext.calendar]french.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]gregor.obj : [.ext.calendar]gregor.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]jewish.obj : [.ext.calendar]jewish.c $(HEADERS)
[.$(OBJ_DIR).ext.calendar]julian.obj : [.ext.calendar]julian.c $(HEADERS)
