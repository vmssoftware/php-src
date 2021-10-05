############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.pdo_sqlite],oss$root:[include])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define pdo [.ext.pdo]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.pdo_sqlite] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_pdolite.olb
    ! phplib_pdolite is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.pdo_sqlite]pdo_sqlite.obj -
[.$(OBJ_DIR).ext.pdo_sqlite]sqlite_driver.obj -
[.$(OBJ_DIR).ext.pdo_sqlite]sqlite_statement.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_pdolite.olb : [.$(OUT_DIR)]phplib_pdolite.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.pdo_sqlite]pdo_sqlite.obj : [.ext.pdo_sqlite]pdo_sqlite.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo_sqlite]sqlite_driver.obj : [.ext.pdo_sqlite]sqlite_driver.c $(HEADERS)
[.$(OBJ_DIR).ext.pdo_sqlite]sqlite_statement.obj : [.ext.pdo_sqlite]sqlite_statement.c $(HEADERS)
