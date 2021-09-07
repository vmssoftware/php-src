############################################################################
# -
MMS/EXT/DESCR=phplib_ereg.mms/MACRO=( -
    "OUT_DIR=...", -
    "OBJ_DIR=...", -
    "CC_QUALIFIERS=...", -
    "CC_DEFINES=...", -
    "CC_INCLUDES=...", -
    "LINK_FLAGS=..." -
)
############################################################################

############################################################################
# Compiler flags combination
############################################################################
CC_DEFINES_INNER = $(CC_DEFINES),-
"regexec"="php_regexec",-
"regerror"="php_regerror",-
"regfree"="php_regfree",-
"regcomp"="php_regcomp"

CC_FLAGS = $(CC_QUALIFIERS)/DEFINE=($(CC_DEFINES_INNER))/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.ereg.regex] | copy SYS$INPUT nl:

############################################################################
# Suffixes and rules
############################################################################
.SUFFIXES
.SUFFIXES .OLB .OBJ .C

.C.OBJ
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)

.OBJ.OLB
    @ IF F$SEARCH("$(MMS$TARGET)") .EQS. "" THEN $(LIBR)/CREATE $(MMS$TARGET)
    $(LIBR) $(MMS$TARGET) $(MMS$SOURCE)

############################################################################
# Target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_ereg.olb
    ! phplib_ereg is built

############################################################################
# H
############################################################################

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.ereg.regex]regcomp.obj -
[.$(OBJ_DIR).ext.ereg.regex]regexec.obj -
[.$(OBJ_DIR).ext.ereg.regex]regerror.obj -
[.$(OBJ_DIR).ext.ereg.regex]regfree.obj

[.$(OUT_DIR)]phplib_ereg.olb : [.$(OUT_DIR)]phplib_ereg.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.ereg]ereg.obj : [.ext.ereg]ereg.c $(HEADERS)
[.$(OBJ_DIR).ext.ereg.regex]regcomp.obj : [.ext.ereg.regex]regcomp.c $(HEADERS)
[.$(OBJ_DIR).ext.ereg.regex]regexec.obj : [.ext.ereg.regex]regexec.c $(HEADERS)
[.$(OBJ_DIR).ext.ereg.regex]regerror.obj : [.ext.ereg.regex]regerror.c $(HEADERS)
[.$(OBJ_DIR).ext.ereg.regex]regfree.obj : [.ext.ereg.regex]regfree.c $(HEADERS)
