############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=-
($(CC_INCLUDES)-
,[.ext.mbstring.libmbfl.mbfl]-
,oss$root:[include]-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define libmbfl [.ext.mbstring.libmbfl]
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.mbstring] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.mbstring.libmbfl] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]mbstring.exe
    ! mbstring is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.mbstring]mbstring.obj -
[.$(OBJ_DIR).ext.mbstring]mb_gpc.obj -
[.$(OBJ_DIR).ext.mbstring]php_mbregex.obj -
[.$(OBJ_DIR).ext.mbstring]php_unicode.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]mbstring.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]mbstring.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.mbstring]mbstring.obj : [.ext.mbstring]mbstring.c $(HEADERS)
[.$(OBJ_DIR).ext.mbstring]mb_gpc.obj : [.ext.mbstring]mb_gpc.c $(HEADERS)
[.$(OBJ_DIR).ext.mbstring]php_mbregex.obj : [.ext.mbstring]php_mbregex.c $(HEADERS)
[.$(OBJ_DIR).ext.mbstring]php_unicode.obj : [.ext.mbstring]php_unicode.c $(HEADERS)
