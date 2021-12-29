############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.standard])

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
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ define lib [.ext.date.lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.standard] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_standard.olb
    ! phplib_standard is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.standard]array.obj -
[.$(OBJ_DIR).ext.standard]assert.obj -
[.$(OBJ_DIR).ext.standard]base64.obj -
[.$(OBJ_DIR).ext.standard]basic_functions.obj -
[.$(OBJ_DIR).ext.standard]browscap.obj -
[.$(OBJ_DIR).ext.standard]crc32.obj -
[.$(OBJ_DIR).ext.standard]crc32_x86.obj -
[.$(OBJ_DIR).ext.standard]credits.obj -
[.$(OBJ_DIR).ext.standard]crypt.obj -
[.$(OBJ_DIR).ext.standard]crypt_blowfish.obj -
[.$(OBJ_DIR).ext.standard]crypt_freesec.obj -
[.$(OBJ_DIR).ext.standard]crypt_sha256.obj -
[.$(OBJ_DIR).ext.standard]crypt_sha512.obj -
[.$(OBJ_DIR).ext.standard]css.obj -
[.$(OBJ_DIR).ext.standard]datetime.obj -
[.$(OBJ_DIR).ext.standard]dir.obj -
[.$(OBJ_DIR).ext.standard]dl.obj -
[.$(OBJ_DIR).ext.standard]dns.obj -
[.$(OBJ_DIR).ext.standard]exec.obj -
[.$(OBJ_DIR).ext.standard]file.obj -
[.$(OBJ_DIR).ext.standard]filestat.obj -
[.$(OBJ_DIR).ext.standard]filters.obj -
[.$(OBJ_DIR).ext.standard]flock_compat.obj -
[.$(OBJ_DIR).ext.standard]formatted_print.obj -
[.$(OBJ_DIR).ext.standard]fsock.obj -
[.$(OBJ_DIR).ext.standard]ftok.obj -
[.$(OBJ_DIR).ext.standard]ftp_fopen_wrapper.obj -
[.$(OBJ_DIR).ext.standard]head.obj -
[.$(OBJ_DIR).ext.standard]hrtime.obj -
[.$(OBJ_DIR).ext.standard]html.obj -
[.$(OBJ_DIR).ext.standard]http.obj -
[.$(OBJ_DIR).ext.standard]http_fopen_wrapper.obj -
[.$(OBJ_DIR).ext.standard]image.obj -
[.$(OBJ_DIR).ext.standard]incomplete_class.obj -
[.$(OBJ_DIR).ext.standard]info.obj -
[.$(OBJ_DIR).ext.standard]iptc.obj -
[.$(OBJ_DIR).ext.standard]lcg.obj -
[.$(OBJ_DIR).ext.standard]levenshtein.obj -
[.$(OBJ_DIR).ext.standard]link.obj -
[.$(OBJ_DIR).ext.standard]mail.obj -
[.$(OBJ_DIR).ext.standard]math.obj -
[.$(OBJ_DIR).ext.standard]md5.obj -
[.$(OBJ_DIR).ext.standard]metaphone.obj -
[.$(OBJ_DIR).ext.standard]microtime.obj -
[.$(OBJ_DIR).ext.standard]mt_rand.obj -
[.$(OBJ_DIR).ext.standard]net.obj -
[.$(OBJ_DIR).ext.standard]pack.obj -
[.$(OBJ_DIR).ext.standard]pageinfo.obj -
[.$(OBJ_DIR).ext.standard]password.obj -
[.$(OBJ_DIR).ext.standard]php_crypt_r.obj -
[.$(OBJ_DIR).ext.standard]php_fopen_wrapper.obj -
[.$(OBJ_DIR).ext.standard]proc_open.obj -
[.$(OBJ_DIR).ext.standard]quot_print.obj -
[.$(OBJ_DIR).ext.standard]rand.obj -
[.$(OBJ_DIR).ext.standard]random.obj -
[.$(OBJ_DIR).ext.standard]scanf.obj -
[.$(OBJ_DIR).ext.standard]sha1.obj -
[.$(OBJ_DIR).ext.standard]soundex.obj -
[.$(OBJ_DIR).ext.standard]streamsfuncs.obj -
[.$(OBJ_DIR).ext.standard]string.obj -
[.$(OBJ_DIR).ext.standard]strnatcmp.obj -
[.$(OBJ_DIR).ext.standard]syslog.obj -
[.$(OBJ_DIR).ext.standard]type.obj -
[.$(OBJ_DIR).ext.standard]uniqid.obj -
[.$(OBJ_DIR).ext.standard]url.obj -
[.$(OBJ_DIR).ext.standard]url_scanner_ex.obj -
[.$(OBJ_DIR).ext.standard]user_filters.obj -
[.$(OBJ_DIR).ext.standard]uuencode.obj -
[.$(OBJ_DIR).ext.standard]var.obj -
[.$(OBJ_DIR).ext.standard]var_unserializer.obj -
[.$(OBJ_DIR).ext.standard]versioning.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_standard.olb : [.$(OUT_DIR)]phplib_standard.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.standard]array.obj : [.ext.standard]array.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]assert.obj : [.ext.standard]assert.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]base64.obj : [.ext.standard]base64.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]basic_functions.obj : [.ext.standard]basic_functions.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]browscap.obj : [.ext.standard]browscap.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crc32.obj : [.ext.standard]crc32.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crc32_x86.obj : [.ext.standard]crc32_x86.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]credits.obj : [.ext.standard]credits.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crypt.obj : [.ext.standard]crypt.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crypt_blowfish.obj : [.ext.standard]crypt_blowfish.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crypt_freesec.obj : [.ext.standard]crypt_freesec.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crypt_sha256.obj : [.ext.standard]crypt_sha256.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]crypt_sha512.obj : [.ext.standard]crypt_sha512.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]css.obj : [.ext.standard]css.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]datetime.obj : [.ext.standard]datetime.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]dir.obj : [.ext.standard]dir.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]dl.obj : [.ext.standard]dl.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]dns.obj : [.ext.standard]dns.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]exec.obj : [.ext.standard]exec.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]file.obj : [.ext.standard]file.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]filestat.obj : [.ext.standard]filestat.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]filters.obj : [.ext.standard]filters.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]flock_compat.obj : [.ext.standard]flock_compat.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]formatted_print.obj : [.ext.standard]formatted_print.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]fsock.obj : [.ext.standard]fsock.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]ftok.obj : [.ext.standard]ftok.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]ftp_fopen_wrapper.obj : [.ext.standard]ftp_fopen_wrapper.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]head.obj : [.ext.standard]head.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]hrtime.obj : [.ext.standard]hrtime.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]html.obj : [.ext.standard]html.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]http.obj : [.ext.standard]http.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]http_fopen_wrapper.obj : [.ext.standard]http_fopen_wrapper.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]image.obj : [.ext.standard]image.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]incomplete_class.obj : [.ext.standard]incomplete_class.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]info.obj : [.ext.standard]info.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]iptc.obj : [.ext.standard]iptc.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]lcg.obj : [.ext.standard]lcg.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]levenshtein.obj : [.ext.standard]levenshtein.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]link.obj : [.ext.standard]link.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]mail.obj : [.ext.standard]mail.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]math.obj : [.ext.standard]math.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]md5.obj : [.ext.standard]md5.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]metaphone.obj : [.ext.standard]metaphone.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]microtime.obj : [.ext.standard]microtime.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]mt_rand.obj : [.ext.standard]mt_rand.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]net.obj : [.ext.standard]net.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]pack.obj : [.ext.standard]pack.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]pageinfo.obj : [.ext.standard]pageinfo.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]password.obj : [.ext.standard]password.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]php_crypt_r.obj : [.ext.standard]php_crypt_r.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]php_fopen_wrapper.obj : [.ext.standard]php_fopen_wrapper.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]proc_open.obj : [.ext.standard]proc_open.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]quot_print.obj : [.ext.standard]quot_print.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]rand.obj : [.ext.standard]rand.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]random.obj : [.ext.standard]random.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]scanf.obj : [.ext.standard]scanf.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]sha1.obj : [.ext.standard]sha1.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]soundex.obj : [.ext.standard]soundex.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]streamsfuncs.obj : [.ext.standard]streamsfuncs.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]string.obj : [.ext.standard]string.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]strnatcmp.obj : [.ext.standard]strnatcmp.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]syslog.obj : [.ext.standard]syslog.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]type.obj : [.ext.standard]type.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]uniqid.obj : [.ext.standard]uniqid.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]url.obj : [.ext.standard]url.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]url_scanner_ex.obj : [.ext.standard]url_scanner_ex.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]user_filters.obj : [.ext.standard]user_filters.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]uuencode.obj : [.ext.standard]uuencode.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]var.obj : [.ext.standard]var.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]var_unserializer.obj : [.ext.standard]var_unserializer.c $(HEADERS)
[.$(OBJ_DIR).ext.standard]versioning.obj : [.ext.standard]versioning.c $(HEADERS)
