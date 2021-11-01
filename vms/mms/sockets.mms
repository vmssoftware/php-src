############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.sockets] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]sockets.exe
    ! sockets is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.sockets]conversions.obj -
[.$(OBJ_DIR).ext.sockets]multicast.obj -
[.$(OBJ_DIR).ext.sockets]sendrecvmsg.obj -
[.$(OBJ_DIR).ext.sockets]sockaddr_conv.obj -
[.$(OBJ_DIR).ext.sockets]sockets.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]sockets.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]sockets.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.sockets]conversions.obj : [.ext.sockets]conversions.c $(HEADERS)
[.$(OBJ_DIR).ext.sockets]multicast.obj : [.ext.sockets]multicast.c $(HEADERS)
[.$(OBJ_DIR).ext.sockets]sendrecvmsg.obj : [.ext.sockets]sendrecvmsg.c $(HEADERS)
[.$(OBJ_DIR).ext.sockets]sockaddr_conv.obj : [.ext.sockets]sockaddr_conv.c $(HEADERS)
[.$(OBJ_DIR).ext.sockets]sockets.obj : [.ext.sockets]sockets.c $(HEADERS)

