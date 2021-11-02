############################################################################
# MMS/EXT/DESCR=php.mms/MACRO=("OUTDIR=OUT","CONFIG=DEBUG")
############################################################################

############################################################################
# Compiler qualifiers
############################################################################
CC_QUALIFIERS = -
/NAMES=(AS_IS,SHORTENED) -
/WARNINGS=(WARNINGS=ALL, DISABLE=(-
    EXTRASEMI,-
    MACROREDEF,-
    QUESTCOMPARE1,-
    QUESTCOMPARE,-
    UNSTRUCTMEM,-
    DUPTYPESPEC,-
    INTCONSTTRUNC,-
    TOOFEWACTUALS,-
    UNDEFESCAP)) -
/ACCEPT=NOVAXC_KEYWORDS

############################################################################
# Compiler definitions
############################################################################
CC_DEFINES = -
_USE_STD_STAT,-
_POSIX_EXIT,-
__STDC_FORMAT_MACROS,-
_LARGEFILE,-
_SOCKADDR_LEN,-
ZEND_ENABLE_STATIC_TSRMLS_CACHE=1,-
PHP_ATOM_INC,-
PCRE2_CODE_UNIT_WIDTH=8,-
BIND_4_COMPAT=1

############################################################################
# Include folders
############################################################################
CC_INCLUDES = -
[], -
[.main], -
[.tsrm], -
[.zend]

############################################################################
# Headers
############################################################################
HEADERS = -
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
OBJ_DIR = $(OUT_DIR).OBJ

############################################################################
# First for all libraries
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define streams [.main.streams]
    ! names
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
    - $(MMS)/DESCR=$(MMS$SOURCE)-
    /RULES=[.vms.mms]rules.mms-
    /MACRO=( -
        "OUT_DIR=$(OUT_DIR)", -
        "IS_DEBUG=$(IS_DEBUG)",-
        "CC_QUALIFIERS_G=$(CC_QUALIFIERS)",-
        "CC_DEFINES_G=$(CC_DEFINES)",-
        "CC_INCLUDES_G=$(CC_INCLUDES)",-
        "HEADERS_G=$(HEADERS)"-
    )

.MMS.EXE
    @ ! use the '-' symbol bacause of bug in MMS while updating library
    - $(MMS)/DESCR=$(MMS$SOURCE)-
    /RULES=[.vms.mms]rules.mms-
    /MACRO=( -
        "OUT_DIR=$(OUT_DIR)", -
        "IS_DEBUG=$(IS_DEBUG)",-
        "CC_QUALIFIERS_G=$(CC_QUALIFIERS)",-
        "CC_DEFINES_G=$(CC_DEFINES)",-
        "CC_INCLUDES_G=$(CC_INCLUDES)",-
        "HEADERS_G=$(HEADERS)"-
    )

############################################################################
# Libraries
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
# Executable modules
############################################################################
PHP_MODULES = -
[.$(OUT_DIR)]php-cgi.exe -
[.$(OUT_DIR)]curl.exe -
[.$(OUT_DIR)]gmp.exe -
[.$(OUT_DIR)]zlib.exe -
[.$(OUT_DIR)]sockets.exe -
[.$(OUT_DIR)]ftp.exe -
[.$(OUT_DIR)]openssl.exe -
[.$(OUT_DIR)]exif.exe -
[.$(OUT_DIR)]calendar.exe -
[.$(OUT_DIR)]ldap.exe -
[.$(OUT_DIR)]soap.exe

############################################################################
# Target
############################################################################
TARGET : -
$(PHP_LIBRARIES) -
[.$(OUT_DIR)]php$shr.exe -
[.$(OUT_DIR)]php.exe -
$(PHP_MODULES)
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
# bcmath
############################################################################
BCMATH_FILES = -
[.ext.bcmath]bcmath.obj -
[.ext.bcmath.libbcmath.src]add.c -
[.ext.bcmath.libbcmath.src]compare.c -
[.ext.bcmath.libbcmath.src]debug.c -
[.ext.bcmath.libbcmath.src]div.c -
[.ext.bcmath.libbcmath.src]divmod.c -
[.ext.bcmath.libbcmath.src]doaddsub.c -
[.ext.bcmath.libbcmath.src]init.c -
[.ext.bcmath.libbcmath.src]int2num.c -
[.ext.bcmath.libbcmath.src]nearzero.c -
[.ext.bcmath.libbcmath.src]neg.c -
[.ext.bcmath.libbcmath.src]num2long.c -
[.ext.bcmath.libbcmath.src]num2str.c -
[.ext.bcmath.libbcmath.src]output.c -
[.ext.bcmath.libbcmath.src]raise.c -
[.ext.bcmath.libbcmath.src]raisemod.c -
[.ext.bcmath.libbcmath.src]recmul.c -
[.ext.bcmath.libbcmath.src]rmzero.c -
[.ext.bcmath.libbcmath.src]sqrt.c -
[.ext.bcmath.libbcmath.src]str2num.c -
[.ext.bcmath.libbcmath.src]sub.c -
[.ext.bcmath.libbcmath.src]zero.c

[.$(OUT_DIR)]bcmath.exe : [.vms.mms]bcmath.mms $(BCMATH_FILES) $(HEADERS)

############################################################################
# phplib_date
############################################################################
PHPLIB_DATE_FILES = -
[.ext.date]php_date.c -
[.ext.date.lib]astro.c -
[.ext.date.lib]dow.c -
[.ext.date.lib]interval.c -
[.ext.date.lib]parse_date.c -
[.ext.date.lib]parse_iso_intervals.c -
[.ext.date.lib]parse_tz.c -
[.ext.date.lib]timelib.c -
[.ext.date.lib]tm2unixtime.c -
[.ext.date.lib]unixtime2tm.c

[.$(OUT_DIR)]phplib_date.olb : [.vms.mms]phplib_date.mms $(PHPLIB_DATE_FILES) $(HEADERS)

############################################################################
# phplib_pcre
############################################################################
PHPLIB_PCRE_FILES = -
[.ext.pcre]php_pcre.c -
[.ext.pcre.pcre2lib]pcre2_auto_possess.c -
[.ext.pcre.pcre2lib]pcre2_chartables.c -
[.ext.pcre.pcre2lib]pcre2_compile.c -
[.ext.pcre.pcre2lib]pcre2_config.c -
[.ext.pcre.pcre2lib]pcre2_context.c -
[.ext.pcre.pcre2lib]pcre2_convert.c -
[.ext.pcre.pcre2lib]pcre2_dfa_match.c -
[.ext.pcre.pcre2lib]pcre2_error.c -
[.ext.pcre.pcre2lib]pcre2_extuni.c -
[.ext.pcre.pcre2lib]pcre2_find_bracket.c -
[.ext.pcre.pcre2lib]pcre2_jit_compile.c -
[.ext.pcre.pcre2lib]pcre2_jit_match.c -
[.ext.pcre.pcre2lib]pcre2_jit_misc.c -
[.ext.pcre.pcre2lib]pcre2_maketables.c -
[.ext.pcre.pcre2lib]pcre2_match_data.c -
[.ext.pcre.pcre2lib]pcre2_match.c -
[.ext.pcre.pcre2lib]pcre2_newline.c -
[.ext.pcre.pcre2lib]pcre2_ord2utf.c -
[.ext.pcre.pcre2lib]pcre2_pattern_info.c -
[.ext.pcre.pcre2lib]pcre2_printint.c -
[.ext.pcre.pcre2lib]pcre2_script_run.c -
[.ext.pcre.pcre2lib]pcre2_serialize.c -
[.ext.pcre.pcre2lib]pcre2_string_utils.c -
[.ext.pcre.pcre2lib]pcre2_study.c -
[.ext.pcre.pcre2lib]pcre2_substitute.c -
[.ext.pcre.pcre2lib]pcre2_substring.c -
[.ext.pcre.pcre2lib]pcre2_tables.c -
[.ext.pcre.pcre2lib]pcre2_ucd.c -
[.ext.pcre.pcre2lib]pcre2_valid_utf.c -
[.ext.pcre.pcre2lib]pcre2_xclass.c

[.$(OUT_DIR)]phplib_pcre.olb : [.vms.mms]phplib_pcre.mms $(PHPLIB_PCRE_FILES) $(HEADERS)

############################################################################
# libxml
############################################################################
[.$(OUT_DIR)]phplib_libxml.olb : [.vms.mms]phplib_libxml.mms [.ext.libxml]libxml.c $(HEADERS)

############################################################################
# sqlite3
############################################################################
[.$(OUT_DIR)]phplib_sqlite3.olb : [.vms.mms]phplib_sqlite3.mms [.ext.sqlite3]sqlite3.c $(HEADERS)

############################################################################
# dom
############################################################################
DOM_FILES = -
[.ext.dom]attr.c -
[.ext.dom]cdatasection.c -
[.ext.dom]characterdata.c -
[.ext.dom]comment.c -
[.ext.dom]document.c -
[.ext.dom]documentfragment.c -
[.ext.dom]documenttype.c -
[.ext.dom]dom_iterators.c -
[.ext.dom]domexception.c -
[.ext.dom]domimplementation.c -
[.ext.dom]element.c -
[.ext.dom]entity.c -
[.ext.dom]entityreference.c -
[.ext.dom]namednodemap.c -
[.ext.dom]node.c -
[.ext.dom]nodelist.c -
[.ext.dom]notation.c -
[.ext.dom]parentnode.c -
[.ext.dom]php_dom.c -
[.ext.dom]processinginstruction.c -
[.ext.dom]text.c -
[.ext.dom]xpath.c

[.$(OUT_DIR)]phplib_dom.olb : [.vms.mms]phplib_dom.mms $(DOM_FILES) $(HEADERS)

############################################################################
# ctype
############################################################################
[.$(OUT_DIR)]phplib_ctype.olb : [.vms.mms]phplib_ctype.mms [.ext.ctype]ctype.c $(HEADERS)

############################################################################
# fileinfo
############################################################################
FILEINFO_FILES = -
[.ext.fileinfo]fileinfo.c -
[.ext.fileinfo.libmagic]apprentice.c -
[.ext.fileinfo.libmagic]apptype.c -
[.ext.fileinfo.libmagic]ascmagic.c -
[.ext.fileinfo.libmagic]buffer.c -
[.ext.fileinfo.libmagic]cdf_time.c -
[.ext.fileinfo.libmagic]cdf.c -
[.ext.fileinfo.libmagic]compress.c -
[.ext.fileinfo.libmagic]der.c -
[.ext.fileinfo.libmagic]encoding.c -
[.ext.fileinfo.libmagic]fsmagic.c -
[.ext.fileinfo.libmagic]funcs.c -
[.ext.fileinfo.libmagic]is_csv.c -
[.ext.fileinfo.libmagic]is_json.c -
[.ext.fileinfo.libmagic]is_tar.c -
[.ext.fileinfo.libmagic]magic.c -
[.ext.fileinfo.libmagic]print.c -
[.ext.fileinfo.libmagic]readcdf.c -
[.ext.fileinfo.libmagic]softmagic.c -
[.ext.fileinfo.libmagic]strcasestr.c

[.$(OUT_DIR)]phplib_fileinfo.olb : [.vms.mms]phplib_fileinfo.mms $(FILEINFO_FILES) $(HEADERS)

############################################################################
# filter
############################################################################
FILTER_FILES = -
[.ext.filter]filter.c -
[.ext.filter]sanitizing_filters.c -
[.ext.filter]logical_filters.c -
[.ext.filter]callback_filter.c

[.$(OUT_DIR)]phplib_filter.olb : [.vms.mms]phplib_filter.mms $(FILTER_FILES) $(HEADERS)

############################################################################
# hash
############################################################################
HASH_FILES = -
[.ext.hash]hash.c -
[.ext.hash]hash_md.c -
[.ext.hash]hash_sha.c -
[.ext.hash]hash_ripemd.c -
[.ext.hash]hash_haval.c -
[.ext.hash]hash_tiger.c -
[.ext.hash]hash_gost.c -
[.ext.hash]hash_snefru.c -
[.ext.hash]hash_whirlpool.c -
[.ext.hash]hash_adler32.c -
[.ext.hash]hash_crc32.c -
[.ext.hash]hash_fnv.c -
[.ext.hash]hash_joaat.c -
[.ext.hash]hash_sha3.c -
[.ext.hash.sha3.generic32lc]KeccakP-1600-inplace32BI.c -
[.ext.hash.sha3.generic32lc]KeccakHash.c -
[.ext.hash.sha3.generic32lc]KeccakSponge.c

[.$(OUT_DIR)]phplib_hash.olb : [.vms.mms]phplib_hash.mms $(HASH_FILES) $(HEADERS)

############################################################################
# iconv
############################################################################
[.$(OUT_DIR)]phplib_iconv.olb : [.vms.mms]phplib_iconv.mms [.ext.iconv]iconv.c $(HEADERS)

############################################################################
# json
############################################################################
JSON_FILES = -
[.ext.json]json.c -
[.ext.json]json_encoder.c -
[.ext.json]json_parser^.tab.c -
[.ext.json]json_scanner.c -

[.$(OUT_DIR)]phplib_json.olb : [.vms.mms]phplib_json.mms $(JSON_FILES) $(HEADERS)

############################################################################
# pdo
############################################################################
PDO_FILES = -
[.ext.pdo]pdo.c -
[.ext.pdo]pdo_dbh.c -
[.ext.pdo]pdo_stmt.c -
[.ext.pdo]pdo_sql_parser.c -
[.ext.pdo]pdo_sqlstate.c

[.$(OUT_DIR)]phplib_pdo.olb : [.vms.mms]phplib_pdo.mms $(PDO_FILES) $(HEADERS)

############################################################################
# pdo sqlite
############################################################################
PDOLITE_FILES = -
[.ext.pdo_sqlite]pdo_sqlite.c -
[.ext.pdo_sqlite]sqlite_driver.c -
[.ext.pdo_sqlite]sqlite_statement.c

[.$(OUT_DIR)]phplib_pdolite.olb : [.vms.mms]phplib_pdolite.mms $(PDOLITE_FILES) $(HEADERS)

############################################################################
# phar
############################################################################
PHAR_FILES = -
[.ext.phar]dirstream.c -
[.ext.phar]func_interceptors.c -
[.ext.phar]phar.c -
[.ext.phar]phar_object.c -
[.ext.phar]phar_path_check.c -
[.ext.phar]stream.c -
[.ext.phar]tar.c -
[.ext.phar]util.c -
[.ext.phar]zip.c

[.$(OUT_DIR)]phplib_phar.olb : [.vms.mms]phplib_phar.mms $(PHAR_FILES) $(HEADERS)

############################################################################
# posix
############################################################################
[.$(OUT_DIR)]phplib_posix.olb : [.vms.mms]phplib_posix.mms [.ext.posix]posix.c $(HEADERS)

############################################################################
# reflection
############################################################################
[.$(OUT_DIR)]phplib_reflection.olb : [.vms.mms]phplib_reflection.mms [.ext.reflection]php_reflection.c $(HEADERS)

############################################################################
# session
############################################################################
SESSION_FILES = -
[.ext.session]mod_files.c -
[.ext.session]mod_mm.c -
[.ext.session]mod_user.c -
[.ext.session]mod_user_class.c -
[.ext.session]session.c

[.$(OUT_DIR)]phplib_session.olb : [.vms.mms]phplib_session.mms $(SESSION_FILES) $(HEADERS)

############################################################################
# simplexml
############################################################################
[.$(OUT_DIR)]phplib_simplexml.olb : [.vms.mms]phplib_simplexml.mms [.ext.simplexml]simplexml.c $(HEADERS)

############################################################################
# spl
############################################################################
SPL_FILES = -
[.ext.spl]php_spl.c -
[.ext.spl]spl_array.c -
[.ext.spl]spl_directory.c -
[.ext.spl]spl_dllist.c -
[.ext.spl]spl_engine.c -
[.ext.spl]spl_exceptions.c -
[.ext.spl]spl_fixedarray.c -
[.ext.spl]spl_functions.c -
[.ext.spl]spl_heap.c -
[.ext.spl]spl_iterators.c -
[.ext.spl]spl_observer.c

[.$(OUT_DIR)]phplib_spl.olb : [.vms.mms]phplib_spl.mms $(SPL_FILES) $(HEADERS)

############################################################################
# standard
############################################################################
STANDARD_FILES = -
[.ext.standard]array.c -
[.ext.standard]assert.c -
[.ext.standard]base64.c -
[.ext.standard]basic_functions.c -
[.ext.standard]browscap.c -
[.ext.standard]crc32.c -
[.ext.standard]crc32_x86.c -
[.ext.standard]credits.c -
[.ext.standard]crypt.c -
[.ext.standard]crypt_blowfish.c -
[.ext.standard]crypt_freesec.c -
[.ext.standard]crypt_sha256.c -
[.ext.standard]crypt_sha512.c -
[.ext.standard]css.c -
[.ext.standard]datetime.c -
[.ext.standard]dir.c -
[.ext.standard]dl.c -
[.ext.standard]dns.c -
[.ext.standard]exec.c -
[.ext.standard]file.c -
[.ext.standard]filestat.c -
[.ext.standard]filters.c -
[.ext.standard]flock_compat.c -
[.ext.standard]formatted_print.c -
[.ext.standard]fsock.c -
[.ext.standard]ftok.c -
[.ext.standard]ftp_fopen_wrapper.c -
[.ext.standard]head.c -
[.ext.standard]hrtime.c -
[.ext.standard]html.c -
[.ext.standard]http.c -
[.ext.standard]http_fopen_wrapper.c -
[.ext.standard]image.c -
[.ext.standard]incomplete_class.c -
[.ext.standard]info.c -
[.ext.standard]iptc.c -
[.ext.standard]lcg.c -
[.ext.standard]levenshtein.c -
[.ext.standard]link.c -
[.ext.standard]mail.c -
[.ext.standard]math.c -
[.ext.standard]md5.c -
[.ext.standard]metaphone.c -
[.ext.standard]microtime.c -
[.ext.standard]mt_rand.c -
[.ext.standard]net.c -
[.ext.standard]pack.c -
[.ext.standard]pageinfo.c -
[.ext.standard]password.c -
[.ext.standard]php_crypt_r.c -
[.ext.standard]php_fopen_wrapper.c -
[.ext.standard]proc_open.c -
[.ext.standard]quot_print.c -
[.ext.standard]rand.c -
[.ext.standard]random.c -
[.ext.standard]scanf.c -
[.ext.standard]sha1.c -
[.ext.standard]soundex.c -
[.ext.standard]streamsfuncs.c -
[.ext.standard]string.c -
[.ext.standard]strnatcmp.c -
[.ext.standard]syslog.c -
[.ext.standard]type.c -
[.ext.standard]uniqid.c -
[.ext.standard]url.c -
[.ext.standard]url_scanner_ex.c -
[.ext.standard]user_filters.c -
[.ext.standard]uuencode.c -
[.ext.standard]var.c -
[.ext.standard]var_unserializer.c -
[.ext.standard]versioning.c

[.$(OUT_DIR)]phplib_standard.olb : [.vms.mms]phplib_standard.mms $(STANDARD_FILES) $(HEADERS)

############################################################################
# tokenizer
############################################################################
TOKENIZER_FILES = -
[.ext.tokenizer]tokenizer.c -
[.ext.tokenizer]tokenizer_data.c

[.$(OUT_DIR)]phplib_tokenizer.olb : [.vms.mms]phplib_tokenizer.mms $(TOKENIZER_FILES) $(HEADERS)

############################################################################
# xml
############################################################################
XML_FILES = -
[.ext.xml]xml.c -
[.ext.xml]compat.c -
[.ext.xmlreader]php_xmlreader.c -
[.ext.xmlwriter]php_xmlwriter.c

[.$(OUT_DIR)]phplib_xml.olb : [.vms.mms]phplib_xml.mms $(XML_FILES) $(HEADERS)

############################################################################
# tsrm
############################################################################
[.$(OUT_DIR)]phplib_tsrm.olb : [.vms.mms]phplib_tsrm.mms [.tsrm]tsrm.c $(HEADERS)

############################################################################
# main
############################################################################
MAIN_FILES = -
[.main]SAPI.c -
[.main]alloca.c -
[.main]explicit_bzero.c -
- ![.main]fastcgi.c -
[.main]fopen_wrappers.c -
[.main]getopt.c -
[.main]internal_functions_cli.c -
[.main]main.c -
[.main]network.c -
[.main]output.c -
[.main]php_content_types.c -
[.main]php_ini.c -
[.main]php_open_temporary_file.c -
[.main]php_scandir.c -
[.main]php_syslog.c -
[.main]php_ticks.c -
[.main]php_variables.c -
[.main]reentrancy.c -
[.main]rfc1867.c -
[.main]snprintf.c -
[.main]spprintf.c -
[.main]strlcat.c -
[.main]strlcpy.c -
[.vms]syslog.c -

[.$(OUT_DIR)]phplib_main.olb : [.vms.mms]phplib_main.mms $(MAIN_FILES) $(HEADERS)

############################################################################
# streams
############################################################################
STREAMS_FILES = -
[.main.streams]cast.c -
[.main.streams]filter.c -
[.main.streams]glob_wrapper.c -
[.main.streams]memory.c -
[.main.streams]mmap.c -
[.main.streams]plain_wrapper.c -
[.main.streams]streams.c -
[.main.streams]transports.c -
[.main.streams]userspace.c -
[.main.streams]xp_socket.c

[.$(OUT_DIR)]phplib_streams.olb : [.vms.mms]phplib_streams.mms $(STREAMS_FILES) $(HEADERS)

############################################################################
# zend
############################################################################
ZEND_FILES = -
[.Zend]zend.c -
[.Zend]zend_API.c -
[.Zend]zend_alloc.c -
[.Zend]zend_ast.c -
[.Zend]zend_attributes.c -
[.Zend]zend_builtin_functions.c -
[.Zend]zend_closures.c -
[.Zend]zend_compile.c -
[.Zend]zend_constants.c -
[.Zend]zend_cpuinfo.c -
[.Zend]zend_default_classes.c -
[.Zend]zend_dtrace.c -
[.Zend]zend_exceptions.c -
[.Zend]zend_execute.c -
[.Zend]zend_execute_API.c -
[.Zend]zend_extensions.c -
[.Zend]zend_float.c -
[.Zend]zend_gc.c -
[.Zend]zend_gdb.c -
[.Zend]zend_generators.c -
[.Zend]zend_hash.c -
[.Zend]zend_highlight.c -
[.Zend]zend_inheritance.c -
[.Zend]zend_ini.c -
[.Zend]zend_ini_parser.c -
[.Zend]zend_ini_scanner.c -
[.Zend]zend_interfaces.c -
[.Zend]zend_iterators.c -
[.Zend]zend_language_parser.c -
[.Zend]zend_language_scanner.c -
[.Zend]zend_list.c -
[.Zend]zend_llist.c -
[.Zend]zend_multibyte.c -
[.Zend]zend_object_handlers.c -
[.Zend]zend_objects.c -
[.Zend]zend_objects_API.c -
[.Zend]zend_observer.c -
[.Zend]zend_opcode.c -
[.Zend]zend_operators.c -
[.Zend]zend_ptr_stack.c -
[.Zend]zend_signal.c -
[.Zend]zend_smart_str.c -
[.Zend]zend_sort.c -
[.Zend]zend_stack.c -
[.Zend]zend_stream.c -
[.Zend]zend_string.c -
[.Zend]zend_strtod.c -
[.Zend]zend_system_id.c -
[.Zend]zend_ts_hash.c -
[.Zend]zend_variables.c -
[.Zend]zend_virtual_cwd.c -
[.Zend]zend_vm_opcodes.c -
[.Zend]zend_weakrefs.c -

[.$(OUT_DIR)]phplib_zend.olb : [.vms.mms]phplib_zend.mms $(ZEND_FILES) $(HEADERS)

############################################################################
# php$shr
############################################################################
[.$(OUT_DIR)]php$shr.exe : [.vms.mms]php$shr.mms $(PHP_LIBRARIES)

############################################################################
# php client
############################################################################
PHP_CLI_FILES = -
[.sapi.cli]php_cli.c -
[.sapi.cli]php_cli_process_title.c -
[.sapi.cli]php_cli_server.c -
[.sapi.cli]php_http_parser.c -
[.sapi.cli]ps_title.c -
[.vms]vms_crtl_init.c

[.$(OUT_DIR)]php.exe : [.vms.mms]php.mms $(PHP_CLI_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# php-cgi
############################################################################
PHP_CGI_FILES = -
[.sapi.cgi]cgi_main.c -
[.main]fastcgi.c -
[.vms]vms_crtl_init.c

[.$(OUT_DIR)]php-cgi.exe : [.vms.mms]php-cgi.mms $(PHP_CGI_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# curl
############################################################################
PHP_CURL_FILES = -
[.ext.curl]curl_file.c -
[.ext.curl]interface.c -
[.ext.curl]multi.c -
[.ext.curl]share.c

[.$(OUT_DIR)]curl.exe : [.vms.mms]curl.mms $(PHP_CURL_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# gmp
############################################################################
PHP_GMP_FILES = -
[.ext.gmp]gmp.c

[.$(OUT_DIR)]gmp.exe : [.vms.mms]gmp.mms $(PHP_GMP_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# gmp
############################################################################
PHP_ZLIB_FILES = -
[.ext.zlib]zlib.c -
[.ext.zlib]zlib_filter.c -
[.ext.zlib]zlib_fopen_wrapper.c

[.$(OUT_DIR)]zlib.exe : [.vms.mms]zlib.mms $(PHP_ZLIB_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# sockets
############################################################################
PHP_SOCKETS_FILES = -
[.ext.sockets]conversions.c -
[.ext.sockets]multicast.c -
[.ext.sockets]sendrecvmsg.c -
[.ext.sockets]sockaddr_conv.c -
[.ext.sockets]sockets.c

[.$(OUT_DIR)]sockets.exe : [.vms.mms]sockets.mms $(PHP_SOCKETS_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# ftp
############################################################################
PHP_FTP_FILES = -
[.ext.ftp]ftp.c -
[.ext.ftp]php_ftp.c

[.$(OUT_DIR)]ftp.exe : [.vms.mms]ftp.mms $(PHP_FTP_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# openssl
############################################################################
PHP_OPENSSL_FILES = -
[.ext.openssl]openssl.c -
[.ext.openssl]xp_ssl.c

[.$(OUT_DIR)]openssl.exe : [.vms.mms]openssl.mms $(PHP_OPENSSL_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# exif
############################################################################
PHP_EXIF_FILES = -
[.ext.exif]exif.c

[.$(OUT_DIR)]exif.exe : [.vms.mms]exif.mms $(PHP_EXIF_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# calendar
############################################################################
PHP_CALENDAR_FILES = -
[.ext.calendar]calendar.c -
[.ext.calendar]cal_unix.c -
[.ext.calendar]dow.c -
[.ext.calendar]easter.c -
[.ext.calendar]french.c -
[.ext.calendar]gregor.c -
[.ext.calendar]jewish.c -
[.ext.calendar]julian.c -

[.$(OUT_DIR)]calendar.exe : [.vms.mms]calendar.mms $(PHP_CALENDAR_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# ldap
############################################################################
PHP_ldap_FILES = -
[.ext.ldap]ldap.c

[.$(OUT_DIR)]ldap.exe : [.vms.mms]ldap.mms $(PHP_ldap_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
# soap
############################################################################
PHP_SOAP_FILES = -
[.ext.soap]php_encoding.c -
[.ext.soap]php_http.c -
[.ext.soap]php_packet_soap.c -
[.ext.soap]php_schema.c -
[.ext.soap]php_sdl.c -
[.ext.soap]php_xml.c -
[.ext.soap]soap.c -

[.$(OUT_DIR)]soap.exe : [.vms.mms]soap.mms $(PHP_SOAP_FILES) $(HEADERS) [.$(OUT_DIR)]php$shr.exe

############################################################################
CLEAN :
    del/tree [.$(OUT_DIR)...]*.*;*
