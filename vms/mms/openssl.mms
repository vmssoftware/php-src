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
SSL111_LIBSSL32 = define/nolog SSL111_LIBSSL32 DSA22:[OSS.X86.LIB]SSL111$LIBSSL32.OLB
SSL111_LIBCRYPTO32 = define/nolog SSL111_LIBCRYPTO32 DSA22:[OSS.X86.LIB]SSL111$LIBCRYPTO32.OLB
.ELSE
X86_START =
X86_LIBDEF =
X86_OSSDEF =
SSL111_LIBSSL32 = define/nolog SSL111_LIBSSL32 SSL111$ROOT:[LIB]SSL111$LIBSSL32.OLB
SSL111_LIBCRYPTO32 = define/nolog SSL111_LIBCRYPTO32 SSL111$ROOT:[LIB]SSL111$LIBCRYPTO32.OLB
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    $(X86_OSSDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.openssl] | copy SYS$INPUT nl:
    !
    @ $(SSL111_LIBSSL32)
    @ $(SSL111_LIBCRYPTO32)

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]openssl.exe
    ! openssl is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.openssl]openssl.obj -
[.$(OBJ_DIR).ext.openssl]xp_ssl.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]openssl.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]openssl.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.openssl]openssl.obj : [.ext.openssl]openssl.c $(HEADERS)
[.$(OBJ_DIR).ext.openssl]xp_ssl.obj : [.ext.openssl]xp_ssl.c $(HEADERS)
