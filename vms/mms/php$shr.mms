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
.FIRST
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR)] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]php$shr.exe
    ! php$shr.exe is built

############################################################################
# Object files
############################################################################
PHP_LIBRARIES = -
[.$(OUT_DIR)]phplib_ctype.olb -
[.$(OUT_DIR)]phplib_date.olb -
[.$(OUT_DIR)]phplib_dom.olb -
[.$(OUT_DIR)]phplib_fileinfo.olb -
[.$(OUT_DIR)]phplib_filter.olb -
[.$(OUT_DIR)]phplib_hash.olb -
[.$(OUT_DIR)]phplib_iconv.olb -
[.$(OUT_DIR)]phplib_json.olb -
[.$(OUT_DIR)]phplib_libxml.olb -
[.$(OUT_DIR)]phplib_main.olb -
[.$(OUT_DIR)]phplib_pcre.olb -
[.$(OUT_DIR)]phplib_pdo.olb -
[.$(OUT_DIR)]phplib_pdolite.olb -
[.$(OUT_DIR)]phplib_phar.olb -
[.$(OUT_DIR)]phplib_posix.olb -
[.$(OUT_DIR)]phplib_reflection.olb -
[.$(OUT_DIR)]phplib_session.olb -
[.$(OUT_DIR)]phplib_simplexml.olb -
[.$(OUT_DIR)]phplib_spl.olb -
[.$(OUT_DIR)]phplib_sqlite3.olb -
[.$(OUT_DIR)]phplib_standard.olb -
[.$(OUT_DIR)]phplib_streams.olb -
[.$(OUT_DIR)]phplib_tokenizer.olb -
[.$(OUT_DIR)]phplib_tsrm.olb -
[.$(OUT_DIR)]phplib_xml.olb -
[.$(OUT_DIR)]phplib_zend.olb

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]php$shr.exe : $(PHP_LIBRARIES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]php$shr.opt/opt

############################################################################
# Source files
############################################################################

