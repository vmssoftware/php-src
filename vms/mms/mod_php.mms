############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,[.sapi.apache2handler]-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).sapi.apache2handler] | copy SYS$INPUT nl:

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
