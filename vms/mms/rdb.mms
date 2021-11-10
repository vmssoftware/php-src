############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES)-
)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define pdo [.ext.pdo]
    @ ! programs
    @ sqlmod :== mcr sql$mod
    @ swig :== $swig$root:[bin]swig.exe
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.rdb] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]rdb.exe
    ! rdb is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.rdb]db.obj -
[.$(OBJ_DIR).ext.rdb]rdb_wrap.obj -
[.$(OBJ_DIR).ext.rdb]sql.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]rdb.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]rdb.opt/opt

############################################################################
# Source files
############################################################################
[.ext.rdb]rdb_wrap.c : [.ext.rdb]rdb.i
    set def [.ext.rdb]
    swig -php rdb.i
    purge/nolog
    set def [--]

[.$(OBJ_DIR).ext.rdb]db.obj : [.ext.rdb]db.c $(HEADERS)
[.$(OBJ_DIR).ext.rdb]rdb_wrap.obj : [.ext.rdb]rdb_wrap.c $(HEADERS)
[.$(OBJ_DIR).ext.rdb]sql.obj : [.ext.rdb]sql.sqlmod
    sqlmod [.ext.rdb]sql.sqlmod
