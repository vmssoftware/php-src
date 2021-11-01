############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define curl oss$root:[include.curl]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.curl] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).vms] | copy SYS$INPUT nl:

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
[.$(OBJ_DIR).ext.curl]share.obj -
[.$(OBJ_DIR).vms]vms_crtl_init.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]curl.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]curl.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.curl]curl_file.obj : [.ext.curl]curl_file.c $(HEADERS)
[.$(OBJ_DIR).ext.curl]interface.obj : [.ext.curl]interface.c $(HEADERS)
[.$(OBJ_DIR).ext.curl]multi.obj : [.ext.curl]multi.c $(HEADERS)
[.$(OBJ_DIR).ext.curl]share.obj : [.ext.curl]share.c $(HEADERS)
[.$(OBJ_DIR).vms]vms_crtl_init.obj : [.vms]vms_crtl_init.c $(HEADERS)
    $(CC) $(CC_FLAGS)/ACCEPT=VAXC_KEYWORDS /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)
