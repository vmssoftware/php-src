############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).sapi.cgi] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).main] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).vms] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]php-cgi.exe
    ! php-cgi is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).sapi.cgi]cgi_main.obj -
[.$(OBJ_DIR).main]fastcgi.obj -
[.$(OBJ_DIR).vms]vms_crtl_init.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]php-cgi.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /EXE=$(MMS$TARGET) [.vms.opt]php-cgi.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).sapi.cgi]cgi_main.obj : [.sapi.cgi]cgi_main.c $(HEADERS)
[.$(OBJ_DIR).main]fastcgi.obj : [.main]fastcgi.c $(HEADERS)
[.$(OBJ_DIR).vms]vms_crtl_init.obj : [.vms]vms_crtl_init.c $(HEADERS)
    $(CC) $(CC_FLAGS)/ACCEPT=VAXC_KEYWORDS /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)
