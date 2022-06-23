############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.reflection])

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.reflection] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_reflection.olb
    ! phplib_reflection is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.reflection]php_reflection.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_reflection.olb : [.$(OUT_DIR)]phplib_reflection.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.reflection]php_reflection.obj : [.ext.reflection]php_reflection.c $(HEADERS)
