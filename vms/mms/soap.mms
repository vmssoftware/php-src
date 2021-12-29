############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

############################################################################
# First
############################################################################
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
X86_OSSDEF = define/nolog/trans=concealed oss$root DSA22:[OSS.X86.]
.ELSE
X86_START =
X86_LIBDEF =
X86_OSSDEF = 
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    $(X86_OSSDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.soap] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]soap.exe
    ! soap is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.soap]php_encoding.obj -
[.$(OBJ_DIR).ext.soap]php_http.obj -
[.$(OBJ_DIR).ext.soap]php_packet_soap.obj -
[.$(OBJ_DIR).ext.soap]php_schema.obj -
[.$(OBJ_DIR).ext.soap]php_sdl.obj -
[.$(OBJ_DIR).ext.soap]php_xml.obj -
[.$(OBJ_DIR).ext.soap]soap.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]soap.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]soap.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.soap]php_encoding.obj : [.ext.soap]php_encoding.c $(HEADERS)
[.$(OBJ_DIR).ext.soap]php_http.obj : [.ext.soap]php_http.c $(HEADERS)
[.$(OBJ_DIR).ext.soap]php_packet_soap.obj : [.ext.soap]php_packet_soap.c $(HEADERS)
[.$(OBJ_DIR).ext.soap]php_schema.obj : [.ext.soap]php_schema.c $(HEADERS)
[.$(OBJ_DIR).ext.soap]php_sdl.obj : [.ext.soap]php_sdl.c $(HEADERS)
[.$(OBJ_DIR).ext.soap]php_xml.obj : [.ext.soap]php_xml.c $(HEADERS)
[.$(OBJ_DIR).ext.soap]soap.obj : [.ext.soap]soap.c $(HEADERS)
