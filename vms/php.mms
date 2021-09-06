############################################################################
# MMS/EXT/DESCR=php.mms/MACRO=("OUTDIR=OUT","CONFIG=DEBUG")
############################################################################


############################################################################
# Compiler qualifiers
############################################################################
CC_QUALIFIERS = -
/NAMES=(AS_IS,SHORTENED) -
/WARNINGS=(WARNINGS=ALL, DISABLE=(EXTRASEMI,MACROREDEF,QUESTCOMPARE1,QUESTCOMPARE,UNSTRUCTMEM,DUPTYPESPEC)) -
/ACCEPT=NOVAXC_KEYWORDS

############################################################################
# Compiler definitions
############################################################################
CC_DEFINES = -
_USE_STD_STAT, -                ! COMMON
_POSIX_EXIT, -
__STDC_FORMAT_MACROS, -
_LARGEFILE, -
_SOCKADDR_LEN, -
HAVE_TIMELIB_CONFIG_H=1, -
ZEND_ENABLE_STATIC_TSRMLS_CACHE=1, -
PHP_ATOM_INC

############################################################################
# Output folder
############################################################################
.IF OUTDIR
.ELSE
OUTDIR = OUT
.ENDIF

############################################################################
# Configuration
############################################################################
.IF CONFIG
.ELSE
CONFIG = DEBUG
.ENDIF

############################################################################
# Debug/Relase
############################################################################
.IF $(FINDSTRING DEBUG, $(CONFIG)) .EQ DEBUG
CC_QUALIFIERS = $(CC_QUALIFIERS)/DEBUG/NOOPTIMIZE/LIST=$(MMS$TARGET_NAME)/SHOW=ALL
CC_DEFINES = $(CC_DEFINES),_DEBUG
OUT_DIR = $(OUTDIR).$(CONFIG)
OBJ_DIR = $(OUT_DIR).OBJ
LINK_FLAGS = /NODEBUG/MAP=[.$(OUT_DIR)]$(NOTDIR $(MMS$TARGET_NAME))/TRACE/DSF=[.$(OUT_DIR)]$(NOTDIR $(MMS$TARGET_NAME)).DSF
.ELSE
CC_QUALIFIERS = $(CC_QUALIFIERS)/NODEBUG/OPTIMIZE/NOLIST
CC_DEFINES = $(CC_DEFINES),_NDEBUG
OUT_DIR = $(OUTDIR).$(CONFIG)
OBJ_DIR = $(OUT_DIR).OBJ
LINK_FLAGS = /NODEBUG/NOMAP/NOTRACEBACK
.ENDIF

############################################################################
# Include folders
############################################################################
CC_INCLUDES = -
[], -
[.main], -
[.tsrm], -
[.zend]

############################################################################
# Compiler flags combination
############################################################################
CC_FLAGS = $(CC_QUALIFIERS)/DEFINE=($(CC_DEFINES))/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    ! defines for nested includes
    define streams [.main.streams]
    define lib [.ext.date.lib]
    ! names
    BUILD_OUT_DIR = F$ENVIRONMENT("DEFAULT")-"]"+".$(OUT_DIR).]"
    BUILD_OBJ_DIR = F$ENVIRONMENT("DEFAULT")-"]"+".$(OBJ_DIR).]"
    define /trans=concealed php$build_out 'BUILD_OUT_DIR'
    define /trans=concealed php$build_obj 'BUILD_OBJ_DIR'

############################################################################
# Suffixes and rules
############################################################################
.SUFFIXES
.SUFFIXES .EXE .OLB .OBJ .C

.C.OBJ
    @ pipe create/dir $(DIR $(MMS$TARGET)) | copy SYS$INPUT nl:
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)

.OBJ.OLB
    @ pipe create/dir $(DIR $(MMS$TARGET)) | copy SYS$INPUT nl:
    @ IF F$SEARCH("$(MMS$TARGET)") .EQS. "" THEN $(LIBR)/CREATE $(MMS$TARGET)
    $(LIBR) $(MMS$TARGET) $(MMS$SOURCE)

############################################################################
# Target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_date.olb
    ! target built

############################################################################
# H
############################################################################
HEADERS = -
[.main]php_config.h -
[.zend]zend_config.h -
[.ext.date.lib]timelib_config.h -
[.main]build-defs.h

[.main]php_config.h : [.vms]php_config.h
    copy [.vms]php_config.h [.main]php_config.h

[.main]build-defs.h : [.vms]build-defs.h
    copy [.vms]build-defs.h [.main]build-defs.h

[.ext.date.lib]timelib_config.h : [.vms]timelib_config.h
    copy [.vms]timelib_config.h [.ext.date.lib]timelib_config.h

[.zend]zend_config.h : [.vms]zend_config.h
    copy [.vms]zend_config.h [.main]zend_config.h

############################################################################
# phplib_date
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

############################################################################
CLEAN :
    del/tree [.$(OUT_DIR)...]*.*;*
