############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.spl])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.spl] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_spl.olb
    ! phplib_spl is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.spl]php_spl.obj -
[.$(OBJ_DIR).ext.spl]spl_array.obj -
[.$(OBJ_DIR).ext.spl]spl_directory.obj -
[.$(OBJ_DIR).ext.spl]spl_dllist.obj -
[.$(OBJ_DIR).ext.spl]spl_exceptions.obj -
[.$(OBJ_DIR).ext.spl]spl_fixedarray.obj -
[.$(OBJ_DIR).ext.spl]spl_functions.obj -
[.$(OBJ_DIR).ext.spl]spl_heap.obj -
[.$(OBJ_DIR).ext.spl]spl_iterators.obj -
[.$(OBJ_DIR).ext.spl]spl_observer.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_spl.olb : [.$(OUT_DIR)]phplib_spl.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.spl]php_spl.obj : [.ext.spl]php_spl.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_array.obj : [.ext.spl]spl_array.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_directory.obj : [.ext.spl]spl_directory.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_dllist.obj : [.ext.spl]spl_dllist.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_exceptions.obj : [.ext.spl]spl_exceptions.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_fixedarray.obj : [.ext.spl]spl_fixedarray.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_functions.obj : [.ext.spl]spl_functions.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_heap.obj : [.ext.spl]spl_heap.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_iterators.obj : [.ext.spl]spl_iterators.c $(HEADERS)
[.$(OBJ_DIR).ext.spl]spl_observer.obj : [.ext.spl]spl_observer.c $(HEADERS)

