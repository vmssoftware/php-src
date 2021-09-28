############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.xml])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.xml] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_xml.olb
    ! phplib_xml is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.xml]xml.obj -
[.$(OBJ_DIR).ext.xml]compat.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_xml.olb : [.$(OUT_DIR)]phplib_xml.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.xml]xml.obj : [.ext.xml]xml.c $(HEADERS)
[.$(OBJ_DIR).ext.xml]compat.obj : [.ext.xml]compat.c $(HEADERS)

