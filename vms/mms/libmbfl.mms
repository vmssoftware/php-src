############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=-
($(CC_INCLUDES)-
,[.ext.mbstring.libmbfl]-
,[.ext.mbstring.libmbfl.filters]-
,[.ext.mbstring.libmbfl.mbfl]-
,[.ext.mbstring.libmbfl.nls]-
,oss$root:[include]-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define libmbfl [.ext.mbstring.libmbfl]
    @ define filters [.ext.mbstring.libmbfl.filters]
    @ define nls [.ext.mbstring.libmbfl.nls]
    @ define mbfl [.ext.mbstring.libmbfl.mbfl]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.mbstring.libmbfl.filters] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.mbstring.libmbfl.nls] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]libmbfl.olb
    ! libmbfl is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]html_entities.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_7bit.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_armscii8.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_ascii.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_base64.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_big5.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_byte2.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_byte4.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp850.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp866.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp932.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp936.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp1251.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp1252.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp1254.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp5022x.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp51932.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_cn.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_jp_2004.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_jp_win.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_jp.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_kr.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_tw.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_gb18030.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_htmlent.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_hz.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022_jp_ms.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022_kr.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022jp_2004.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022jp_mobile.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_1.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_2.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_3.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_4.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_5.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_6.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_7.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_8.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_9.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_10.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_13.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_14.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_15.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_16.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_jis.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_koi8r.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_koi8u.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_qprint.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_2004.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_mac.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_mobile.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_open.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_tl_jisx0201_jisx0208.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_ucs2.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_ucs4.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_uhc.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf7.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf7imap.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf8_mobile.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf8.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf16.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf32.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_uuencode.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter_8bit.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter_pass.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter_wchar.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_convert.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_encoding.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_filter_output.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_ident.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_language.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_memory_device.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_string.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_de.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_en.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_hy.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_ja.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_kr.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_neutral.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_ru.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_tr.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_ua.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_uni.obj -
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_zh.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]libmbfl.olb : [.$(OUT_DIR)]libmbfl.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]html_entities.obj : [.ext.mbstring.libmbfl.filters]html_entities.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_7bit.obj : [.ext.mbstring.libmbfl.filters]mbfilter_7bit.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_armscii8.obj : [.ext.mbstring.libmbfl.filters]mbfilter_armscii8.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_ascii.obj : [.ext.mbstring.libmbfl.filters]mbfilter_ascii.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_base64.obj : [.ext.mbstring.libmbfl.filters]mbfilter_base64.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_big5.obj : [.ext.mbstring.libmbfl.filters]mbfilter_big5.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_byte2.obj : [.ext.mbstring.libmbfl.filters]mbfilter_byte2.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_byte4.obj : [.ext.mbstring.libmbfl.filters]mbfilter_byte4.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp850.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp850.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp866.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp866.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp932.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp932.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp936.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp936.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp1251.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp1251.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp1252.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp1252.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp1254.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp1254.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp5022x.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp5022x.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_cp51932.obj : [.ext.mbstring.libmbfl.filters]mbfilter_cp51932.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_cn.obj : [.ext.mbstring.libmbfl.filters]mbfilter_euc_cn.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_jp_2004.obj : [.ext.mbstring.libmbfl.filters]mbfilter_euc_jp_2004.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_jp_win.obj : [.ext.mbstring.libmbfl.filters]mbfilter_euc_jp_win.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_jp.obj : [.ext.mbstring.libmbfl.filters]mbfilter_euc_jp.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_kr.obj : [.ext.mbstring.libmbfl.filters]mbfilter_euc_kr.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_euc_tw.obj : [.ext.mbstring.libmbfl.filters]mbfilter_euc_tw.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_gb18030.obj : [.ext.mbstring.libmbfl.filters]mbfilter_gb18030.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_htmlent.obj : [.ext.mbstring.libmbfl.filters]mbfilter_htmlent.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_hz.obj : [.ext.mbstring.libmbfl.filters]mbfilter_hz.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022_jp_ms.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso2022_jp_ms.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022_kr.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso2022_kr.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022jp_2004.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso2022jp_2004.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso2022jp_mobile.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso2022jp_mobile.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_1.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_1.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_2.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_2.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_3.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_3.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_4.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_4.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_5.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_5.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_6.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_6.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_7.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_7.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_8.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_8.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_9.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_9.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_10.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_10.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_13.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_13.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_14.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_14.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_15.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_15.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_iso8859_16.obj : [.ext.mbstring.libmbfl.filters]mbfilter_iso8859_16.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_jis.obj : [.ext.mbstring.libmbfl.filters]mbfilter_jis.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_koi8r.obj : [.ext.mbstring.libmbfl.filters]mbfilter_koi8r.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_koi8u.obj : [.ext.mbstring.libmbfl.filters]mbfilter_koi8u.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_qprint.obj : [.ext.mbstring.libmbfl.filters]mbfilter_qprint.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_2004.obj : [.ext.mbstring.libmbfl.filters]mbfilter_sjis_2004.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_mac.obj : [.ext.mbstring.libmbfl.filters]mbfilter_sjis_mac.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_mobile.obj : [.ext.mbstring.libmbfl.filters]mbfilter_sjis_mobile.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis_open.obj : [.ext.mbstring.libmbfl.filters]mbfilter_sjis_open.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_sjis.obj : [.ext.mbstring.libmbfl.filters]mbfilter_sjis.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_tl_jisx0201_jisx0208.obj : [.ext.mbstring.libmbfl.filters]mbfilter_tl_jisx0201_jisx0208.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_ucs2.obj : [.ext.mbstring.libmbfl.filters]mbfilter_ucs2.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_ucs4.obj : [.ext.mbstring.libmbfl.filters]mbfilter_ucs4.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_uhc.obj : [.ext.mbstring.libmbfl.filters]mbfilter_uhc.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf7.obj : [.ext.mbstring.libmbfl.filters]mbfilter_utf7.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf7imap.obj : [.ext.mbstring.libmbfl.filters]mbfilter_utf7imap.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf8_mobile.obj : [.ext.mbstring.libmbfl.filters]mbfilter_utf8_mobile.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf8.obj : [.ext.mbstring.libmbfl.filters]mbfilter_utf8.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf16.obj : [.ext.mbstring.libmbfl.filters]mbfilter_utf16.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_utf32.obj : [.ext.mbstring.libmbfl.filters]mbfilter_utf32.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.filters]mbfilter_uuencode.obj : [.ext.mbstring.libmbfl.filters]mbfilter_uuencode.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter_8bit.obj : [.ext.mbstring.libmbfl.mbfl]mbfilter_8bit.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter_pass.obj : [.ext.mbstring.libmbfl.mbfl]mbfilter_pass.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter_wchar.obj : [.ext.mbstring.libmbfl.mbfl]mbfilter_wchar.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfilter.obj : [.ext.mbstring.libmbfl.mbfl]mbfilter.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_convert.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_convert.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_encoding.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_encoding.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_filter_output.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_filter_output.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_ident.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_ident.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_language.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_language.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_memory_device.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_memory_device.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.mbfl]mbfl_string.obj : [.ext.mbstring.libmbfl.mbfl]mbfl_string.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_de.obj : [.ext.mbstring.libmbfl.nls]nls_de.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_en.obj : [.ext.mbstring.libmbfl.nls]nls_en.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_hy.obj : [.ext.mbstring.libmbfl.nls]nls_hy.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_ja.obj : [.ext.mbstring.libmbfl.nls]nls_ja.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_kr.obj : [.ext.mbstring.libmbfl.nls]nls_kr.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_neutral.obj : [.ext.mbstring.libmbfl.nls]nls_neutral.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_ru.obj : [.ext.mbstring.libmbfl.nls]nls_ru.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_tr.obj : [.ext.mbstring.libmbfl.nls]nls_tr.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_ua.obj : [.ext.mbstring.libmbfl.nls]nls_ua.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_uni.obj : [.ext.mbstring.libmbfl.nls]nls_uni.c
[.$(OBJ_DIR).ext.mbstring.libmbfl.nls]nls_zh.obj : [.ext.mbstring.libmbfl.nls]nls_zh.c
