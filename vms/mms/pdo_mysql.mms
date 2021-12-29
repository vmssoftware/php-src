############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,oss$root:[include.mariadb]-
,oss$root:[include]-
)

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
    @ define pdo [.ext.pdo]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.pdo_mysql] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]pdo_mysql.exe
    ! pdo_mysql is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.pdo_mysql]mysql_driver.obj -
[.$(OBJ_DIR).ext.pdo_mysql]mysql_statement.obj -
[.$(OBJ_DIR).ext.pdo_mysql]pdo_mysql.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]pdo_mysql.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]pdo_mysql.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.pdo_mysql]mysql_driver.obj : [.ext.pdo_mysql]mysql_driver.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo_mysql]mysql_statement.obj : [.ext.pdo_mysql]mysql_statement.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo_mysql]pdo_mysql.obj : [.ext.pdo_mysql]pdo_mysql.c $(HEADERS)
