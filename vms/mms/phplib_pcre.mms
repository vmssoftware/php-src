############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES),HAVE_CONFIG_H)-
/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.pcre.pcre2lib] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_pcre.olb
    ! phplib_pcre is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.pcre]php_pcre.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_auto_possess.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_chartables.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_compile.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_config.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_context.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_convert.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_dfa_match.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_error.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_extuni.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_find_bracket.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_jit_compile.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_maketables.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_match_data.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_match.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_newline.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_ord2utf.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_pattern_info.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_script_run.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_serialize.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_string_utils.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_study.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_substitute.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_substring.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_tables.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_ucd.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_valid_utf.obj -
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_xclass.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_pcre.olb : [.$(OUT_DIR)]phplib_pcre.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.pcre]php_pcre.obj : [.ext.pcre]php_pcre.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_auto_possess.obj : [.ext.pcre.pcre2lib]pcre2_auto_possess.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_chartables.obj : [.ext.pcre.pcre2lib]pcre2_chartables.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_compile.obj : [.ext.pcre.pcre2lib]pcre2_compile.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_config.obj : [.ext.pcre.pcre2lib]pcre2_config.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_context.obj : [.ext.pcre.pcre2lib]pcre2_context.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_convert.obj : [.ext.pcre.pcre2lib]pcre2_convert.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_dfa_match.obj : [.ext.pcre.pcre2lib]pcre2_dfa_match.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_error.obj : [.ext.pcre.pcre2lib]pcre2_error.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_extuni.obj : [.ext.pcre.pcre2lib]pcre2_extuni.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_find_bracket.obj : [.ext.pcre.pcre2lib]pcre2_find_bracket.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_jit_compile.obj : [.ext.pcre.pcre2lib]pcre2_jit_compile.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_jit_match.obj : [.ext.pcre.pcre2lib]pcre2_jit_match.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_maketables.obj : [.ext.pcre.pcre2lib]pcre2_maketables.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_match_data.obj : [.ext.pcre.pcre2lib]pcre2_match_data.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_match.obj : [.ext.pcre.pcre2lib]pcre2_match.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_newline.obj : [.ext.pcre.pcre2lib]pcre2_newline.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_ord2utf.obj : [.ext.pcre.pcre2lib]pcre2_ord2utf.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_pattern_info.obj : [.ext.pcre.pcre2lib]pcre2_pattern_info.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_script_run.obj : [.ext.pcre.pcre2lib]pcre2_script_run.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_serialize.obj : [.ext.pcre.pcre2lib]pcre2_serialize.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_string_utils.obj : [.ext.pcre.pcre2lib]pcre2_string_utils.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_study.obj : [.ext.pcre.pcre2lib]pcre2_study.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_substitute.obj : [.ext.pcre.pcre2lib]pcre2_substitute.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_substring.obj : [.ext.pcre.pcre2lib]pcre2_substring.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_tables.obj : [.ext.pcre.pcre2lib]pcre2_tables.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_ucd.obj : [.ext.pcre.pcre2lib]pcre2_ucd.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_valid_utf.obj : [.ext.pcre.pcre2lib]pcre2_valid_utf.c $(HEADERS)
[.$(OBJ_DIR).ext.pcre.pcre2lib]pcre2_xclass.obj : [.ext.pcre.pcre2lib]pcre2_xclass.c $(HEADERS)