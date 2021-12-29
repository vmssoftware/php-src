############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES)-
,oss$root:[include.mariadb]-
,oss$root:[include]-
)

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
    @ pipe create/dir [.$(OBJ_DIR).ext.mysqli] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]mysqli.exe
    ! mysqli is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.mysqli]mysqli_api.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_driver.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_exception.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_nonapi.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_prop.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_report.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_result_iterator.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli_warning.obj -
[.$(OBJ_DIR).ext.mysqli]mysqli.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]mysqli.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]mysqli.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.mysqli]mysqli_api.obj : [.ext.mysqli]mysqli_api.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_driver.obj : [.ext.mysqli]mysqli_driver.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_exception.obj : [.ext.mysqli]mysqli_exception.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_nonapi.obj : [.ext.mysqli]mysqli_nonapi.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_prop.obj : [.ext.mysqli]mysqli_prop.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_report.obj : [.ext.mysqli]mysqli_report.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_result_iterator.obj : [.ext.mysqli]mysqli_result_iterator.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli_warning.obj : [.ext.mysqli]mysqli_warning.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqli]mysqli.obj : [.ext.mysqli]mysqli.c $(HEADERS)
