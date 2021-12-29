############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES)-
)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,oss$root:[include]-
,oss$root:[include.freetds]-
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
    @ define pdo [.ext.pdo]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.pdo_dblib] | copy SYS$INPUT nl:
    !
    @ $(SSL111_LIBSSL32)
    @ $(SSL111_LIBCRYPTO32)

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]pdo_dblib_freetds.exe
    ! pdo_dblib_freetds is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.pdo_dblib]dblib_driver.obj -
[.$(OBJ_DIR).ext.pdo_dblib]dblib_stmt.obj -
[.$(OBJ_DIR).ext.pdo_dblib]pdo_dblib.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]pdo_dblib_freetds.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]pdo_dblib_freetds.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.pdo_dblib]dblib_driver.obj : [.ext.pdo_dblib]dblib_driver.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo_dblib]dblib_stmt.obj : [.ext.pdo_dblib]dblib_stmt.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo_dblib]pdo_dblib.obj : [.ext.pdo_dblib]pdo_dblib.c $(HEADERS)
