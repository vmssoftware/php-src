############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.tsrm])

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).tsrm] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_tsrm.olb
    ! phplib_tsrm is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).tsrm]tsrm.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_tsrm.olb : [.$(OUT_DIR)]phplib_tsrm.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).tsrm]tsrm.obj : [.tsrm]tsrm.c $(HEADERS)

