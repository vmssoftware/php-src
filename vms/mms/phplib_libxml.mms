############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES))

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ define libxml oss$root:[include.libxml]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.libxml] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_libxml.olb
    ! libxml is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.libxml]libxml.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_libxml.olb : [.$(OUT_DIR)]phplib_libxml.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.libxml]libxml.obj : [.ext.libxml]libxml.c $(HEADERS)
