############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,[.sapi.apache2handler]-
)

############################################################################
# First
############################################################################
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
X86_OSSDEF = define/nolog/trans=concealed oss$root DSA22:[OSS.X86.]
APACHE$APR_SHR = define/nolog APACHE$APR_SHR oss$root:[lib]apache$apr_shr.exe
APACHE$APU_SHR = define/nolog APACHE$APU_SHR oss$root:[lib]apache$apu_shr.exe
APACHE$HTTPD_SHR = define/nolog APACHE$HTTPD_SHR oss$root:[lib]apache$httpd_shr.exe
.ELSE
X86_START =
X86_LIBDEF =
X86_OSSDEF = 
APACHE$APR_SHR =
APACHE$APU_SHR =
APACHE$HTTPD_SHR =
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    $(X86_OSSDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).sapi.apache2handler] | copy SYS$INPUT nl:
    !
    @ $(APACHE$APR_SHR)
    @ $(APACHE$APU_SHR)
    @ $(APACHE$HTTPD_SHR)

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]mod_php.exe
    ! mod_php is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).sapi.apache2handler]apache_config.obj -
[.$(OBJ_DIR).sapi.apache2handler]mod_php.obj -
[.$(OBJ_DIR).sapi.apache2handler]php_functions.obj -
[.$(OBJ_DIR).sapi.apache2handler]sapi_apache2.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]mod_php.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]mod_php.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).sapi.apache2handler]apache_config.obj : [.sapi.apache2handler]apache_config.c $(HEADERS)
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)+apache$root:[include]apache$library.tlb/lib

[.$(OBJ_DIR).sapi.apache2handler]mod_php.obj : [.sapi.apache2handler]mod_php.c $(HEADERS)
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)+apache$root:[include]apache$library.tlb/lib

[.$(OBJ_DIR).sapi.apache2handler]php_functions.obj : [.sapi.apache2handler]php_functions.c $(HEADERS)
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)+apache$root:[include]apache$library.tlb/lib

[.$(OBJ_DIR).sapi.apache2handler]sapi_apache2.obj : [.sapi.apache2handler]sapi_apache2.c $(HEADERS)
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)+apache$root:[include]apache$library.tlb/lib
