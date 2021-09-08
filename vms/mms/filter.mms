############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)/DEFINE=($(CC_DEFINES))/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.filter] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]filter.olb
    ! filter is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.filter]filter.obj -
[.$(OBJ_DIR).ext.filter]sanitizing_filters.obj -
[.$(OBJ_DIR).ext.filter]logical_filters.obj -
[.$(OBJ_DIR).ext.filter]callback_filter.obj -


############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]filter.olb : [.$(OUT_DIR)]filter.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.filter]filter.obj : [.ext.filter]filter.c $(HEADERS)
[.$(OBJ_DIR).ext.filter]sanitizing_filters.obj : [.ext.filter]sanitizing_filters.c $(HEADERS)
[.$(OBJ_DIR).ext.filter]logical_filters.obj : [.ext.filter]logical_filters.c $(HEADERS)
[.$(OBJ_DIR).ext.filter]callback_filter.obj : [.ext.filter]callback_filter.c $(HEADERS)
