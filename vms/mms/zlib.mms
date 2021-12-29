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
X86_OSSDEF = define/nolog/trans=concealed oss$root DSA22:[OSS.X86.]
.ELSE
X86_START =
X86_LIBDEF =
X86_OSSDEF = 
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    $(X86_OSSDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.zlib] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]zlib.exe
    ! zlib is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.zlib]zlib.obj -
[.$(OBJ_DIR).ext.zlib]zlib_filter.obj -
[.$(OBJ_DIR).ext.zlib]zlib_fopen_wrapper.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]zlib.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]zlib.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.zlib]zlib.obj : [.ext.zlib]zlib.c $(HEADERS)
[.$(OBJ_DIR).ext.zlib]zlib_filter.obj : [.ext.zlib]zlib_filter.c $(HEADERS)
[.$(OBJ_DIR).ext.zlib]zlib_fopen_wrapper.obj : [.ext.zlib]zlib_fopen_wrapper.c $(HEADERS)

