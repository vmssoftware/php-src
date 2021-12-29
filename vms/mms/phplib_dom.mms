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
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
.ELSE
X86_START =
X86_LIBDEF =
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.dom] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_dom.olb
    ! dom is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.dom]attr.obj -
[.$(OBJ_DIR).ext.dom]cdatasection.obj -
[.$(OBJ_DIR).ext.dom]characterdata.obj -
[.$(OBJ_DIR).ext.dom]comment.obj -
[.$(OBJ_DIR).ext.dom]document.obj -
[.$(OBJ_DIR).ext.dom]documentfragment.obj -
[.$(OBJ_DIR).ext.dom]documenttype.obj -
[.$(OBJ_DIR).ext.dom]dom_iterators.obj -
[.$(OBJ_DIR).ext.dom]domexception.obj -
[.$(OBJ_DIR).ext.dom]domimplementation.obj -
[.$(OBJ_DIR).ext.dom]element.obj -
[.$(OBJ_DIR).ext.dom]entity.obj -
[.$(OBJ_DIR).ext.dom]entityreference.obj -
[.$(OBJ_DIR).ext.dom]namednodemap.obj -
[.$(OBJ_DIR).ext.dom]node.obj -
[.$(OBJ_DIR).ext.dom]nodelist.obj -
[.$(OBJ_DIR).ext.dom]notation.obj -
[.$(OBJ_DIR).ext.dom]parentnode.obj -
[.$(OBJ_DIR).ext.dom]php_dom.obj -
[.$(OBJ_DIR).ext.dom]processinginstruction.obj -
[.$(OBJ_DIR).ext.dom]text.obj -
[.$(OBJ_DIR).ext.dom]xpath.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_dom.olb : [.$(OUT_DIR)]phplib_dom.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.dom]attr.obj : [.ext.dom]attr.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]cdatasection.obj : [.ext.dom]cdatasection.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]characterdata.obj : [.ext.dom]characterdata.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]comment.obj : [.ext.dom]comment.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]document.obj : [.ext.dom]document.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]documentfragment.obj : [.ext.dom]documentfragment.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]documenttype.obj : [.ext.dom]documenttype.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]dom_iterators.obj : [.ext.dom]dom_iterators.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]domexception.obj : [.ext.dom]domexception.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]domimplementation.obj : [.ext.dom]domimplementation.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]element.obj : [.ext.dom]element.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]entity.obj : [.ext.dom]entity.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]entityreference.obj : [.ext.dom]entityreference.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]namednodemap.obj : [.ext.dom]namednodemap.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]node.obj : [.ext.dom]node.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]nodelist.obj : [.ext.dom]nodelist.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]notation.obj : [.ext.dom]notation.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]parentnode.obj : [.ext.dom]parentnode.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]php_dom.obj : [.ext.dom]php_dom.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]processinginstruction.obj : [.ext.dom]processinginstruction.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]text.obj : [.ext.dom]text.c $(HEADERS)
[.$(OBJ_DIR).ext.dom]xpath.obj : [.ext.dom]xpath.c $(HEADERS)
