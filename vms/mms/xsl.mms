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
    @ define libexslt oss$root:[include.libexslt]
    @ define libxslt oss$root:[include.libxslt]
    @ define libxml oss$root:[include.libxml]
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
