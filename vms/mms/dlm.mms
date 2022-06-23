############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES)-
)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),-
[.ext.dlm]-
)

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ define pdo [.ext.pdo]
    @ ! programs
    @ swig :== $swig$root:[bin]swig.exe
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.dlm] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]dlm.exe
    ! dlm is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.dlm]dlm.obj -
[.$(OBJ_DIR).ext.dlm]dlm_wrap.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]dlm.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]dlm.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.dlm]dlm_wrap.c : [.ext.dlm]dlm.i
    set def [.ext.dlm]
    swig -php dlm.i
    purge/nolog
    set def [--]
    copy [.ext.dlm]dlm_wrap.c [.$(OBJ_DIR).ext.dlm]

[.$(OBJ_DIR).ext.dlm]dlm.obj : [.ext.dlm]dlm.c $(HEADERS)
[.$(OBJ_DIR).ext.dlm]dlm_wrap.obj : [.$(OBJ_DIR).ext.dlm]dlm_wrap.c $(HEADERS)
