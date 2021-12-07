############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.pdo],oss$root:[include])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.pdo] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_pdo.olb
    ! phplib_pdo is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.pdo]pdo.obj -
[.$(OBJ_DIR).ext.pdo]pdo_dbh.obj -
[.$(OBJ_DIR).ext.pdo]pdo_stmt.obj -
[.$(OBJ_DIR).ext.pdo]pdo_sql_parser.obj -
[.$(OBJ_DIR).ext.pdo]pdo_sqlstate.obj -


############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_pdo.olb : [.$(OUT_DIR)]phplib_pdo.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.pdo]pdo.obj : [.ext.pdo]pdo.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_dbh.obj : [.ext.pdo]pdo_dbh.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_stmt.obj : [.ext.pdo]pdo_stmt.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_sql_parser.obj : [.ext.pdo]pdo_sql_parser.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_sqlstate.obj : [.ext.pdo]pdo_sqlstate.c $(HEADERS)
