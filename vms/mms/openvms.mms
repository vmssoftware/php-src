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
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.openvms] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]openvms.exe
    ! openvms is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.openvms]openvms.obj -
[.$(OBJ_DIR).ext.openvms]cvtfnm.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]openvms.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /sysexe /SHARE=$(MMS$TARGET) [.vms.opt]openvms.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.openvms]openvms.obj : [.ext.openvms]openvms.c $(HEADERS)
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)+sys$library:sys$lib_c.tlb/lib

[.$(OBJ_DIR).ext.openvms]cvtfnm.obj : [.ext.openvms]cvtfnm.c $(HEADERS)
