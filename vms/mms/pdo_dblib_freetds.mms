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
.FIRST
    @ ! defines for nested includes
    @ define pdo [.ext.pdo]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.pdo_dblib] | copy SYS$INPUT nl:

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
