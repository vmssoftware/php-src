############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES)-
)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
)

############################################################################
# First
############################################################################
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
.ELSE
X86_START =
X86_LIBDEF =
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
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
[.ext.dtr]rec_wrap.c : [.ext.dtr]rec.i
    set def [.ext.dtr]
    swig -php rec.i
    purge/nolog
    set def [--]

[.$(OBJ_DIR).ext.dtr]rec.obj : [.ext.dtr]rec.c $(HEADERS)
[.$(OBJ_DIR).ext.dtr]rec_wrap.obj : [.ext.dtr]rec_wrap.c $(HEADERS)
