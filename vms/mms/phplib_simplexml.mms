############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.simplexml])

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
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.simplexml] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_simplexml.olb
    ! phplib_simplexml is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.simplexml]simplexml.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_simplexml.olb : [.$(OUT_DIR)]phplib_simplexml.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.simplexml]simplexml.obj : [.ext.simplexml]simplexml.c $(HEADERS)
