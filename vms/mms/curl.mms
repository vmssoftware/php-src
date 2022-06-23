############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES))

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ define curl oss$root:[include.curl]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.curl] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]curl.exe
    ! curl is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.curl]curl_file.obj -
[.$(OBJ_DIR).ext.curl]interface.obj -
[.$(OBJ_DIR).ext.curl]multi.obj -
[.$(OBJ_DIR).ext.curl]share.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]curl.exe : $(OBJ_FILES)
.IF X86_64_CROSS
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]curl_x86.opt/opt
.ELSE
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]curl.opt/opt
.ENDIF

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.curl]curl_file.obj : [.ext.curl]curl_file.c $(HEADERS)
[.$(OBJ_DIR).ext.curl]interface.obj : [.ext.curl]interface.c $(HEADERS)
[.$(OBJ_DIR).ext.curl]multi.obj : [.ext.curl]multi.c $(HEADERS)
[.$(OBJ_DIR).ext.curl]share.obj : [.ext.curl]share.c $(HEADERS)
