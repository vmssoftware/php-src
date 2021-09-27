############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.pdo],oss$root:[include])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define streams [.main.streams]
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
[.$(OBJ_DIR).ext.pdo]pdo.c -
[.$(OBJ_DIR).ext.pdo]pdo_dbh.c -
[.$(OBJ_DIR).ext.pdo]pdo_stmt.c -
[.$(OBJ_DIR).ext.pdo]pdo_sql_parser.c -
[.$(OBJ_DIR).ext.pdo]pdo_sqlstate.c -


############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_pdo.olb : [.$(OUT_DIR)]phplib_pdo.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.pdo]pdo.c : [.ext.pdo]pdo.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_dbh.c : [.ext.pdo]pdo_dbh.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_stmt.c : [.ext.pdo]pdo_stmt.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_sql_parser.c : [.ext.pdo]pdo_sql_parser.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo]pdo_sqlstate.c : [.ext.pdo]pdo_sqlstate.c $(HEADERS)
