############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES)-
)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),-
[.ext.dtr]-
)

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ define pdo [.ext.pdo]
    @ ! programs
    @ swig :== $swig$root:[bin]swig.exe
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.dtr] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]rec.exe
    ! rec is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.dtr]rec.obj -
[.$(OBJ_DIR).ext.dtr]rec_wrap.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]rec.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]rec.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.dtr]rec_wrap.c : [.ext.dtr]rec.i
    set def [.ext.dtr]
    swig -php rec.i
    purge/nolog
    set def [--]
    copy [.ext.dtr]rec_wrap.c [.$(OBJ_DIR).ext.dtr]

[.$(OBJ_DIR).ext.dtr]rec.obj : [.ext.dtr]rec.c $(HEADERS)
[.$(OBJ_DIR).ext.dtr]rec_wrap.obj : [.$(OBJ_DIR).ext.dtr]rec_wrap.c $(HEADERS)
