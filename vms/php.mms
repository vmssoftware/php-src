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
    @ ! defines for nested includes
    @ define streams [.main.streams]
    @ ! names
    @ BUILD_OUT_DIR = F$ENVIRONMENT("DEFAULT")-"]"+".$(OUT_DIR).]"
    @ BUILD_OBJ_DIR = F$ENVIRONMENT("DEFAULT")-"]"+".$(OBJ_DIR).]"
    @ define /trans=concealed php$build_out 'BUILD_OUT_DIR'
    @ define /trans=concealed php$build_obj 'BUILD_OBJ_DIR'

############################################################################
# Suffixes and rules
############################################################################
.SUFFIXES
.SUFFIXES .EXE .OLB .MMS

.MMS.OLB
    @ ! use the '-' symbol bacause of bug in MMS while updating library
    - $(MMS)/DESCR=$(MMS$SOURCE)/MACRO=( -
        "OUT_DIR=$(OUT_DIR)", -
        "OBJ_DIR=$(OBJ_DIR)", -
        "CC_QUALIFIERS=$(CC_QUALIFIERS)", -
        "CC_DEFINES=$(CC_DEFINES)", -
        "CC_INCLUDES=$(CC_INCLUDES)", -
        "HEADERS=$(HEADERS)" -
    )

.MMS.EXE
    @ ! use the '-' symbol bacause of bug in MMS while updating library
    - $(MMS)/DESCR=$(MMS$SOURCE)/MACRO=( -
        "OUT_DIR=$(OUT_DIR)", -
        "OBJ_DIR=$(OBJ_DIR)", -
        "CC_QUALIFIERS=$(CC_QUALIFIERS)", -
        "CC_DEFINES=$(CC_DEFINES)", -
        "CC_INCLUDES=$(CC_INCLUDES)", -
        "HEADERS=$(HEADERS)" -
    )

############################################################################
# H
############################################################################
HEADERS = -
[.main]php_config.h -
[.zend]zend_config.h -
[.main]build-defs.h

############################################################################
# Target
############################################################################
TARGET : -
$(HEADERS) -
[.$(OUT_DIR)]phplib_date.olb -
[.$(OUT_DIR)]phplib_pcre.olb -
[.$(OUT_DIR)]libxml.olb -
[.$(OUT_DIR)]sqlite3.olb -
[.$(OUT_DIR)]ctype.olb -
[.$(OUT_DIR)]dom.olb -
![.$(OUT_DIR)]bcmath.exe
    ! target built

############################################################################
# H
############################################################################
[.main]php_config.h : [.vms]php_config.h
    copy [.vms]php_config.h [.main]php_config.h

[.main]build-defs.h : [.vms]build-defs.h
    copy [.vms]build-defs.h [.main]build-defs.h

[.zend]zend_config.h : [.vms]zend_config.h
    copy [.vms]zend_config.h [.zend]zend_config.h

############################################################################
# phplib_date
############################################################################
[.$(OUT_DIR)]phplib_date.olb : [.vms.mms]phplib_date.mms

############################################################################
# phplib_pcre
############################################################################
[.$(OUT_DIR)]phplib_pcre.olb : [.vms.mms]phplib_pcre.mms

############################################################################
# libxml
############################################################################
[.$(OUT_DIR)]libxml.olb : [.vms.mms]libxml.mms

############################################################################
# sqlite3
############################################################################
[.$(OUT_DIR)]sqlite3.olb : [.vms.mms]sqlite3.mms

############################################################################
# dom
############################################################################
[.$(OUT_DIR)]dom.olb : [.vms.mms]dom.mms

############################################################################
# ctype
############################################################################
[.$(OUT_DIR)]ctype.olb : [.vms.mms]ctype.mms

############################################################################
# bcmath
############################################################################
[.$(OUT_DIR)]bcmath.exe : [.vms.mms]bcmath.mms

############################################################################
CLEAN :
    del/tree [.$(OUT_DIR)...]*.*;*
