############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.session])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define lib [.ext.date.lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.session] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_session.olb
    ! phplib_session is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.session]mod_files.obj -
[.$(OBJ_DIR).ext.session]mod_mm.obj -
[.$(OBJ_DIR).ext.session]mod_user.obj -
[.$(OBJ_DIR).ext.session]mod_user_class.obj -
[.$(OBJ_DIR).ext.session]session.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_session.olb : [.$(OUT_DIR)]phplib_session.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.session]mod_files.obj : [.ext.session]mod_files.c $(HEADERS)
[.$(OBJ_DIR).ext.session]mod_mm.obj : [.ext.session]mod_mm.c $(HEADERS)
[.$(OBJ_DIR).ext.session]mod_user.obj : [.ext.session]mod_user.c $(HEADERS)
[.$(OBJ_DIR).ext.session]mod_user_class.obj : [.ext.session]mod_user_class.c $(HEADERS)
[.$(OBJ_DIR).ext.session]session.obj : [.ext.session]session.c $(HEADERS)
