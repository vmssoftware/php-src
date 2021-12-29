############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,oss$root:[include]-
)

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
    @ define openssl SSL111$INCLUDE:
    @ define lib oss$root:[include]
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.zip] | copy SYS$INPUT nl:
    !
    @ $(SSL111_LIBSSL32)
    @ $(SSL111_LIBCRYPTO32)

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]zip.exe
    ! zip is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.zip]php_zip.obj -
[.$(OBJ_DIR).ext.zip]zip_stream.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]zip.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]zip.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.zip]php_zip.obj : [.ext.zip]php_zip.c $(HEADERS)
[.$(OBJ_DIR).ext.zip]zip_stream.obj : [.ext.zip]zip_stream.c $(HEADERS)
