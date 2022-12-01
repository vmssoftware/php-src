############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

.FIRST
    $(SETUP_COMPILER)
    @ ! defines for nested includes
    @ define openssl SSL111$INCLUDE:
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.openssl] | copy SYS$INPUT nl:
    !

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]openssl.exe
    ! openssl is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.openssl]openssl.obj -
[.$(OBJ_DIR).ext.openssl]xp_ssl.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]openssl.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]openssl.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.openssl]openssl.obj : [.ext.openssl]openssl.c $(HEADERS)
[.$(OBJ_DIR).ext.openssl]xp_ssl.obj : [.ext.openssl]xp_ssl.c $(HEADERS)
