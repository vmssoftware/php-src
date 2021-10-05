############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.tokenizer])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.tokenizer] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_tokenizer.olb
    ! phplib_tokenizer is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.tokenizer]tokenizer.obj -
[.$(OBJ_DIR).ext.tokenizer]tokenizer_data.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_tokenizer.olb : [.$(OUT_DIR)]phplib_tokenizer.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.tokenizer]tokenizer.obj : [.ext.tokenizer]tokenizer.c $(HEADERS)
[.$(OBJ_DIR).ext.tokenizer]tokenizer_data.obj : [.ext.tokenizer]tokenizer_data.c $(HEADERS)

