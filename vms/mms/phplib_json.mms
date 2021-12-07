############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.json])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.json] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_json.olb
    ! phplib_json is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.json]json.obj -
[.$(OBJ_DIR).ext.json]json_encoder.obj -
[.$(OBJ_DIR).ext.json]json_parser^.tab.obj -
[.$(OBJ_DIR).ext.json]json_scanner.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_json.olb : [.$(OUT_DIR)]phplib_json.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.json]json.obj : [.ext.json]json.c $(HEADERS)
[.$(OBJ_DIR).ext.json]json_encoder.obj : [.ext.json]json_encoder.c $(HEADERS)
[.$(OBJ_DIR).ext.json]json_parser^.tab.obj : [.ext.json]json_parser^.tab.c $(HEADERS)
[.$(OBJ_DIR).ext.json]json_scanner.obj : [.ext.json]json_scanner.c $(HEADERS)
