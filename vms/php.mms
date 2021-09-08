############################################################################
# MMS/EXT/DESCR=php.mms/MACRO=("OUTDIR=OUT","CONFIG=DEBUG")
############################################################################

############################################################################
# Compiler qualifiers
############################################################################
CC_QUALIFIERS_G = -
/NAMES=(AS_IS,SHORTENED) -
/WARNINGS=(WARNINGS=ALL, DISABLE=(EXTRASEMI,MACROREDEF,QUESTCOMPARE1,QUESTCOMPARE,UNSTRUCTMEM,DUPTYPESPEC)) -
/ACCEPT=NOVAXC_KEYWORDS

############################################################################
# Compiler definitions
############################################################################
CC_DEFINES_G = -
_USE_STD_STAT,-
_POSIX_EXIT,-
__STDC_FORMAT_MACROS,-
_LARGEFILE,-
_SOCKADDR_LEN,-
ZEND_ENABLE_STATIC_TSRMLS_CACHE=1,-
PHP_ATOM_INC,-
PCRE2_CODE_UNIT_WIDTH=8

############################################################################
# Include folders
############################################################################
CC_INCLUDES_G = -
[], -
[.main], -
[.tsrm], -
[.zend]

############################################################################
# Headers
############################################################################
HEADERS_G = -
[.main]php_config.h -
[.zend]zend_config.h -
[.main]build-defs.h

############################################################################
# Check output folder
############################################################################
.IF OUTDIR
.ELSE
OUTDIR = OUT
.ENDIF

############################################################################
# Check configuration
############################################################################
.IF CONFIG
.ELSE
CONFIG = DEBUG
.ENDIF

.IF $(FINDSTRING DEBUG, $(CONFIG)) .EQ DEBUG
IS_DEBUG=1
.ENDIF

OUT_DIR = $(OUTDIR).$(CONFIG)

############################################################################
# First for all libraries
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define streams [.main.streams]

############################################################################
# Suffixes and rules
############################################################################
.SUFFIXES
.SUFFIXES .EXE .OLB .MMS

.MMS.OLB
    @ ! use the '-' symbol bacause of bug in MMS while updating library
    - $(MMS)/DESCR=$(MMS$SOURCE)-
    /RULES=[.vms.mms]rules.mms-
    /MACRO=( -
        "OUT_DIR=$(OUT_DIR)", -
        "IS_DEBUG=$(IS_DEBUG)",-
        "CC_QUALIFIERS_G=$(CC_QUALIFIERS_G)",-
        "CC_DEFINES_G=$(CC_DEFINES_G)",-
        "CC_INCLUDES_G=$(CC_INCLUDES_G)",-
        "HEADERS_G=$(HEADERS_G)"-
    )

.MMS.EXE
    @ ! use the '-' symbol bacause of bug in MMS while updating library
    - $(MMS)/DESCR=$(MMS$SOURCE)-
    /RULES=[.vms.mms]rules.mms-
    /MACRO=( -
        "OUT_DIR=$(OUT_DIR)", -
        "IS_DEBUG=$(IS_DEBUG)",-
        "CC_QUALIFIERS_G=$(CC_QUALIFIERS_G)",-
        "CC_DEFINES_G=$(CC_DEFINES_G)",-
        "CC_INCLUDES_G=$(CC_INCLUDES_G)",-
        "HEADERS_G=$(HEADERS_G)"-
    )

############################################################################
# Target
############################################################################
TARGET : -
$(HEADERS_G) -
[.$(OUT_DIR)]phplib_date.olb -
[.$(OUT_DIR)]phplib_pcre.olb -
[.$(OUT_DIR)]libxml.olb -
[.$(OUT_DIR)]sqlite3.olb -
[.$(OUT_DIR)]ctype.olb -
[.$(OUT_DIR)]dom.olb -
[.$(OUT_DIR)]fileinfo.olb -
[.$(OUT_DIR)]filter.olb -
[.$(OUT_DIR)]hash.olb -
![.$(OUT_DIR)]bcmath.exe
    ! target built

############################################################################
# Headers rules
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
# fileinfo
############################################################################
[.$(OUT_DIR)]fileinfo.olb : [.vms.mms]fileinfo.mms

############################################################################
# filter
############################################################################
[.$(OUT_DIR)]filter.olb : [.vms.mms]filter.mms

############################################################################
# hash
############################################################################
[.$(OUT_DIR)]hash.olb : [.vms.mms]hash.mms

############################################################################
# bcmath
############################################################################
[.$(OUT_DIR)]bcmath.exe : [.vms.mms]bcmath.mms

############################################################################
CLEAN :
    del/tree [.$(OUT_DIR)...]*.*;*
