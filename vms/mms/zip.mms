############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,oss$root:[include]-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define openssl SSL111$INCLUDE:
    @ define lib oss$root:[include]
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.zip] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]zip.exe
    ! zip is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.zip]php_zip.obj -
[.$(OBJ_DIR).ext.zip]zip_stream.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]zip.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]zip.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.zip]php_zip.obj : [.ext.zip]php_zip.c $(HEADERS)
[.$(OBJ_DIR).ext.zip]zip_stream.obj : [.ext.zip]zip_stream.c $(HEADERS)
