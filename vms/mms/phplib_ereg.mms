############################################################################
# Must be invoked from php.mms
############################################################################

CC_DEFINES_INNER = $(CC_DEFINES),-
"regexec"="php_regexec",-
"regerror"="php_regerror",-
"regfree"="php_regfree",-
"regcomp"="php_regcomp"

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES_INNER))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
.ELSE
X86_START =
X86_LIBDEF =
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.ereg.regex] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_ereg.olb
    ! phplib_ereg is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.ereg.regex]regcomp.obj -
[.$(OBJ_DIR).ext.ereg.regex]regexec.obj -
[.$(OBJ_DIR).ext.ereg.regex]regerror.obj -
[.$(OBJ_DIR).ext.ereg.regex]regfree.obj

############################################################################
# Main target rule
############################################################################
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
