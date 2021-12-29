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
    @ define libexslt oss$root:[include.libexslt]
    @ define libxslt oss$root:[include.libxslt]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.xsl] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]xsl.exe
    ! xsl is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.xsl]php_xsl.obj -
[.$(OBJ_DIR).ext.xsl]xsltprocessor.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]xsl.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]xsl.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.xsl]php_xsl.obj : [.ext.xsl]php_xsl.c $(HEADERS)
[.$(OBJ_DIR).ext.xsl]xsltprocessor.obj : [.ext.xsl]xsltprocessor.c $(HEADERS)
