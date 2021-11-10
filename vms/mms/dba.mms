############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES)-
,GDBM_INCLUDE_FILE=<gdbm.h>-
)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,oss$root:[include]-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define libcdb [.ext.dba.libcdb]
    @ define libflatfile [.ext.dba.libflatfile]
    @ define libinifile [.ext.dba.libinifile]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.dba.libcdb] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.dba.libflatfile] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.dba.libinifile] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]dba.exe
    ! dba is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.dba]dba_cdb.obj -
[.$(OBJ_DIR).ext.dba]dba_db1.obj -
[.$(OBJ_DIR).ext.dba]dba_db2.obj -
[.$(OBJ_DIR).ext.dba]dba_db3.obj -
[.$(OBJ_DIR).ext.dba]dba_db4.obj -
[.$(OBJ_DIR).ext.dba]dba_dbm.obj -
[.$(OBJ_DIR).ext.dba]dba_flatfile.obj -
[.$(OBJ_DIR).ext.dba]dba_gdbm.obj -
[.$(OBJ_DIR).ext.dba]dba_inifile.obj -
[.$(OBJ_DIR).ext.dba]dba_lmdb.obj -
[.$(OBJ_DIR).ext.dba]dba_ndbm.obj -
[.$(OBJ_DIR).ext.dba]dba_qdbm.obj -
[.$(OBJ_DIR).ext.dba]dba_tcadb.obj -
[.$(OBJ_DIR).ext.dba]dba.obj -
[.$(OBJ_DIR).ext.dba.libcdb]cdb_make.obj -
[.$(OBJ_DIR).ext.dba.libcdb]cdb.obj -
[.$(OBJ_DIR).ext.dba.libcdb]uint32.obj -
[.$(OBJ_DIR).ext.dba.libflatfile]flatfile.obj -
[.$(OBJ_DIR).ext.dba.libinifile]inifile.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]dba.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]dba.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.dba]dba_cdb.obj : [.ext.dba]dba_cdb.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_db1.obj : [.ext.dba]dba_db1.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_db2.obj : [.ext.dba]dba_db2.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_db3.obj : [.ext.dba]dba_db3.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_db4.obj : [.ext.dba]dba_db4.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_dbm.obj : [.ext.dba]dba_dbm.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_flatfile.obj : [.ext.dba]dba_flatfile.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_gdbm.obj : [.ext.dba]dba_gdbm.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_inifile.obj : [.ext.dba]dba_inifile.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_lmdb.obj : [.ext.dba]dba_lmdb.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_ndbm.obj : [.ext.dba]dba_ndbm.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_qdbm.obj : [.ext.dba]dba_qdbm.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba_tcadb.obj : [.ext.dba]dba_tcadb.c $(HEADERS)
[.$(OBJ_DIR).ext.dba]dba.obj : [.ext.dba]dba.c $(HEADERS)
[.$(OBJ_DIR).ext.dba.libcdb]cdb_make.obj : [.ext.dba.libcdb]cdb_make.c $(HEADERS)
[.$(OBJ_DIR).ext.dba.libcdb]cdb.obj : [.ext.dba.libcdb]cdb.c $(HEADERS)
[.$(OBJ_DIR).ext.dba.libcdb]uint32.obj : [.ext.dba.libcdb]uint32.c $(HEADERS)
[.$(OBJ_DIR).ext.dba.libflatfile]flatfile.obj : [.ext.dba.libflatfile]flatfile.c $(HEADERS)
[.$(OBJ_DIR).ext.dba.libinifile]inifile.obj : [.ext.dba.libinifile]inifile.c $(HEADERS)
