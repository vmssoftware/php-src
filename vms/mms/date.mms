############################################################################
# -
MMS/EXT/DESCR=date.mms/MACRO=( -
    "OUT_DIR=...", -
    "OBJ_DIR=...", -
    "CC_QUALIFIERS=...", -
    "CC_DEFINES=...", -
    "CC_INCLUDES=...", -
    "LINK_FLAGS=..." -
)
############################################################################

############################################################################
# Compiler flags combination
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
# Suffixes and rules
############################################################################
.SUFFIXES
.SUFFIXES .OLB .OBJ .C

.C.OBJ
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)

.OBJ.OLB
    @ IF F$SEARCH("$(MMS$TARGET)") .EQS. "" THEN $(LIBR)/CREATE $(MMS$TARGET)
    $(LIBR) $(MMS$TARGET) $(MMS$SOURCE)

############################################################################
# Target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_date.olb
    ! phplib_date is built

############################################################################
# H
############################################################################
HEADERS = $(HEADERS) [.ext.date.lib]timelib_config.h

[.ext.date.lib]timelib_config.h : [.vms]timelib_config.h
    copy [.vms]timelib_config.h [.ext.date.lib]timelib_config.h

############################################################################
# Object files
############################################################################
PHPLIB_DATE_OBJ = -
[.$(OBJ_DIR).ext.date]php_date.obj -
[.$(OBJ_DIR).ext.date.lib]astro.obj -
[.$(OBJ_DIR).ext.date.lib]dow.obj -
[.$(OBJ_DIR).ext.date.lib]interval.obj -
[.$(OBJ_DIR).ext.date.lib]parse_date.obj -
[.$(OBJ_DIR).ext.date.lib]parse_iso_intervals.obj -
[.$(OBJ_DIR).ext.date.lib]parse_posix.obj -
[.$(OBJ_DIR).ext.date.lib]parse_tz.obj -
[.$(OBJ_DIR).ext.date.lib]timelib.obj -
[.$(OBJ_DIR).ext.date.lib]tm2unixtime.obj -
[.$(OBJ_DIR).ext.date.lib]unixtime2tm.obj -

[.$(OUT_DIR)]phplib_date.olb : [.$(OUT_DIR)]phplib_date.olb($(PHPLIB_DATE_OBJ))
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
[.$(OBJ_DIR).ext.date.lib]parse_posix.obj : [.ext.date.lib]parse_posix.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]parse_tz.obj : [.ext.date.lib]parse_tz.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]timelib.obj : [.ext.date.lib]timelib.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]tm2unixtime.obj : [.ext.date.lib]tm2unixtime.c $(HEADERS)
[.$(OBJ_DIR).ext.date.lib]unixtime2tm.obj : [.ext.date.lib]unixtime2tm.c $(HEADERS)
