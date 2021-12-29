############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G),BADANSIALIAS)) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.phar])

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
    @ pipe create/dir [.$(OBJ_DIR).ext.phar] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_phar.olb
    ! phplib_phar is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.phar]dirstream.obj -
[.$(OBJ_DIR).ext.phar]func_interceptors.obj -
[.$(OBJ_DIR).ext.phar]phar.obj -
[.$(OBJ_DIR).ext.phar]phar_object.obj -
[.$(OBJ_DIR).ext.phar]phar_path_check.obj -
[.$(OBJ_DIR).ext.phar]stream.obj -
[.$(OBJ_DIR).ext.phar]tar.obj -
[.$(OBJ_DIR).ext.phar]util.obj -
[.$(OBJ_DIR).ext.phar]zip.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_phar.olb : [.$(OUT_DIR)]phplib_phar.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.phar]dirstream.obj : [.ext.phar]dirstream.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]func_interceptors.obj : [.ext.phar]func_interceptors.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]phar.obj : [.ext.phar]phar.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]phar_object.obj : [.ext.phar]phar_object.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]phar_path_check.obj : [.ext.phar]phar_path_check.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]stream.obj : [.ext.phar]stream.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]tar.obj : [.ext.phar]tar.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]util.obj : [.ext.phar]util.c $(HEADERS)
[.$(OBJ_DIR).ext.phar]zip.obj : [.ext.phar]zip.c $(HEADERS)
