############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)/DEFINE=($(CC_DEFINES))/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define lib [.ext.date.lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.date.lib] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_date.olb
    ! phplib_date is built

############################################################################
# Header files
############################################################################
HEADERS = $(HEADERS) [.ext.date.lib]timelib_config.h

[.ext.date.lib]timelib_config.h : [.vms]timelib_config.h
    copy [.vms]timelib_config.h [.ext.date.lib]timelib_config.h

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.date]php_date.obj -
[.$(OBJ_DIR).ext.date.lib]astro.obj -
[.$(OBJ_DIR).ext.date.lib]dow.obj -
[.$(OBJ_DIR).ext.date.lib]interval.obj -
[.$(OBJ_DIR).ext.date.lib]parse_date.obj -
[.$(OBJ_DIR).ext.date.lib]parse_iso_intervals.obj -
[.$(OBJ_DIR).ext.date.lib]parse_tz.obj -
[.$(OBJ_DIR).ext.date.lib]timelib.obj -
[.$(OBJ_DIR).ext.date.lib]tm2unixtime.obj -
[.$(OBJ_DIR).ext.date.lib]unixtime2tm.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_date.olb : [.$(OUT_DIR)]phplib_date.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.date]php_date.obj : [.ext.date]php_date.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]astro.obj : [.ext.date.lib]astro.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]dow.obj : [.ext.date.lib]dow.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]interval.obj : [.ext.date.lib]interval.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]parse_date.obj : [.ext.date.lib]parse_date.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]parse_iso_intervals.obj : [.ext.date.lib]parse_iso_intervals.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]parse_tz.obj : [.ext.date.lib]parse_tz.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]timelib.obj : [.ext.date.lib]timelib.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]tm2unixtime.obj : [.ext.date.lib]tm2unixtime.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]unixtime2tm.obj : [.ext.date.lib]unixtime2tm.c $(HEADERS)
