/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 22 "/home/user/work/php-src/Zend/zend_language_parser.y"

#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"
#include "zend_exceptions.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif

#line 87 "/home/user/work/php-src/Zend/zend_language_parser.c"
/* Substitute the type names.  */
#define YYSTYPE         ZENDSTYPE
/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "zend_language_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PREC_ARROW_FUNCTION = 3,        /* PREC_ARROW_FUNCTION  */
  YYSYMBOL_4_ = 4,                         /* '='  */
  YYSYMBOL_5_ = 5,                         /* '?'  */
  YYSYMBOL_6_ = 6,                         /* ':'  */
  YYSYMBOL_7_ = 7,                         /* '|'  */
  YYSYMBOL_8_ = 8,                         /* '^'  */
  YYSYMBOL_9_ = 9,                         /* '&'  */
  YYSYMBOL_10_ = 10,                       /* '<'  */
  YYSYMBOL_11_ = 11,                       /* '>'  */
  YYSYMBOL_12_ = 12,                       /* '.'  */
  YYSYMBOL_13_ = 13,                       /* '+'  */
  YYSYMBOL_14_ = 14,                       /* '-'  */
  YYSYMBOL_15_ = 15,                       /* '*'  */
  YYSYMBOL_16_ = 16,                       /* '/'  */
  YYSYMBOL_17_ = 17,                       /* '%'  */
  YYSYMBOL_18_ = 18,                       /* '!'  */
  YYSYMBOL_19_ = 19,                       /* '~'  */
  YYSYMBOL_20_ = 20,                       /* '@'  */
  YYSYMBOL_T_NOELSE = 21,                  /* T_NOELSE  */
  YYSYMBOL_T_LNUMBER = 22,                 /* "integer"  */
  YYSYMBOL_T_DNUMBER = 23,                 /* "floating-point number"  */
  YYSYMBOL_T_STRING = 24,                  /* "identifier"  */
  YYSYMBOL_T_NAME_FULLY_QUALIFIED = 25,    /* "fully qualified name"  */
  YYSYMBOL_T_NAME_RELATIVE = 26,           /* "namespace-relative name"  */
  YYSYMBOL_T_NAME_QUALIFIED = 27,          /* "namespaced name"  */
  YYSYMBOL_T_VARIABLE = 28,                /* "variable"  */
  YYSYMBOL_T_INLINE_HTML = 29,             /* T_INLINE_HTML  */
  YYSYMBOL_T_ENCAPSED_AND_WHITESPACE = 30, /* "string content"  */
  YYSYMBOL_T_CONSTANT_ENCAPSED_STRING = 31, /* "quoted string"  */
  YYSYMBOL_T_STRING_VARNAME = 32,          /* "variable name"  */
  YYSYMBOL_T_NUM_STRING = 33,              /* "number"  */
  YYSYMBOL_T_INCLUDE = 34,                 /* "'include'"  */
  YYSYMBOL_T_INCLUDE_ONCE = 35,            /* "'include_once'"  */
  YYSYMBOL_T_EVAL = 36,                    /* "'eval'"  */
  YYSYMBOL_T_REQUIRE = 37,                 /* "'require'"  */
  YYSYMBOL_T_REQUIRE_ONCE = 38,            /* "'require_once'"  */
  YYSYMBOL_T_LOGICAL_OR = 39,              /* "'or'"  */
  YYSYMBOL_T_LOGICAL_XOR = 40,             /* "'xor'"  */
  YYSYMBOL_T_LOGICAL_AND = 41,             /* "'and'"  */
  YYSYMBOL_T_PRINT = 42,                   /* "'print'"  */
  YYSYMBOL_T_YIELD = 43,                   /* "'yield'"  */
  YYSYMBOL_T_YIELD_FROM = 44,              /* "'yield from'"  */
  YYSYMBOL_T_INSTANCEOF = 45,              /* "'instanceof'"  */
  YYSYMBOL_T_NEW = 46,                     /* "'new'"  */
  YYSYMBOL_T_CLONE = 47,                   /* "'clone'"  */
  YYSYMBOL_T_EXIT = 48,                    /* "'exit'"  */
  YYSYMBOL_T_IF = 49,                      /* "'if'"  */
  YYSYMBOL_T_ELSEIF = 50,                  /* "'elseif'"  */
  YYSYMBOL_T_ELSE = 51,                    /* "'else'"  */
  YYSYMBOL_T_ENDIF = 52,                   /* "'endif'"  */
  YYSYMBOL_T_ECHO = 53,                    /* "'echo'"  */
  YYSYMBOL_T_DO = 54,                      /* "'do'"  */
  YYSYMBOL_T_WHILE = 55,                   /* "'while'"  */
  YYSYMBOL_T_ENDWHILE = 56,                /* "'endwhile'"  */
  YYSYMBOL_T_FOR = 57,                     /* "'for'"  */
  YYSYMBOL_T_ENDFOR = 58,                  /* "'endfor'"  */
  YYSYMBOL_T_FOREACH = 59,                 /* "'foreach'"  */
  YYSYMBOL_T_ENDFOREACH = 60,              /* "'endforeach'"  */
  YYSYMBOL_T_DECLARE = 61,                 /* "'declare'"  */
  YYSYMBOL_T_ENDDECLARE = 62,              /* "'enddeclare'"  */
  YYSYMBOL_T_AS = 63,                      /* "'as'"  */
  YYSYMBOL_T_SWITCH = 64,                  /* "'switch'"  */
  YYSYMBOL_T_ENDSWITCH = 65,               /* "'endswitch'"  */
  YYSYMBOL_T_CASE = 66,                    /* "'case'"  */
  YYSYMBOL_T_DEFAULT = 67,                 /* "'default'"  */
  YYSYMBOL_T_MATCH = 68,                   /* "'match'"  */
  YYSYMBOL_T_BREAK = 69,                   /* "'break'"  */
  YYSYMBOL_T_CONTINUE = 70,                /* "'continue'"  */
  YYSYMBOL_T_GOTO = 71,                    /* "'goto'"  */
  YYSYMBOL_T_FUNCTION = 72,                /* "'function'"  */
  YYSYMBOL_T_FN = 73,                      /* "'fn'"  */
  YYSYMBOL_T_CONST = 74,                   /* "'const'"  */
  YYSYMBOL_T_RETURN = 75,                  /* "'return'"  */
  YYSYMBOL_T_TRY = 76,                     /* "'try'"  */
  YYSYMBOL_T_CATCH = 77,                   /* "'catch'"  */
  YYSYMBOL_T_FINALLY = 78,                 /* "'finally'"  */
  YYSYMBOL_T_THROW = 79,                   /* "'throw'"  */
  YYSYMBOL_T_USE = 80,                     /* "'use'"  */
  YYSYMBOL_T_INSTEADOF = 81,               /* "'insteadof'"  */
  YYSYMBOL_T_GLOBAL = 82,                  /* "'global'"  */
  YYSYMBOL_T_STATIC = 83,                  /* "'static'"  */
  YYSYMBOL_T_ABSTRACT = 84,                /* "'abstract'"  */
  YYSYMBOL_T_FINAL = 85,                   /* "'final'"  */
  YYSYMBOL_T_PRIVATE = 86,                 /* "'private'"  */
  YYSYMBOL_T_PROTECTED = 87,               /* "'protected'"  */
  YYSYMBOL_T_PUBLIC = 88,                  /* "'public'"  */
  YYSYMBOL_T_VAR = 89,                     /* "'var'"  */
  YYSYMBOL_T_UNSET = 90,                   /* "'unset'"  */
  YYSYMBOL_T_ISSET = 91,                   /* "'isset'"  */
  YYSYMBOL_T_EMPTY = 92,                   /* "'empty'"  */
  YYSYMBOL_T_HALT_COMPILER = 93,           /* "'__halt_compiler'"  */
  YYSYMBOL_T_CLASS = 94,                   /* "'class'"  */
  YYSYMBOL_T_TRAIT = 95,                   /* "'trait'"  */
  YYSYMBOL_T_INTERFACE = 96,               /* "'interface'"  */
  YYSYMBOL_T_EXTENDS = 97,                 /* "'extends'"  */
  YYSYMBOL_T_IMPLEMENTS = 98,              /* "'implements'"  */
  YYSYMBOL_T_NAMESPACE = 99,               /* "'namespace'"  */
  YYSYMBOL_T_LIST = 100,                   /* "'list'"  */
  YYSYMBOL_T_ARRAY = 101,                  /* "'array'"  */
  YYSYMBOL_T_CALLABLE = 102,               /* "'callable'"  */
  YYSYMBOL_T_LINE = 103,                   /* "'__LINE__'"  */
  YYSYMBOL_T_FILE = 104,                   /* "'__FILE__'"  */
  YYSYMBOL_T_DIR = 105,                    /* "'__DIR__'"  */
  YYSYMBOL_T_CLASS_C = 106,                /* "'__CLASS__'"  */
  YYSYMBOL_T_TRAIT_C = 107,                /* "'__TRAIT__'"  */
  YYSYMBOL_T_METHOD_C = 108,               /* "'__METHOD__'"  */
  YYSYMBOL_T_FUNC_C = 109,                 /* "'__FUNCTION__'"  */
  YYSYMBOL_T_NS_C = 110,                   /* "'__NAMESPACE__'"  */
  YYSYMBOL_T_ATTRIBUTE = 111,              /* "'#['"  */
  YYSYMBOL_T_PLUS_EQUAL = 112,             /* "'+='"  */
  YYSYMBOL_T_MINUS_EQUAL = 113,            /* "'-='"  */
  YYSYMBOL_T_MUL_EQUAL = 114,              /* "'*='"  */
  YYSYMBOL_T_DIV_EQUAL = 115,              /* "'/='"  */
  YYSYMBOL_T_CONCAT_EQUAL = 116,           /* "'.='"  */
  YYSYMBOL_T_MOD_EQUAL = 117,              /* "'%='"  */
  YYSYMBOL_T_AND_EQUAL = 118,              /* "'&='"  */
  YYSYMBOL_T_OR_EQUAL = 119,               /* "'|='"  */
  YYSYMBOL_T_XOR_EQUAL = 120,              /* "'^='"  */
  YYSYMBOL_T_SL_EQUAL = 121,               /* "'<<='"  */
  YYSYMBOL_T_SR_EQUAL = 122,               /* "'>>='"  */
  YYSYMBOL_T_COALESCE_EQUAL = 123,         /* "'??='"  */
  YYSYMBOL_T_BOOLEAN_OR = 124,             /* "'||'"  */
  YYSYMBOL_T_BOOLEAN_AND = 125,            /* "'&&'"  */
  YYSYMBOL_T_IS_EQUAL = 126,               /* "'=='"  */
  YYSYMBOL_T_IS_NOT_EQUAL = 127,           /* "'!='"  */
  YYSYMBOL_T_IS_IDENTICAL = 128,           /* "'==='"  */
  YYSYMBOL_T_IS_NOT_IDENTICAL = 129,       /* "'!=='"  */
  YYSYMBOL_T_IS_SMALLER_OR_EQUAL = 130,    /* "'<='"  */
  YYSYMBOL_T_IS_GREATER_OR_EQUAL = 131,    /* "'>='"  */
  YYSYMBOL_T_SPACESHIP = 132,              /* "'<=>'"  */
  YYSYMBOL_T_SL = 133,                     /* "'<<'"  */
  YYSYMBOL_T_SR = 134,                     /* "'>>'"  */
  YYSYMBOL_T_INC = 135,                    /* "'++'"  */
  YYSYMBOL_T_DEC = 136,                    /* "'--'"  */
  YYSYMBOL_T_INT_CAST = 137,               /* "'(int)'"  */
  YYSYMBOL_T_DOUBLE_CAST = 138,            /* "'(double)'"  */
  YYSYMBOL_T_STRING_CAST = 139,            /* "'(string)'"  */
  YYSYMBOL_T_ARRAY_CAST = 140,             /* "'(array)'"  */
  YYSYMBOL_T_OBJECT_CAST = 141,            /* "'(object)'"  */
  YYSYMBOL_T_BOOL_CAST = 142,              /* "'(bool)'"  */
  YYSYMBOL_T_UNSET_CAST = 143,             /* "'(unset)'"  */
  YYSYMBOL_T_OBJECT_OPERATOR = 144,        /* "'->'"  */
  YYSYMBOL_T_NULLSAFE_OBJECT_OPERATOR = 145, /* "'?->'"  */
  YYSYMBOL_T_DOUBLE_ARROW = 146,           /* "'=>'"  */
  YYSYMBOL_T_COMMENT = 147,                /* "comment"  */
  YYSYMBOL_T_DOC_COMMENT = 148,            /* "doc comment"  */
  YYSYMBOL_T_OPEN_TAG = 149,               /* "open tag"  */
  YYSYMBOL_T_OPEN_TAG_WITH_ECHO = 150,     /* "'<?='"  */
  YYSYMBOL_T_CLOSE_TAG = 151,              /* "'?>'"  */
  YYSYMBOL_T_WHITESPACE = 152,             /* "whitespace"  */
  YYSYMBOL_T_START_HEREDOC = 153,          /* "heredoc start"  */
  YYSYMBOL_T_END_HEREDOC = 154,            /* "heredoc end"  */
  YYSYMBOL_T_DOLLAR_OPEN_CURLY_BRACES = 155, /* "'${'"  */
  YYSYMBOL_T_CURLY_OPEN = 156,             /* "'{$'"  */
  YYSYMBOL_T_PAAMAYIM_NEKUDOTAYIM = 157,   /* "'::'"  */
  YYSYMBOL_T_NS_SEPARATOR = 158,           /* "'\\'"  */
  YYSYMBOL_T_ELLIPSIS = 159,               /* "'...'"  */
  YYSYMBOL_T_COALESCE = 160,               /* "'??'"  */
  YYSYMBOL_T_POW = 161,                    /* "'**'"  */
  YYSYMBOL_T_POW_EQUAL = 162,              /* "'**='"  */
  YYSYMBOL_T_BAD_CHARACTER = 163,          /* "invalid character"  */
  YYSYMBOL_T_ERROR = 164,                  /* T_ERROR  */
  YYSYMBOL_165_ = 165,                     /* ','  */
  YYSYMBOL_166_ = 166,                     /* ']'  */
  YYSYMBOL_167_ = 167,                     /* '('  */
  YYSYMBOL_168_ = 168,                     /* ')'  */
  YYSYMBOL_169_ = 169,                     /* ';'  */
  YYSYMBOL_170_ = 170,                     /* '{'  */
  YYSYMBOL_171_ = 171,                     /* '}'  */
  YYSYMBOL_172_ = 172,                     /* '['  */
  YYSYMBOL_173_ = 173,                     /* '`'  */
  YYSYMBOL_174_ = 174,                     /* '"'  */
  YYSYMBOL_175_ = 175,                     /* '$'  */
  YYSYMBOL_YYACCEPT = 176,                 /* $accept  */
  YYSYMBOL_start = 177,                    /* start  */
  YYSYMBOL_reserved_non_modifiers = 178,   /* reserved_non_modifiers  */
  YYSYMBOL_semi_reserved = 179,            /* semi_reserved  */
  YYSYMBOL_identifier = 180,               /* identifier  */
  YYSYMBOL_top_statement_list = 181,       /* top_statement_list  */
  YYSYMBOL_namespace_declaration_name = 182, /* namespace_declaration_name  */
  YYSYMBOL_namespace_name = 183,           /* namespace_name  */
  YYSYMBOL_legacy_namespace_name = 184,    /* legacy_namespace_name  */
  YYSYMBOL_name = 185,                     /* name  */
  YYSYMBOL_attribute_decl = 186,           /* attribute_decl  */
  YYSYMBOL_attribute_group = 187,          /* attribute_group  */
  YYSYMBOL_attribute = 188,                /* attribute  */
  YYSYMBOL_attributes = 189,               /* attributes  */
  YYSYMBOL_attributed_statement = 190,     /* attributed_statement  */
  YYSYMBOL_top_statement = 191,            /* top_statement  */
  YYSYMBOL_192_1 = 192,                    /* $@1  */
  YYSYMBOL_193_2 = 193,                    /* $@2  */
  YYSYMBOL_use_type = 194,                 /* use_type  */
  YYSYMBOL_group_use_declaration = 195,    /* group_use_declaration  */
  YYSYMBOL_mixed_group_use_declaration = 196, /* mixed_group_use_declaration  */
  YYSYMBOL_possible_comma = 197,           /* possible_comma  */
  YYSYMBOL_inline_use_declarations = 198,  /* inline_use_declarations  */
  YYSYMBOL_unprefixed_use_declarations = 199, /* unprefixed_use_declarations  */
  YYSYMBOL_use_declarations = 200,         /* use_declarations  */
  YYSYMBOL_inline_use_declaration = 201,   /* inline_use_declaration  */
  YYSYMBOL_unprefixed_use_declaration = 202, /* unprefixed_use_declaration  */
  YYSYMBOL_use_declaration = 203,          /* use_declaration  */
  YYSYMBOL_const_list = 204,               /* const_list  */
  YYSYMBOL_inner_statement_list = 205,     /* inner_statement_list  */
  YYSYMBOL_inner_statement = 206,          /* inner_statement  */
  YYSYMBOL_statement = 207,                /* statement  */
  YYSYMBOL_208_3 = 208,                    /* $@3  */
  YYSYMBOL_catch_list = 209,               /* catch_list  */
  YYSYMBOL_catch_name_list = 210,          /* catch_name_list  */
  YYSYMBOL_optional_variable = 211,        /* optional_variable  */
  YYSYMBOL_finally_statement = 212,        /* finally_statement  */
  YYSYMBOL_unset_variables = 213,          /* unset_variables  */
  YYSYMBOL_unset_variable = 214,           /* unset_variable  */
  YYSYMBOL_function_declaration_statement = 215, /* function_declaration_statement  */
  YYSYMBOL_is_reference = 216,             /* is_reference  */
  YYSYMBOL_is_variadic = 217,              /* is_variadic  */
  YYSYMBOL_class_declaration_statement = 218, /* class_declaration_statement  */
  YYSYMBOL_219_4 = 219,                    /* @4  */
  YYSYMBOL_220_5 = 220,                    /* @5  */
  YYSYMBOL_class_modifiers = 221,          /* class_modifiers  */
  YYSYMBOL_class_modifier = 222,           /* class_modifier  */
  YYSYMBOL_trait_declaration_statement = 223, /* trait_declaration_statement  */
  YYSYMBOL_224_6 = 224,                    /* @6  */
  YYSYMBOL_interface_declaration_statement = 225, /* interface_declaration_statement  */
  YYSYMBOL_226_7 = 226,                    /* @7  */
  YYSYMBOL_extends_from = 227,             /* extends_from  */
  YYSYMBOL_interface_extends_list = 228,   /* interface_extends_list  */
  YYSYMBOL_implements_list = 229,          /* implements_list  */
  YYSYMBOL_foreach_variable = 230,         /* foreach_variable  */
  YYSYMBOL_for_statement = 231,            /* for_statement  */
  YYSYMBOL_foreach_statement = 232,        /* foreach_statement  */
  YYSYMBOL_declare_statement = 233,        /* declare_statement  */
  YYSYMBOL_switch_case_list = 234,         /* switch_case_list  */
  YYSYMBOL_case_list = 235,                /* case_list  */
  YYSYMBOL_case_separator = 236,           /* case_separator  */
  YYSYMBOL_match = 237,                    /* match  */
  YYSYMBOL_match_arm_list = 238,           /* match_arm_list  */
  YYSYMBOL_non_empty_match_arm_list = 239, /* non_empty_match_arm_list  */
  YYSYMBOL_match_arm = 240,                /* match_arm  */
  YYSYMBOL_match_arm_cond_list = 241,      /* match_arm_cond_list  */
  YYSYMBOL_while_statement = 242,          /* while_statement  */
  YYSYMBOL_if_stmt_without_else = 243,     /* if_stmt_without_else  */
  YYSYMBOL_if_stmt = 244,                  /* if_stmt  */
  YYSYMBOL_alt_if_stmt_without_else = 245, /* alt_if_stmt_without_else  */
  YYSYMBOL_alt_if_stmt = 246,              /* alt_if_stmt  */
  YYSYMBOL_parameter_list = 247,           /* parameter_list  */
  YYSYMBOL_non_empty_parameter_list = 248, /* non_empty_parameter_list  */
  YYSYMBOL_attributed_parameter = 249,     /* attributed_parameter  */
  YYSYMBOL_optional_visibility_modifier = 250, /* optional_visibility_modifier  */
  YYSYMBOL_parameter = 251,                /* parameter  */
  YYSYMBOL_optional_type_without_static = 252, /* optional_type_without_static  */
  YYSYMBOL_type_expr = 253,                /* type_expr  */
  YYSYMBOL_type = 254,                     /* type  */
  YYSYMBOL_union_type = 255,               /* union_type  */
  YYSYMBOL_type_expr_without_static = 256, /* type_expr_without_static  */
  YYSYMBOL_type_without_static = 257,      /* type_without_static  */
  YYSYMBOL_union_type_without_static = 258, /* union_type_without_static  */
  YYSYMBOL_return_type = 259,              /* return_type  */
  YYSYMBOL_argument_list = 260,            /* argument_list  */
  YYSYMBOL_non_empty_argument_list = 261,  /* non_empty_argument_list  */
  YYSYMBOL_argument = 262,                 /* argument  */
  YYSYMBOL_global_var_list = 263,          /* global_var_list  */
  YYSYMBOL_global_var = 264,               /* global_var  */
  YYSYMBOL_static_var_list = 265,          /* static_var_list  */
  YYSYMBOL_static_var = 266,               /* static_var  */
  YYSYMBOL_class_statement_list = 267,     /* class_statement_list  */
  YYSYMBOL_attributed_class_statement = 268, /* attributed_class_statement  */
  YYSYMBOL_class_statement = 269,          /* class_statement  */
  YYSYMBOL_class_name_list = 270,          /* class_name_list  */
  YYSYMBOL_trait_adaptations = 271,        /* trait_adaptations  */
  YYSYMBOL_trait_adaptation_list = 272,    /* trait_adaptation_list  */
  YYSYMBOL_trait_adaptation = 273,         /* trait_adaptation  */
  YYSYMBOL_trait_precedence = 274,         /* trait_precedence  */
  YYSYMBOL_trait_alias = 275,              /* trait_alias  */
  YYSYMBOL_trait_method_reference = 276,   /* trait_method_reference  */
  YYSYMBOL_absolute_trait_method_reference = 277, /* absolute_trait_method_reference  */
  YYSYMBOL_method_body = 278,              /* method_body  */
  YYSYMBOL_variable_modifiers = 279,       /* variable_modifiers  */
  YYSYMBOL_method_modifiers = 280,         /* method_modifiers  */
  YYSYMBOL_non_empty_member_modifiers = 281, /* non_empty_member_modifiers  */
  YYSYMBOL_member_modifier = 282,          /* member_modifier  */
  YYSYMBOL_property_list = 283,            /* property_list  */
  YYSYMBOL_property = 284,                 /* property  */
  YYSYMBOL_class_const_list = 285,         /* class_const_list  */
  YYSYMBOL_class_const_decl = 286,         /* class_const_decl  */
  YYSYMBOL_const_decl = 287,               /* const_decl  */
  YYSYMBOL_echo_expr_list = 288,           /* echo_expr_list  */
  YYSYMBOL_echo_expr = 289,                /* echo_expr  */
  YYSYMBOL_for_exprs = 290,                /* for_exprs  */
  YYSYMBOL_non_empty_for_exprs = 291,      /* non_empty_for_exprs  */
  YYSYMBOL_anonymous_class = 292,          /* anonymous_class  */
  YYSYMBOL_293_8 = 293,                    /* @8  */
  YYSYMBOL_new_expr = 294,                 /* new_expr  */
  YYSYMBOL_expr = 295,                     /* expr  */
  YYSYMBOL_inline_function = 296,          /* inline_function  */
  YYSYMBOL_fn = 297,                       /* fn  */
  YYSYMBOL_function = 298,                 /* function  */
  YYSYMBOL_backup_doc_comment = 299,       /* backup_doc_comment  */
  YYSYMBOL_backup_fn_flags = 300,          /* backup_fn_flags  */
  YYSYMBOL_backup_lex_pos = 301,           /* backup_lex_pos  */
  YYSYMBOL_returns_ref = 302,              /* returns_ref  */
  YYSYMBOL_lexical_vars = 303,             /* lexical_vars  */
  YYSYMBOL_lexical_var_list = 304,         /* lexical_var_list  */
  YYSYMBOL_lexical_var = 305,              /* lexical_var  */
  YYSYMBOL_function_call = 306,            /* function_call  */
  YYSYMBOL_class_name = 307,               /* class_name  */
  YYSYMBOL_class_name_reference = 308,     /* class_name_reference  */
  YYSYMBOL_exit_expr = 309,                /* exit_expr  */
  YYSYMBOL_backticks_expr = 310,           /* backticks_expr  */
  YYSYMBOL_ctor_arguments = 311,           /* ctor_arguments  */
  YYSYMBOL_dereferencable_scalar = 312,    /* dereferencable_scalar  */
  YYSYMBOL_scalar = 313,                   /* scalar  */
  YYSYMBOL_constant = 314,                 /* constant  */
  YYSYMBOL_class_constant = 315,           /* class_constant  */
  YYSYMBOL_optional_expr = 316,            /* optional_expr  */
  YYSYMBOL_variable_class_name = 317,      /* variable_class_name  */
  YYSYMBOL_fully_dereferencable = 318,     /* fully_dereferencable  */
  YYSYMBOL_array_object_dereferencable = 319, /* array_object_dereferencable  */
  YYSYMBOL_callable_expr = 320,            /* callable_expr  */
  YYSYMBOL_callable_variable = 321,        /* callable_variable  */
  YYSYMBOL_variable = 322,                 /* variable  */
  YYSYMBOL_simple_variable = 323,          /* simple_variable  */
  YYSYMBOL_static_member = 324,            /* static_member  */
  YYSYMBOL_new_variable = 325,             /* new_variable  */
  YYSYMBOL_member_name = 326,              /* member_name  */
  YYSYMBOL_property_name = 327,            /* property_name  */
  YYSYMBOL_array_pair_list = 328,          /* array_pair_list  */
  YYSYMBOL_possible_array_pair = 329,      /* possible_array_pair  */
  YYSYMBOL_non_empty_array_pair_list = 330, /* non_empty_array_pair_list  */
  YYSYMBOL_array_pair = 331,               /* array_pair  */
  YYSYMBOL_encaps_list = 332,              /* encaps_list  */
  YYSYMBOL_encaps_var = 333,               /* encaps_var  */
  YYSYMBOL_encaps_var_offset = 334,        /* encaps_var_offset  */
  YYSYMBOL_internal_functions_in_yacc = 335, /* internal_functions_in_yacc  */
  YYSYMBOL_isset_variables = 336,          /* isset_variables  */
  YYSYMBOL_isset_variable = 337            /* isset_variable  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined ZENDSTYPE_IS_TRIVIAL && ZENDSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8798

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  162
/* YYNRULES -- Number of rules.  */
#define YYNRULES  557
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1055

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   402


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,   174,     2,   175,    17,     9,     2,
     167,   168,    15,    13,   165,    14,    12,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     6,   169,
      10,     4,    11,     5,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   172,     2,   166,     8,     2,   173,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   170,     7,   171,    19,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164
};

#if ZENDDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   284,   284,   288,   288,   288,   288,   288,   288,   288,
     288,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   293,   293,   293,   293,   293,   293,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   298,   299,   299,   299,   299,   299,   299,   303,
     304,   312,   313,   318,   319,   324,   325,   330,   331,   335,
     336,   337,   338,   342,   344,   349,   351,   356,   360,   361,
     365,   366,   367,   368,   372,   373,   374,   375,   379,   382,
     382,   385,   385,   388,   389,   390,   391,   392,   396,   397,
     401,   406,   411,   412,   416,   418,   423,   425,   430,   432,
     437,   438,   442,   444,   449,   451,   456,   457,   461,   463,
     469,   470,   471,   472,   479,   480,   481,   482,   484,   486,
     488,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   501,   505,   504,   508,   509,   511,   512,   516,   518,
     523,   524,   528,   529,   533,   534,   538,   539,   543,   547,
     554,   555,   559,   560,   564,   564,   567,   567,   573,   574,
     579,   580,   584,   584,   590,   590,   596,   597,   601,   602,
     606,   607,   611,   612,   613,   614,   618,   619,   623,   624,
     628,   629,   633,   634,   635,   636,   640,   641,   643,   648,
     649,   654,   659,   660,   664,   665,   669,   671,   676,   677,
     682,   683,   688,   691,   697,   698,   703,   706,   712,   713,
     719,   720,   725,   727,   732,   733,   737,   738,   739,   740,
     744,   748,   756,   757,   761,   762,   763,   767,   768,   772,
     773,   780,   781,   782,   786,   787,   788,   792,   794,   799,
     800,   804,   805,   809,   811,   816,   817,   819,   823,   824,
     828,   834,   835,   839,   840,   844,   846,   852,   855,   858,
     865,   866,   867,   872,   873,   877,   878,   879,   883,   885,
     890,   891,   895,   900,   902,   906,   908,   913,   915,   919,
     924,   925,   929,   930,   934,   935,   940,   941,   946,   947,
     948,   949,   950,   951,   955,   956,   960,   962,   967,   968,
     972,   976,   980,   981,   984,   988,   989,   993,   994,   998,
     998,  1008,  1010,  1012,  1017,  1019,  1021,  1023,  1025,  1027,
    1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1055,  1056,  1057,  1058,  1060,  1062,
    1064,  1066,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,
    1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1086,
    1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1108,
    1109,  1111,  1113,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,
    1132,  1133,  1134,  1135,  1136,  1138,  1143,  1148,  1158,  1162,
    1166,  1170,  1174,  1178,  1179,  1183,  1184,  1188,  1189,  1193,
    1194,  1198,  1200,  1202,  1204,  1209,  1212,  1216,  1217,  1218,
    1222,  1223,  1227,  1229,  1230,  1235,  1236,  1241,  1242,  1243,
    1244,  1248,  1249,  1250,  1251,  1253,  1254,  1255,  1256,  1260,
    1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1272,  1274,
    1279,  1280,  1284,  1288,  1289,  1290,  1291,  1295,  1296,  1300,
    1301,  1302,  1306,  1308,  1310,  1312,  1314,  1316,  1320,  1322,
    1324,  1326,  1331,  1332,  1333,  1337,  1339,  1344,  1346,  1348,
    1350,  1352,  1354,  1356,  1361,  1362,  1363,  1367,  1368,  1369,
    1373,  1378,  1379,  1383,  1385,  1390,  1392,  1394,  1396,  1398,
    1400,  1403,  1409,  1411,  1413,  1415,  1420,  1422,  1425,  1428,
    1431,  1433,  1435,  1438,  1442,  1443,  1444,  1445,  1450,  1451,
    1452,  1454,  1456,  1458,  1460,  1465,  1466,  1471
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PREC_ARROW_FUNCTION",
  "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'.'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'@'", "T_NOELSE",
  "\"integer\"", "\"floating-point number\"", "\"identifier\"",
  "\"fully qualified name\"", "\"namespace-relative name\"",
  "\"namespaced name\"", "\"variable\"", "T_INLINE_HTML",
  "\"string content\"", "\"quoted string\"", "\"variable name\"",
  "\"number\"", "\"'include'\"", "\"'include_once'\"", "\"'eval'\"",
  "\"'require'\"", "\"'require_once'\"", "\"'or'\"", "\"'xor'\"",
  "\"'and'\"", "\"'print'\"", "\"'yield'\"", "\"'yield from'\"",
  "\"'instanceof'\"", "\"'new'\"", "\"'clone'\"", "\"'exit'\"", "\"'if'\"",
  "\"'elseif'\"", "\"'else'\"", "\"'endif'\"", "\"'echo'\"", "\"'do'\"",
  "\"'while'\"", "\"'endwhile'\"", "\"'for'\"", "\"'endfor'\"",
  "\"'foreach'\"", "\"'endforeach'\"", "\"'declare'\"", "\"'enddeclare'\"",
  "\"'as'\"", "\"'switch'\"", "\"'endswitch'\"", "\"'case'\"",
  "\"'default'\"", "\"'match'\"", "\"'break'\"", "\"'continue'\"",
  "\"'goto'\"", "\"'function'\"", "\"'fn'\"", "\"'const'\"",
  "\"'return'\"", "\"'try'\"", "\"'catch'\"", "\"'finally'\"",
  "\"'throw'\"", "\"'use'\"", "\"'insteadof'\"", "\"'global'\"",
  "\"'static'\"", "\"'abstract'\"", "\"'final'\"", "\"'private'\"",
  "\"'protected'\"", "\"'public'\"", "\"'var'\"", "\"'unset'\"",
  "\"'isset'\"", "\"'empty'\"", "\"'__halt_compiler'\"", "\"'class'\"",
  "\"'trait'\"", "\"'interface'\"", "\"'extends'\"", "\"'implements'\"",
  "\"'namespace'\"", "\"'list'\"", "\"'array'\"", "\"'callable'\"",
  "\"'__LINE__'\"", "\"'__FILE__'\"", "\"'__DIR__'\"", "\"'__CLASS__'\"",
  "\"'__TRAIT__'\"", "\"'__METHOD__'\"", "\"'__FUNCTION__'\"",
  "\"'__NAMESPACE__'\"", "\"'#['\"", "\"'+='\"", "\"'-='\"", "\"'*='\"",
  "\"'/='\"", "\"'.='\"", "\"'%='\"", "\"'&='\"", "\"'|='\"", "\"'^='\"",
  "\"'<<='\"", "\"'>>='\"", "\"'?""?='\"", "\"'||'\"", "\"'&&'\"",
  "\"'=='\"", "\"'!='\"", "\"'==='\"", "\"'!=='\"", "\"'<='\"", "\"'>='\"",
  "\"'<=>'\"", "\"'<<'\"", "\"'>>'\"", "\"'++'\"", "\"'--'\"",
  "\"'(int)'\"", "\"'(double)'\"", "\"'(string)'\"", "\"'(array)'\"",
  "\"'(object)'\"", "\"'(bool)'\"", "\"'(unset)'\"", "\"'->'\"",
  "\"'?->'\"", "\"'=>'\"", "\"comment\"", "\"doc comment\"",
  "\"open tag\"", "\"'<?='\"", "\"'?>'\"", "\"whitespace\"",
  "\"heredoc start\"", "\"heredoc end\"", "\"'${'\"", "\"'{$'\"",
  "\"'::'\"", "\"'\\\\'\"", "\"'...'\"", "\"'?""?'\"", "\"'**'\"",
  "\"'**='\"", "\"invalid character\"", "T_ERROR", "','", "']'", "'('",
  "')'", "';'", "'{'", "'}'", "'['", "'`'", "'\"'", "'$'", "$accept",
  "start", "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_declaration_name", "namespace_name",
  "legacy_namespace_name", "name", "attribute_decl", "attribute_group",
  "attribute", "attributes", "attributed_statement", "top_statement",
  "$@1", "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "possible_comma",
  "inline_use_declarations", "unprefixed_use_declarations",
  "use_declarations", "inline_use_declaration",
  "unprefixed_use_declaration", "use_declaration", "const_list",
  "inner_statement_list", "inner_statement", "statement", "$@3",
  "catch_list", "catch_name_list", "optional_variable",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "@4", "@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "match",
  "match_arm_list", "non_empty_match_arm_list", "match_arm",
  "match_arm_cond_list", "while_statement", "if_stmt_without_else",
  "if_stmt", "alt_if_stmt_without_else", "alt_if_stmt", "parameter_list",
  "non_empty_parameter_list", "attributed_parameter",
  "optional_visibility_modifier", "parameter",
  "optional_type_without_static", "type_expr", "type", "union_type",
  "type_expr_without_static", "type_without_static",
  "union_type_without_static", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "attributed_class_statement", "class_statement", "class_name_list",
  "trait_adaptations", "trait_adaptation_list", "trait_adaptation",
  "trait_precedence", "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr", "expr",
  "inline_function", "fn", "function", "backup_doc_comment",
  "backup_fn_flags", "backup_lex_pos", "returns_ref", "lexical_vars",
  "lexical_var_list", "lexical_var", "function_call", "class_name",
  "class_name_reference", "exit_expr", "backticks_expr", "ctor_arguments",
  "dereferencable_scalar", "scalar", "constant", "class_constant",
  "optional_expr", "variable_class_name", "fully_dereferencable",
  "array_object_dereferencable", "callable_expr", "callable_variable",
  "variable", "simple_variable", "static_member", "new_variable",
  "member_name", "property_name", "array_pair_list", "possible_array_pair",
  "non_empty_array_pair_list", "array_pair", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-858)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-529)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -858,    41,  4521,  -858,  7292,  7292,  7292,  7292,  7292,  -858,
    -858,    46,  -858,  -858,  -858,  -858,  -858,  -858,  7292,  7292,
     -84,  7292,  7292,  7292,  7292,  7292,   235,  7292,   -43,    -8,
    7292,  6803,    99,   112,   141,   150,   166,   206,  7292,  7292,
     109,  -858,  -858,   362,  7292,   212,  7292,   266,    26,   243,
    -858,  -858,   226,   232,   257,   273,  -858,  -858,  -858,  8514,
     279,   293,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
     295,  1876,  1876,  7292,  7292,  7292,  7292,  7292,  7292,  7292,
     221,  7292,  -858,  -858,  2250,    15,    48,    25,   -28,  -858,
    1922,  -858,  -858,  -858,  -858,  -858,   260,  -858,  -858,  -858,
    -858,   358,  -858,   451,  -858,  -858,  3018,  -858,   424,   424,
    -858,   322,   418,  -858,   297,   458,   330,   367,   319,   318,
     371,   300,  -858,  -858,  -858,  -858,   401,   354,   380,   424,
     380,    -9,   380,   380,  -858,  7605,  7605,  7292,  7605,  7605,
    7762,  7700,  7762,  -858,  -858,  7292,  -858,   -27,  -858,   409,
     318,  -858,   463,  -858,  7292,  -858,  7292,   159,  -858,  7605,
     513,  7292,  7292,  7292,   362,  7292,  7292,  7605,   405,   407,
     422,   583,   183,  -858,   442,  -858,  7605,  -858,  -858,  -858,
    -858,  -858,  -858,    24,   546,   448,   225,  -858,   242,  -858,
    -858,   609,   315,  -858,  -858,  1876,  7292,  7292,   457,   603,
     605,   634,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,  -858,
    -858,  -858,   491,   501,  2250,  2250,  -858,   507,   318,  7292,
    2250,   510,  -858,  -858,   536,   536,   380,   380,   380,   380,
     380,   380,   380,   217,   144,  -858,  6966,  1876,   250,  -858,
    3181,  4684,  1876,   512,  7292,  7463,   518,  -858,   522,  -858,
     100,   515,   275,   100,   102,  7292,  -858,  3869,  -858,   401,
    -858,  -858,  -858,  -858,  -858,   524,  6803,   525,   692,   534,
    1920,  7292,  7292,  7292,  7292,  7292,  7292,  7292,  7292,  7292,
    7292,  7292,  7292,  7292,  7292,   743,  7292,  7292,  7292,  7292,
    7292,  7292,  7292,  7292,  7292,  7292,  7292,  7292,  7292,  -858,
    -858,  -858,   680,  8021,  8021,    98,    98,  7292,  7292,  -858,
    2417,  7292,  7292,  7292,  7292,  7292,  7292,  7292,  7292,  7292,
    7292,  7292,  7292,  -858,  -858,  7292,  -858,  3194,  7292,   318,
    3239,  -858,    26,  -858,  -858,    98,    98,    26,  7292,  7292,
     539,  3252,  7292,  -858,   543,  3414,   542,   548,  7605,  7504,
     182,  3427,  3472,  -858,  -858,  -858,  7292,   362,  -858,  -858,
    4847,   691,   547,    68,   551,   317,  -858,   546,  -858,    26,
    -858,  7292,   693,  -858,   566,  -858,   282,  7605,   569,  -858,
    3485,   568,   619,  -858,   647,  -858,   576,  -858,   579,   581,
     295,   584,  -858,  3647,   587,   730,   733,   572,  -858,  -858,
     408,   104,   589,  -858,  -858,  -858,   449,   591,  -858,  1922,
    -858,  -858,  -858,   480,  2250,  7605,  2584,   761,  2250,  -858,
    -858,  2691,    27,  7292,  7292,   -84,  7292,  7292,  7292,  2083,
     235,  7292,    19,   206,   760,   766,  7292,   222,   232,   257,
     279,   293,   772,   775,   776,   778,   779,   782,   783,   787,
    7292,  -858,   790,   633,  -858,  7605,  -858,   788,  7292,  -858,
    7292,  -858,  -858,  7292,  7563,  7893,  7904,  8122,   152,   152,
     343,   224,   224,    -9,    -9,    -9,  7661,  7739,  7762,  -858,
      91,  7867,  8131,  8131,  8131,  8131,   152,   152,  8131,    49,
      49,  7802,   380,   640,  -858,   644,  7292,   646,   649,   318,
     646,   649,   318,  -858,  7292,  -858,   318,   318,  2755,   661,
    1876,  7762,  7762,  7762,  7762,  7762,  7762,  7762,  7762,  7762,
    7762,  7762,  7762,  7762,  7762,  -858,  7762,   619,  -858,  -858,
    -858,  -858,  -858,  2768,   662,  -858,  1095,  -858,  7292,  1260,
    7292,  7292,   714,  -858,    13,   660,  7605,  -858,  -858,  -858,
     360,   666,  -858,  -858,   781,  -858,  -858,  7605,  -858,  1876,
     673,  7292,   674,  -858,  -858,   295,   747,   677,   295,  -858,
    -858,  4195,   844,  -858,  -858,  -858,   683,  -858,  -858,  -858,
     822,  -858,  -858,  -858,   690,  -858,  7292,  -858,  -858,   689,
    -858,   694,  1876,   696,  7605,  7292,  -858,  -858,  7605,  7292,
    4032,   697,   619,  3660,  3705,  5010,  7802,  7292,   281,   699,
     281,  2824,  -858,  -858,  2957,  -858,  -858,  -858,  -858,   536,
     747,  -858,  -858,  -858,  -858,  3718,  -858,  -858,  -858,   695,
    7605,  1876,   701,  2250,   -95,   -91,  1425,   702,   704,  -858,
    7129,  -858,   521,   798,   444,   711,  -858,  -858,   444,  -858,
     708,  -858,  -858,  -858,   295,  -858,  -858,   715,  -858,   713,
    4358,  -858,  7292,  -858,  -858,  7399,   716,   844,   484,  2250,
    7762,  7605,  -858,  -858,   747,  6803,   863,   721,  7802,  -858,
    -858,  -858,   718,   719,   729,  -858,    45,  -858,   281,   728,
    -858,  -858,  -858,  6640,   731,  5173,  7292,    59,  2250,   732,
     714,  1590,  -858,  -858,  -858,  -858,   571,  -858,   -20,   734,
     740,   738,  -858,   739,  7605,   717,   735,  -858,   888,  -858,
     360,   742,   749,  -858,  -858,   715,   746,   896,   295,  -858,
    -858,  7762,   748,  -858,   752,  -858,  -858,  -858,  -858,  -858,
     911,   284,  -858,   481,  -858,  -858,  -858,   913,  -858,   914,
     926,   768,   858,   773,  -858,   777,   780,   785,   143,   786,
    -858,  -858,  -858,  5336,   629,   789,  7292,    29,     8,  -858,
    -858,   801,  -858,  7129,  -858,  7292,   803,   295,  -858,  -858,
    -858,  -858,   444,   784,  -858,   295,  -858,  -858,  -858,  -858,
    -858,  -858,  -858,  -858,   841,  -858,  -858,    45,   140,  1001,
    -858,  -858,   912,  -858,   844,   774,  6640,   700,   804,  -858,
    -858,  -858,   797,   481,   481,   911,   793,   911,  -858,  -858,
    1755,  -858,  1590,  5499,   794,   795,  -858,  3005,  -858,  -858,
    -858,  -858,  7292,  -858,  7605,  7292,   274,  -858,  5662,  -858,
    -858,   969,   286,  -858,   934,  8601,   424,  -858,  -858,  -858,
      55,  -858,  -858,   958,   959,  -858,  -858,  -858,   941,  -858,
    -858,  -858,   125,  -858,  1128,  -858,  -858,  -858,  -858,   802,
    -858,  -858,  -858,  6640,  7605,  7605,   295,  -858,   809,  -858,
    -858,  -858,  8260,  -858,   982,   328,  -858,   983,   374,  -858,
    8601,  1139,  -858,    55,    55,  -858,  -858,   818,   961,  -858,
     825,  -858,   821,  -858,  5825,  -858,  6640,  -858,   823,   846,
    -858,  -858,  8387,  -858,   837,   839,   946,   929,   854,  7292,
    -858,   934,  -858,  7292,  8601,  -858,  -858,  -858,  -858,  -858,
    7292,  1009,  -858,  -858,   125,   847,  -858,   848,  -858,  -858,
    -858,  -858,  -858,  8688,   295,  8601,  7605,  -858,  7605,  -858,
     849,  7605,  7292,  5988,  -858,  -858,  6151,  -858,  6314,  -858,
    -858,  8601,   715,  -858,  -858,  -858,   281,  -858,  7605,  -858,
    -858,  -858,  -858,   850,  -858,  -858,   911,  -858,   462,  -858,
    -858,  -858,  6477,  -858,  -858
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      82,     0,     2,     1,     0,     0,     0,     0,     0,   461,
     462,    89,    91,    92,    90,   502,   157,   459,     0,     0,
       0,     0,     0,     0,   416,     0,     0,     0,   450,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   480,   480,
       0,   429,   428,     0,   480,     0,     0,     0,     0,   445,
     190,   191,     0,     0,     0,     0,   186,   192,   194,   111,
       0,     0,   470,   471,   472,   477,   473,   474,   475,   476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   139,   521,   452,     0,     0,   469,    98,
       0,   105,    81,   104,   100,   101,     0,   188,   102,   103,
     425,   234,   145,     0,   146,   399,     0,   421,   433,   433,
     497,     0,   466,   413,   467,   468,     0,   487,     0,     0,
     498,   344,   492,   499,   403,    89,   445,     0,   384,   433,
     385,   386,   387,   412,   167,   550,   551,     0,   553,   554,
     415,   417,   419,   445,   339,     0,   446,     0,   342,   447,
     455,   507,   448,   349,   480,   411,     0,     0,   333,   334,
       0,     0,   335,     0,     0,     0,     0,   481,     0,     0,
       0,     0,     0,   137,     0,   139,   420,    85,    88,    86,
     118,   119,    87,   134,     0,     0,     0,   129,     0,   279,
     280,   283,     0,   282,   423,     0,     0,     0,     0,     0,
       0,     0,    79,    84,     3,     4,     5,     6,     7,     8,
       9,    10,    46,    47,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    49,    50,    51,    52,    71,    53,    41,
      42,    43,    70,    44,    45,    30,    31,    32,    33,    34,
      35,    36,    73,    74,    75,    76,    77,    78,    37,    38,
      39,    40,    61,    59,    60,    56,    57,    58,    48,    54,
      55,    66,    67,    68,    62,    63,    65,    64,    69,    72,
      80,    83,   109,     0,   521,   521,    95,   122,    93,     0,
     521,   485,   488,   486,   364,   366,   404,   405,   406,   407,
     408,   409,   410,   536,     0,   464,     0,     0,     0,   534,
       0,     0,     0,     0,     0,   526,     0,   524,   520,   522,
     453,     0,   454,     0,     0,     0,   504,     0,   441,     0,
      99,   106,   422,   184,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     434,   430,   430,     0,     0,     0,     0,     0,   480,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   363,   365,     0,   430,     0,     0,   455,
       0,   343,     0,   456,   341,     0,     0,     0,     0,   480,
       0,     0,     0,   156,     0,     0,     0,   336,   338,     0,
       0,     0,     0,   151,   152,   166,     0,     0,   117,   153,
       0,     0,     0,   134,     0,     0,   113,     0,   115,     0,
     154,     0,     0,   155,   122,   176,   483,   557,   122,   555,
       0,     0,   196,   430,   198,   108,     0,    82,     0,     0,
     123,     0,    94,     0,     0,     0,     0,     0,   463,   535,
       0,     0,   483,   533,   465,   532,   398,     0,   144,     0,
     141,   138,   140,   483,   521,   529,     0,   458,   521,   414,
     460,     0,    89,     3,     4,     5,     6,     7,    46,   416,
      12,    13,   450,    71,   429,   428,    33,    73,    39,    40,
      48,    54,   470,   471,   472,   477,   473,   474,   475,   476,
       0,   271,     0,   122,   273,   275,   424,     0,     0,   235,
       0,   139,   238,     0,     0,   372,   374,   373,   392,   394,
     375,   376,   377,   378,   380,   381,   369,   371,   370,   397,
     367,   368,   390,   391,   388,   389,   393,   395,   396,   382,
     383,   402,   379,     0,   430,     0,     0,   478,   505,     0,
     479,   506,     0,   517,     0,   519,   500,   501,     0,     0,
       0,   347,   350,   351,   352,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   353,   552,   418,   196,   449,   512,
     510,   511,   513,     0,     0,   451,     0,   332,     0,     0,
     335,     0,     0,   162,     0,     0,   430,   136,   168,   135,
       0,     0,   114,   116,   134,   128,   278,   284,   281,   123,
       0,   123,     0,   549,   107,     0,   200,     0,     0,   430,
      82,     0,     0,   457,    96,    97,   484,   458,   538,   539,
       0,   544,   547,   545,     0,   541,     0,   540,   543,     0,
     142,     0,     0,     0,   525,     0,   523,   503,   277,     0,
     123,     0,   196,     0,     0,     0,   401,     0,   246,     0,
     246,     0,   442,   443,     0,   495,   496,   494,   493,   348,
     200,   509,   508,   139,   232,     0,   139,   230,   147,     0,
     337,     0,     0,   521,     0,   483,     0,   216,   216,   150,
     222,   331,   174,   132,     0,   122,   125,   130,     0,   177,
       0,   556,   548,   197,     0,   430,   286,   199,   293,     0,
       0,   112,     0,   546,   537,     0,     0,   531,   483,   521,
     346,   276,   274,   272,   200,     0,     0,     0,   400,   249,
     248,   247,   246,     0,   122,   242,   252,   245,   246,     0,
     515,   518,   430,   236,     0,     0,   335,   483,   521,     0,
       0,     0,   139,   210,   163,   216,     0,   216,     0,   122,
       0,   122,   224,   122,   228,     0,     0,   165,     0,   131,
     123,     0,   122,   127,   159,   201,     0,   314,     0,   286,
     110,   345,     0,   143,     0,   430,   233,   139,   239,   244,
     269,   246,   240,     0,   264,   265,   266,   180,   253,   261,
     263,     0,   435,     0,   148,     0,     0,     0,   458,     0,
     139,   208,   160,     0,     0,     0,     0,     0,     0,   212,
     123,     0,   221,   123,   223,   123,     0,     0,   139,   133,
     124,   121,   123,     0,   286,     0,   321,   322,   323,   320,
     319,   318,   313,   193,   314,   290,   285,   252,     0,   312,
     316,   294,   314,   542,   530,     0,   237,     0,     0,   243,
     262,   181,   182,     0,     0,   269,     0,   269,   286,   231,
       0,   204,     0,     0,     0,     0,   214,     0,   219,   220,
     139,   213,     0,   225,   229,     0,   172,   170,     0,   126,
     120,   314,     0,   291,     0,     0,   433,   317,   195,   286,
       0,   258,   270,   254,   256,   257,   431,   183,     0,   267,
     268,   431,     0,   431,   314,   139,   206,   149,   161,     0,
     211,   215,   139,   218,   227,   226,     0,   173,     0,   175,
     187,   295,     0,   292,   430,     0,   325,     0,     0,   329,
       0,   314,   255,     0,     0,   432,   430,     0,     0,   439,
     122,   438,     0,   340,     0,   209,   217,   171,     0,    73,
     296,   307,     0,   298,     0,     0,     0,   308,     0,     0,
     326,     0,   287,     0,     0,   288,   430,   185,   259,   260,
       0,   250,   139,   440,   123,     0,   139,     0,   139,   297,
     299,   300,   301,     0,     0,     0,   430,   324,   430,   328,
       0,   431,     0,     0,   437,   436,     0,   207,     0,   303,
     304,   306,   302,   309,   327,   330,   246,   427,   251,   431,
     431,   169,   305,     0,   179,   426,   269,   431,     0,   310,
     139,   431,     0,   289,   311
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -858,  -858,     6,  -858,   -37,  -431,  -858,   -34,  -163,    84,
     560,  -858,   -88,    -2,     2,  -858,  -858,  -858,   981,  -858,
    -858,  -428,  -858,  -858,   845,   241,  -674,   595,   869,  -148,
    -858,     3,  -858,  -858,  -858,  -858,  -858,  -858,   406,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,   942,  -858,  -858,  -858,
    -858,  -549,  -858,  -602,   267,  -858,   147,  -858,  -858,  -640,
     145,  -858,  -858,  -858,   197,  -858,  -858,  -858,  -858,  -858,
    -858,  -662,  -858,   230,  -858,   292,   178,  -858,  -823,  -858,
    -858,  -486,  -858,  -857,   -77,  -858,   376,  -858,   620,  -858,
     618,  -761,   201,  -858,  -707,  -858,  -858,    86,  -858,  -858,
    -858,  -858,  -858,  -858,  -858,  -858,  -832,  -858,    78,  -858,
      76,   645,  -858,   664,  -581,  -858,   930,  -858,  -858,   169,
     -41,  -858,    -1,  -362,  -248,  -858,  -106,  -858,  -858,    74,
    -858,   -12,   724,  -858,  -858,   682,   -40,  -858,   -15,   -11,
     -29,  -858,  -858,  -858,  -858,  -858,    89,   688,  -858,  -858,
     722,   -64,  -278,   594,  -858,  -858,   556,   529,  -858,  -858,
    -858,   460
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   279,   280,   522,     2,   282,   713,   183,    88,
     286,   287,    89,   127,   480,    92,   456,   283,   714,   434,
     185,   461,   715,   792,   186,   716,   717,   187,   172,   311,
     481,   482,   706,   712,   906,   948,   787,   444,   445,    94,
     882,   928,    95,   527,   199,    96,    97,    98,   200,    99,
     201,   636,   639,   725,   704,   937,   832,   774,   709,   776,
     900,   100,   780,   781,   782,   783,   698,   101,   102,   103,
     104,   753,   754,   755,   756,   757,   817,   922,   923,   924,
     818,   925,   820,   878,   403,   523,   524,   188,   189,   192,
     193,   797,   865,   866,   727,   953,   982,   983,   984,   985,
     986,   987,  1051,   867,   868,   869,   870,   955,   956,   958,
     959,   173,   157,   158,   416,   417,   148,   399,   105,   106,
     107,   108,   129,   565,   965,  1000,   371,   887,   970,   971,
     110,   111,   150,   155,   321,   404,   112,   113,   114,   115,
     168,   116,   117,   118,   119,   120,   121,   122,   123,   152,
     569,   576,   316,   317,   318,   319,   308,   309,   654,   124,
     448,   449
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,   109,   330,   372,    91,    93,   458,   459,   194,   563,
     169,   328,   464,   182,   149,   174,   630,   795,   759,   707,
     632,   433,   281,   396,   147,   -14,   641,   430,   931,   699,
     933,   291,   291,   -79,   160,   898,   355,   917,   872,   330,
     789,     3,   379,   303,   793,   320,   836,   837,   690,   332,
     813,   770,   134,    15,    15,  -202,   292,   292,   288,   330,
     293,   293,   347,   348,   349,   350,   351,   144,   778,   125,
      12,    13,    14,   771,   836,   837,   303,  -202,   323,   125,
      12,    13,    14,   137,    70,   194,   332,   431,   762,   109,
     -79,   637,   331,   911,   355,   671,   821,   962,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   340,
     146,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   573,   744,   154,   410,    15,   934,   303,  -446,
     303,   431,   473,   170,   968,   834,   355,   838,   921,   327,
     998,   999,   805,   352,   353,   354,   814,   815,   912,   355,
     182,   839,   368,   969,   146,   291,   814,   815,   961,   156,
     294,   295,  -529,  -529,   346,   347,   348,   349,   350,   351,
     306,   307,   303,   128,   130,   131,   132,   133,   909,   901,
     292,  1031,   432,   708,   293,   826,   154,   135,   136,  1047,
     138,   139,   140,   141,   142,   325,   153,   355,   899,   159,
      87,    87,   679,   306,   307,  -203,   661,   167,   167,   730,
     368,   462,    41,   167,   915,   176,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   621,  -203,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   349,
     350,   351,   296,   297,   298,   299,   300,   301,   302,   303,
     310,   304,   368,   315,   711,   306,   307,   306,   307,   125,
      12,    13,    14,    15,   367,   368,   161,   291,   574,   355,
     819,   191,   291,    87,   624,   657,   490,   729,   303,   162,
     473,   946,  -529,  -529,   446,   365,   366,   791,   526,  -205,
     177,   178,   292,   179,    41,    42,   293,   292,   468,   306,
     307,   293,   947,   303,   380,   473,   397,  1032,   163,   479,
     109,  -205,   577,   368,   400,    41,    42,   164,   143,   125,
      12,    13,    14,   167,   412,   411,   812,   880,   413,   144,
     415,   418,   419,   165,   421,   422,   567,   570,   180,   529,
     181,   600,   601,   149,    50,    51,    70,   427,   427,   579,
     613,   841,   428,   844,   333,   846,   347,   348,   349,   350,
     351,   465,   466,   796,   853,   447,   450,   749,   750,   751,
     749,   750,   751,   166,  1043,   305,   306,   307,   143,  -445,
     604,   819,   175,   675,   177,   368,   171,   179,   355,   467,
     437,   330,    70,   195,   438,    70,   472,   929,   930,   196,
     823,   483,   145,   182,   474,   306,   307,   439,   335,   336,
      87,   440,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   197,   769,    41,    42,   479,   109,
     306,   307,   180,   370,   181,   393,   394,   329,   332,   146,
     198,  -488,  -488,   875,  -483,  -483,   284,  -178,   288,  -241,
    -178,   798,  -123,   315,   315,   951,   952,  -483,   463,   315,
     285,   804,   395,   375,   376,    70,   194,  -488,   177,  -488,
    -483,   179,  -483,    41,    42,   471,   365,   366,   109,   373,
     442,   660,   437,   485,   443,   327,   623,   374,   149,   377,
     827,   378,   682,   991,   491,   683,   525,   992,   147,   685,
     686,   337,   338,   339,   368,   125,    12,    13,    14,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,  -482,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,  -489,   994,
     291,   368,  1005,   995,   146,   763,   578,   167,   765,   581,
     582,   583,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,  -485,  -485,   594,   292,   402,   596,   414,   293,
     177,   178,   291,   179,   423,  -485,   424,   603,   167,   655,
     656,   159,   814,   815,   146,  -491,   650,   426,  -485,   291,
    -485,   425,   990,  -484,  -484,   616,   651,   292,   785,   786,
     652,   293,  -486,  -486,  1001,   653,  -484,   405,   406,   694,
     627,   429,   697,   441,   292,  -486,  -490,   436,   293,  -484,
     407,  -484,   291,   723,   833,   451,   728,   452,  -486,   453,
    -486,  1049,  1050,   408,  1020,   409,   835,   836,   837,    90,
     109,   322,   324,    91,    93,  -528,  -528,   292,  -528,  -527,
    -527,   293,  -527,   315,  1034,   664,  1035,   315,   454,   876,
     455,   291,   135,   136,   330,   138,   139,   140,   141,   689,
     153,   457,   460,   479,   109,   176,   752,  -491,   752,   484,
    -483,  -483,   893,   967,   487,   972,   292,   488,   489,   668,
     293,   528,   530,  -483,   895,   836,   837,   673,   531,   674,
     908,   705,   676,   532,   564,   920,  -483,   605,  -483,   773,
     608,   610,   728,   611,   151,   619,   635,   620,   446,   146,
     622,   191,   146,   701,   125,    12,    13,    14,    90,   109,
     291,   629,    91,    93,   631,   681,   190,   634,   125,    12,
      13,    14,    15,   684,   638,    17,   640,   642,   806,   643,
     645,   738,   943,   647,   648,   292,   752,   649,   659,   293,
     658,   479,   109,   479,   109,   665,   -43,   125,    12,    13,
      14,    15,   -70,  1037,   831,   326,   330,   695,   -66,   418,
     700,   -67,   -68,   921,   -62,   -63,   871,   974,   -65,   -64,
     767,  1044,  1045,   -69,   976,   864,   669,   143,   670,  1048,
     447,   814,   815,  1053,   749,   750,   751,   678,   146,   752,
     960,   680,   672,  -514,   702,    61,  -516,    62,    63,    64,
      65,    66,    67,    68,    69,   735,   143,   688,   692,    70,
     710,   479,   109,   469,   740,   907,   718,   475,   741,   525,
     816,   720,   722,   728,   431,   724,   748,   726,   732,   469,
    -490,   475,   469,   475,  1023,   733,   734,   736,  1026,   705,
    1028,   788,   737,   739,   766,   743,   758,   916,   768,   807,
     864,   775,   315,   777,   479,   109,   790,   794,   957,   784,
     798,   289,   146,   799,   847,   803,   703,   810,    86,    87,
     808,   479,   109,   936,   811,   831,   822,   816,   828,   840,
     824,   801,  1052,   843,   845,   848,   479,   109,   315,   864,
     145,   842,   849,   851,   852,   981,   854,   877,    87,   873,
     874,   883,   881,   996,   856,   857,   858,   859,   860,   861,
     862,   146,   864,   884,   977,   418,   885,   315,   886,   146,
     988,   479,   109,   888,   919,   981,   889,   902,   890,   905,
     926,   816,    70,   891,   892,   910,   927,   957,   896,   864,
     932,   816,   954,   940,   941,   963,   964,   816,   816,   966,
     988,   975,   479,   109,   479,   109,   855,   978,  1033,   856,
     857,   858,   859,   860,   861,   862,   989,   993,  1002,  1003,
    1004,  1006,   855,  1008,  1042,   856,   857,   858,   859,   860,
     861,   862,   728,  -445,   816,   897,  1011,    70,  1012,  1013,
    1014,  1015,   784,  1022,   904,  1025,  1036,  1027,  1046,  1030,
     644,   479,   109,    70,   479,   109,   479,   109,   184,   435,
     146,   850,   625,   420,   752,   719,   146,   829,   334,   938,
     903,   879,   942,   151,   809,   914,   742,   816,   816,   855,
     479,   109,   856,   857,   858,   859,   860,   861,   862,   626,
     628,   568,   571,   575,   575,   913,   146,   863,  1010,  1017,
    1019,   944,   617,  -315,   945,  -315,   607,   401,  1024,   549,
      70,   597,   666,   918,   856,   857,   858,   859,   860,   861,
     599,   721,     0,   575,   575,   602,   572,     0,   146,     0,
       0,   693,     0,     0,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,   190,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    23,    24,    25,
     950,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,     0,  1016,    36,
       0,     0,  1018,    37,    38,    39,    40,    41,    42,  1021,
      44,    45,     0,     0,    46,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,    52,    53,    54,   151,     0,
       0,  1038,     0,     0,     0,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,   855,     0,
       0,   856,   857,   858,   859,   860,   861,   862,     0,   855,
       0,     0,   856,   857,   858,   859,   860,   861,   862,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    70,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,   696,    84,    85,    86,
      87,     0,     0,     4,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,     0,     0,    18,    19,    20,    21,    22,   973,
       0,     0,    23,    24,    25,     0,    26,    27,    28,    29,
     997,     0,     0,    30,    31,    32,     0,    33,     0,    34,
       0,    35,     0,     0,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,    44,    45,     0,     0,    46,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    82,
      83,   772,    84,    85,    86,    87,     0,     0,     4,     5,
       0,     0,     0,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,     0,     0,    36,
       0,     0,     0,    37,    38,    39,    40,    41,    42,     0,
      44,    45,     0,     0,    46,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,   830,    84,    85,    86,
      87,     0,     0,     4,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,     0,     0,    18,    19,    20,    21,    22,     0,
       0,     0,    23,    24,    25,     0,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,     0,    33,     0,    34,
       0,    35,     0,     0,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,    44,    45,     0,     0,    46,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    82,
      83,   935,    84,    85,    86,    87,     0,     0,     4,     5,
       0,     0,     0,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,     0,     0,    36,
       0,     0,     0,    37,    38,    39,    40,    41,    42,     0,
      44,    45,     0,     0,    46,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
     125,    12,    13,    14,    15,     0,     0,    17,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,   533,    84,    85,    86,
      87,     0,     0,     4,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,   125,    12,    13,    14,    15,     0,
       0,    17,     0,     0,    18,    19,    20,    21,    22,   143,
       0,     0,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,    37,     0,
       0,     0,    41,    42,    41,    42,     0,     0,     0,    46,
       0,     0,     0,   126,     0,   329,    50,    51,     0,     0,
       0,    53,    54,     0,     0,     0,    56,    57,    58,     0,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   289,     0,     0,     0,     0,   290,     0,
      86,    87,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,   -47,
       0,     0,    84,    85,    86,    87,     4,     5,     0,     0,
       0,     6,     7,     8,     0,     9,    10,   125,    12,    13,
      14,    15,     0,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,     0,     0,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,    46,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,    84,    85,    86,    87,   312,
       0,     0,     0,     4,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,   125,    12,    13,    14,    15,     0,
       0,    17,     0,     0,    18,    19,    20,    21,    22,     0,
       0,     0,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,    46,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,    53,    54,     0,     0,     0,     0,     0,     0,     0,
     313,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,    84,    85,    86,    87,   580,     0,     0,     0,
       4,     5,     0,     0,     0,     6,     7,     8,     0,     9,
      10,   125,    12,    13,    14,    15,     0,     0,    17,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,    46,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,    84,
      85,    86,    87,   662,     0,     0,     0,     4,     5,     0,
       0,     0,     6,     7,     8,     0,     9,    10,   125,    12,
      13,    14,    15,     0,     0,    17,     0,     0,    18,    19,
      20,    21,    22,     0,     0,     0,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,    46,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,     0,     0,   663,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   340,     0,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
     352,   353,   354,     0,     0,     0,   355,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,    84,    85,    86,    87,
     340,     0,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   340,     0,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,   354,     0,     0,     0,
     355,     0,     0,     0,     0,     0,     0,   352,   353,   354,
       0,     0,     0,   355,     0,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,     0,     0,     0,   340,
       0,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   667,   352,   353,   354,     0,     0,     0,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
       0,     0,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   687,     0,   367,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,     0,
       0,     0,   340,     0,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   760,   352,   353,   354,     0,
       0,     0,   355,     0,     0,     0,     0,     0,     0,     0,
     340,   898,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   340,     0,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,   354,     0,     0,     0,
     355,     0,     0,     0,     0,     0,     0,   352,   353,   354,
       0,     0,     0,   355,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   761,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
       0,     0,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,     0,     0,   899,     0,     0,     0,   367,   368,
       0,     0,     0,     0,     0,     0,   340,   369,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   340,
       0,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,   354,     0,     0,     0,   355,     0,     0,     0,
       0,     0,     0,   352,   353,   354,     0,     0,     0,   355,
       0,     0,     0,     0,   340,     0,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   340,     0,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   353,
     354,     0,     0,     0,   355,     0,     0,     0,     0,     0,
       0,   352,   353,   354,     0,     0,     0,   355,     0,     0,
       0,     0,     0,     0,     0,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,     0,     0,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,   368,     0,     0,     0,     0,     0,     0,   476,
       0,     0,     0,     0,   367,   368,     0,     0,     0,     0,
       0,     0,   595,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,     0,     0,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
     368,     0,     0,     0,     0,     0,     0,   598,     0,     0,
       0,     0,   367,   368,     0,     0,     0,     0,     0,   340,
     606,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   340,     0,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   353,   354,     0,     0,     0,   355,
       0,     0,     0,     0,     0,     0,   352,   353,   354,     0,
       0,     0,   355,     0,     0,     0,     0,   340,     0,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     340,     0,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,   354,     0,     0,     0,   355,     0,     0,
       0,     0,     0,     0,   352,   353,   354,     0,     0,     0,
     355,     0,     0,     0,     0,     0,     0,     0,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,     0,
       0,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,   368,     0,     0,     0,     0,
       0,     0,   609,     0,     0,     0,     0,   367,   368,     0,
       0,     0,     0,     0,     0,   614,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,     0,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   368,     0,     0,     0,     0,     0,     0,
     615,     0,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,   340,   633,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   340,     0,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   353,   354,     0,
       0,     0,   355,     0,     0,     0,     0,     0,     0,   352,
     353,   354,     0,     0,     0,   355,     0,     0,     0,     0,
     340,     0,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   340,     0,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,   354,     0,     0,     0,
     355,     0,     0,     0,     0,     0,     0,   352,   353,   354,
       0,     0,     0,   355,     0,     0,     0,     0,     0,     0,
       0,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,     0,     0,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,   368,     0,
       0,     0,     0,     0,     0,   646,     0,     0,     0,     0,
     367,   368,     0,     0,     0,     0,     0,     0,   745,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
       0,     0,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   368,     0,     0,     0,
       0,     0,     0,   746,     0,     0,     0,     0,   367,   368,
       0,     0,     4,     5,     0,     0,   764,     6,     7,     8,
       0,     9,    10,   492,    12,    13,    14,    15,     0,     0,
      17,     0,     0,   493,   494,   495,   496,   497,   209,   210,
     211,   498,   499,    25,   214,   500,   501,   502,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   503,   238,   239,
     240,   504,   505,   243,   244,   245,   246,   247,   506,   249,
     250,   251,   507,   253,   254,   255,   256,   257,   258,   259,
     508,   509,     0,   262,   263,   264,   265,   266,   267,   510,
     511,   270,   512,   513,   514,   515,   516,   517,   518,   519,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,   520,     0,
       0,     0,     0,     0,     0,     0,    81,   521,     0,     0,
       0,    84,    85,    86,    87,     4,     5,     0,     0,     0,
       6,     7,     8,     0,     9,    10,   492,    12,    13,    14,
      15,     0,     0,    17,     0,     0,   493,   494,   495,   496,
     497,   209,   210,   211,   498,   499,    25,   214,   500,   501,
     502,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     503,   238,   239,   240,   504,   505,   243,   244,   245,   246,
     247,   506,   249,   250,   251,   507,   253,   254,   255,   256,
     257,   258,   259,   508,   509,     0,   262,   263,   264,   265,
     266,   267,   510,   511,   270,   512,   513,   514,   515,   516,
     517,   518,   519,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,   520,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    84,    85,    86,    87,     4,     5,
       0,     0,     0,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,     0,     0,    36,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,    46,    47,     0,    48,    49,    50,
      51,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     0,     0,    59,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,   731,    84,    85,    86,
      87,     4,     5,     0,     0,     0,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,     0,    17,
       0,     0,    18,    19,    20,    21,    22,     0,     0,     0,
      23,    24,    25,     0,    26,    27,    28,    29,     0,     0,
       0,    30,    31,    32,     0,    33,     0,    34,     0,    35,
       0,     0,    36,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,    46,    47,     0,
      48,    49,    50,    51,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,     0,     0,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,    82,    83,   800,
      84,    85,    86,    87,     4,     5,     0,     0,     0,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,     0,    18,    19,    20,    21,    22,
       0,     0,     0,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,     0,     0,    36,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
      46,    47,     0,    48,    49,    50,    51,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     0,     0,
      59,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
      82,    83,     0,    84,    85,    86,    87,     4,     5,     0,
       0,     0,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,     0,    17,     0,     0,    18,    19,
      20,    21,    22,     0,     0,     0,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
       0,    33,     0,    34,     0,    35,     0,     0,    36,     0,
       0,     0,    37,    38,    39,    40,    41,    42,     0,    44,
      45,     0,     0,    46,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,    52,    53,    54,   477,    56,    57,
      58,     0,     0,     0,    60,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,    83,   478,    84,    85,    86,    87,
       4,     5,     0,     0,     0,     6,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,     0,
       0,    36,     0,     0,     0,    37,    38,    39,    40,    41,
      42,     0,    44,    45,     0,     0,    46,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,    52,    53,    54,
     477,    56,    57,    58,     0,     0,     0,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,    83,   618,    84,
      85,    86,    87,     4,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,     0,     0,    18,    19,    20,    21,    22,     0,
       0,     0,    23,    24,    25,     0,    26,    27,    28,    29,
       0,     0,   747,    30,    31,    32,     0,    33,     0,    34,
       0,    35,     0,     0,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,    44,    45,     0,     0,    46,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
      52,    53,    54,   477,    56,    57,    58,     0,     0,     0,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    82,
      83,     0,    84,    85,    86,    87,     4,     5,     0,     0,
       0,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,     0,     0,    23,    24,    25,     0,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,   825,
      33,     0,    34,     0,    35,     0,     0,    36,     0,     0,
       0,    37,    38,    39,    40,    41,    42,     0,    44,    45,
       0,     0,    46,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,    52,    53,    54,   477,    56,    57,    58,
       0,     0,     0,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    82,    83,     0,    84,    85,    86,    87,     4,
       5,     0,     0,     0,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,     0,     0,
      18,    19,    20,    21,    22,     0,     0,     0,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,     0,    33,     0,    34,     0,    35,   894,     0,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
       0,    44,    45,     0,     0,    46,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,    52,    53,    54,   477,
      56,    57,    58,     0,     0,     0,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,    82,    83,     0,    84,    85,
      86,    87,     4,     5,     0,     0,     0,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,     0,
      17,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       0,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,     0,    33,     0,    34,   939,
      35,     0,     0,    36,     0,     0,     0,    37,    38,    39,
      40,    41,    42,     0,    44,    45,     0,     0,    46,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,    52,
      53,    54,   477,    56,    57,    58,     0,     0,     0,    60,
      61,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,    83,
       0,    84,    85,    86,    87,     4,     5,     0,     0,     0,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,     0,    17,     0,     0,    18,    19,    20,    21,
      22,     0,     0,     0,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,     0,    33,
       0,    34,     0,    35,     0,     0,    36,     0,     0,     0,
      37,    38,    39,    40,    41,    42,     0,    44,    45,     0,
       0,    46,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,    52,    53,    54,   477,    56,    57,    58,     0,
       0,     0,    60,    61,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    82,    83,   949,    84,    85,    86,    87,     4,     5,
       0,     0,     0,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,     0,    33,  1007,    34,     0,    35,     0,     0,    36,
       0,     0,     0,    37,    38,    39,    40,    41,    42,     0,
      44,    45,     0,     0,    46,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,    52,    53,    54,   477,    56,
      57,    58,     0,     0,     0,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,     0,    84,    85,    86,
      87,     4,     5,     0,     0,     0,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,     0,    17,
       0,     0,    18,    19,    20,    21,    22,     0,     0,     0,
      23,    24,    25,     0,    26,    27,    28,    29,     0,     0,
       0,    30,    31,    32,     0,    33,     0,    34,     0,    35,
       0,     0,    36,     0,     0,     0,    37,    38,    39,    40,
      41,    42,     0,    44,    45,     0,     0,    46,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,    52,    53,
      54,   477,    56,    57,    58,     0,     0,     0,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,    82,    83,  1039,
      84,    85,    86,    87,     4,     5,     0,     0,     0,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,     0,    18,    19,    20,    21,    22,
       0,     0,     0,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,     0,     0,    36,     0,     0,     0,    37,
      38,    39,    40,    41,    42,     0,    44,    45,     0,     0,
      46,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,    52,    53,    54,   477,    56,    57,    58,     0,     0,
       0,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
      82,    83,  1040,    84,    85,    86,    87,     4,     5,     0,
       0,     0,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,     0,    17,     0,     0,    18,    19,
      20,    21,    22,     0,     0,     0,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
       0,    33,     0,    34,     0,    35,     0,     0,    36,     0,
       0,     0,    37,    38,    39,    40,    41,    42,     0,    44,
      45,     0,     0,    46,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,    52,    53,    54,   477,    56,    57,
      58,     0,     0,     0,    60,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,    83,  1041,    84,    85,    86,    87,
       4,     5,     0,     0,     0,     6,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,     0,
       0,    36,     0,     0,     0,    37,    38,    39,    40,    41,
      42,     0,    44,    45,     0,     0,    46,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,    52,    53,    54,
     477,    56,    57,    58,     0,     0,     0,    60,    61,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,    83,  1054,    84,
      85,    86,    87,     4,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,     0,     0,    18,    19,    20,    21,    22,     0,
       0,     0,    23,    24,    25,     0,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,     0,    33,     0,    34,
       0,    35,     0,     0,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,    44,    45,     0,     0,    46,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
      52,    53,    54,   477,    56,    57,    58,     0,     0,     0,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    82,
      83,     0,    84,    85,    86,    87,     4,     5,     0,     0,
       0,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,     0,     0,    23,    24,    25,     0,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,     0,
      33,     0,    34,     0,    35,     0,     0,    36,     0,     0,
       0,    37,    38,    39,    40,    41,    42,     0,    44,    45,
       0,     0,    46,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    82,    83,     0,    84,    85,    86,    87,     4,
       5,     0,     0,     0,     6,     7,     8,     0,     9,    10,
     125,    12,    13,    14,    15,     0,     0,    17,   470,     0,
      18,    19,    20,    21,    22,     0,     0,     0,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,    46,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,    84,    85,
      86,    87,     4,     5,     0,     0,     0,     6,     7,     8,
       0,     9,    10,   125,    12,    13,    14,    15,     0,     0,
      17,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       0,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   779,    37,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,    46,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,    60,
      61,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    84,    85,    86,    87,     4,     5,     0,     0,     0,
       6,     7,     8,     0,     9,    10,   125,    12,    13,    14,
      15,     0,     0,    17,     0,     0,    18,    19,    20,    21,
      22,     0,     0,     0,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,    46,     0,     0,     0,   126,     0,     0,     0,     0,
       0,     0,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   340,     0,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,   352,   353,
     354,     0,     0,     0,   355,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    84,    85,    86,    87,   340,     0,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,   354,     0,     0,     0,   355,   340,
       0,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,     0,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   353,   354,     0,     0,     0,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
     368,     0,     0,     0,     0,   802,     0,   612,   340,   677,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,     0,     0,     0,     0,     0,     0,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,     0,     0,
       0,     0,   352,   353,   354,     0,     0,     0,   355,   486,
     340,     0,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   367,   368,     0,     0,     0,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,     0,
       0,     0,     0,     0,   352,   353,   354,     0,     0,     0,
     355,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,   368,   340,     0,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,     0,     0,
       0,   353,   354,     0,     0,   340,   355,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,     0,     0,
       0,     0,     0,   367,   368,     0,     0,     0,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
       0,     0,     0,     0,   340,   355,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   368,   340,     0,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     354,     0,     0,     0,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   355,     0,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
       0,   367,   368,     0,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   355,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     367,   368,     0,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,     0,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,     0,     0,   367,
     368,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,     0,   355,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   367,   368,     0,     0,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,     0,   355,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   358,   359,   360,   361,   362,   363,   364,
     365,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   368,     0,
     358,   359,   360,   361,   362,   363,   364,   365,   366,     0,
       0,     0,     0,     0,     0,   202,     0,     0,     0,    15,
       0,     0,     0,     0,   368,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   368,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   344,   345,   346,   347,   348,   349,   350,   351,
       0,   344,   345,   346,   347,   348,   349,   350,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   355,     0,     0,
       0,     0,     0,     0,     0,     0,   355,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   566,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   358,   359,
     360,   361,   362,   363,   364,   365,   366,  -529,  -529,  -529,
    -529,   362,   363,  -529,   365,   366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   368,   492,    12,    13,    14,     0,     0,
       0,     0,   368,     0,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,     0,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   979,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   492,    12,    13,    14,     0,     0,     0,     0,     0,
       0,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   980,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     979,   253,   254,   255,   256,   257,   258,   259,   260,   261,
       0,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,  1009,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,     0,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,  1029,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,     0,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   856,   857,   858,   859,   860,   861,   258,   259,   260,
     261,     0,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278
};

static const yytype_int16 yycheck[] =
{
       2,     2,    90,   109,     2,     2,   284,   285,    49,   371,
      39,    88,   290,    47,    26,    44,   444,   724,   680,     6,
     448,   184,    59,   129,    26,     6,   457,   175,   885,   610,
     887,    71,    72,     6,    31,     6,    45,   869,   799,   127,
     714,     0,   119,    28,   718,    30,    66,    67,   597,    90,
       5,   146,     6,    28,    28,   146,    71,    72,    70,   147,
      71,    72,    13,    14,    15,    16,    17,    94,   708,    24,
      25,    26,    27,   168,    66,    67,    28,   168,    30,    24,
      25,    26,    27,   167,   111,   126,   127,    63,   690,    90,
      63,   453,    90,   854,    45,   523,   758,   920,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     5,
      26,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    24,   672,   167,   154,    28,   888,    28,   157,
      28,    63,    30,    24,     9,   775,    45,   777,    83,   167,
     963,   964,   744,    39,    40,    41,   101,   102,   855,    45,
     184,   171,   161,    28,    70,   195,   101,   102,   919,   167,
      71,    72,    10,    11,    12,    13,    14,    15,    16,    17,
     155,   156,    28,     4,     5,     6,     7,     8,   852,   171,
     195,  1013,   158,   170,   195,   766,   167,    18,    19,  1046,
      21,    22,    23,    24,    25,   170,    27,    45,   169,    30,
     175,   175,   564,   155,   156,   146,   484,    38,    39,   640,
     161,   288,    72,    44,    74,    46,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   158,   168,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    15,
      16,    17,    73,    74,    75,    76,    77,    78,    79,    28,
      81,    30,   161,    84,   616,   155,   156,   155,   156,    24,
      25,    26,    27,    28,   160,   161,   167,   307,   170,    45,
     756,    28,   312,   175,   437,   171,   174,   639,    28,   167,
      30,     7,   130,   131,   195,   133,   134,   715,   329,   146,
      24,    25,   307,    27,    72,    73,   307,   312,   154,   155,
     156,   312,    28,    28,     4,    30,   137,  1014,   167,   311,
     311,   168,   376,   161,   145,    72,    73,   167,    83,    24,
      25,    26,    27,   154,   165,   156,   754,   813,   169,    94,
     161,   162,   163,   167,   165,   166,   373,   374,    72,   336,
      74,   405,   406,   355,    84,    85,   111,   165,   165,   378,
     168,   779,   169,   781,    94,   783,    13,    14,    15,    16,
      17,   144,   145,   725,   792,   196,   197,    86,    87,    88,
      86,    87,    88,   167,  1036,   154,   155,   156,    83,   157,
     409,   867,   170,   531,    24,   161,    24,    27,    45,   172,
     165,   479,   111,   167,   169,   111,   307,   883,   884,   167,
     762,   312,   167,   437,   154,   155,   156,   165,    50,    51,
     175,   169,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   167,   703,    72,    73,   430,   430,
     155,   156,    72,     9,    74,   135,   136,    83,   479,   355,
     167,   144,   145,   805,   144,   145,   167,   165,   460,   168,
     168,   165,   168,   284,   285,   169,   170,   157,   289,   290,
     167,   739,   162,   144,   145,   111,   507,   170,    24,   172,
     170,    27,   172,    72,    73,   306,   133,   134,   479,   157,
     165,   479,   165,   314,   169,   167,   169,   157,   500,   170,
     768,   172,   569,   165,   325,   572,   327,   169,   500,   576,
     577,    50,    51,    52,   161,    24,    25,    26,    27,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   157,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   167,   165,
     580,   161,   970,   169,   460,   693,   377,   378,   696,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   144,   145,   395,   580,   157,   398,    55,   580,
      24,    25,   612,    27,   169,   157,   169,   408,   409,   171,
     172,   412,   101,   102,   500,   167,    14,     4,   170,   629,
     172,   169,   954,   144,   145,   426,    24,   612,    77,    78,
      28,   612,   144,   145,   966,    33,   157,   144,   145,   606,
     441,   169,   609,     4,   629,   157,   167,   169,   629,   170,
     157,   172,   662,   635,   772,   168,   638,    24,   170,    24,
     172,   169,   170,   170,   996,   172,    65,    66,    67,   641,
     641,    85,    86,   641,   641,   165,   166,   662,   168,   165,
     166,   662,   168,   484,  1016,   486,  1018,   488,    24,   807,
     169,   701,   493,   494,   752,   496,   497,   498,   499,   580,
     501,   170,   165,   675,   675,   506,   678,   167,   680,   167,
     144,   145,   830,   931,   166,   933,   701,   165,   173,   520,
     701,   167,   167,   157,    65,    66,    67,   528,     6,   530,
     848,   612,   533,   169,    24,     5,   170,   168,   172,   706,
     167,   169,   724,   165,    26,    24,    97,   170,   629,   635,
     169,    28,   638,     9,    24,    25,    26,    27,   730,   730,
     770,   165,   730,   730,   165,   566,    48,   169,    24,    25,
      26,    27,    28,   574,    97,    31,   170,   168,   745,   168,
     166,   662,   900,   166,    24,   770,   758,    24,   167,   770,
     171,   763,   763,   765,   765,     4,     6,    24,    25,    26,
      27,    28,     6,  1021,   771,    87,   864,   608,     6,   610,
     611,     6,     6,    83,     6,     6,   798,   935,     6,     6,
     701,  1039,  1040,     6,   942,   797,     6,    83,   165,  1047,
     631,   101,   102,  1051,    86,    87,    88,   167,   724,   811,
     916,   167,    24,   167,   100,   101,   167,   103,   104,   105,
     106,   107,   108,   109,   110,   656,    83,   166,   166,   111,
     170,   833,   833,   304,   665,   847,   170,   308,   669,   670,
     756,   168,   168,   855,    63,    98,   677,   170,     4,   320,
     167,   322,   323,   324,  1002,    33,   166,   168,  1006,   770,
    1008,    63,   168,   167,   169,   168,   167,   868,   167,     6,
     872,   169,   703,   169,   876,   876,   165,   169,   915,   710,
     165,   167,   798,   170,   167,   169,   172,   168,   174,   175,
     169,   893,   893,   890,   165,   892,   168,   813,   166,   165,
     169,   732,  1050,   165,   165,   170,   908,   908,   739,   911,
     167,   171,    24,   171,   165,   952,   170,     6,   175,   171,
     168,     7,     9,   960,    83,    84,    85,    86,    87,    88,
      89,   847,   934,     7,   946,   766,   168,   768,    80,   855,
     952,   943,   943,   170,   170,   982,   169,   146,   168,   146,
     146,   867,   111,   168,   168,   171,   159,   994,   169,   961,
     167,   877,    28,   169,   169,     7,     7,   883,   884,    28,
     982,   169,   974,   974,   976,   976,    80,   168,  1015,    83,
      84,    85,    86,    87,    88,    89,     4,     4,   170,    28,
     165,   170,    80,   170,  1031,    83,    84,    85,    86,    87,
      88,    89,  1014,   157,   920,   836,   169,   111,   169,    63,
      81,   157,   843,     4,   845,   168,   167,   169,   168,  1013,
     460,  1023,  1023,   111,  1026,  1026,  1028,  1028,    47,   184,
     946,   790,   437,   164,  1036,   629,   952,   770,    96,   892,
     843,   811,   897,   355,   752,   867,   670,   963,   964,    80,
    1052,  1052,    83,    84,    85,    86,    87,    88,    89,   439,
     442,   373,   374,   375,   376,   864,   982,   171,   982,   991,
     994,   902,   427,    72,   905,    74,   412,   147,  1004,   355,
     111,   399,   488,   171,    83,    84,    85,    86,    87,    88,
     402,   631,    -1,   405,   406,   407,   374,    -1,  1014,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,   439,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
     171,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,   989,    64,
      -1,    -1,   993,    68,    69,    70,    71,    72,    73,  1000,
      75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,   500,    -1,
      -1,  1022,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    -1,    80,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,   169,   170,     6,   172,   173,   174,
     175,    -1,    -1,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,   171,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
     171,    -1,    -1,    53,    54,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    -1,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,     6,   172,   173,   174,   175,    -1,    -1,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    -1,    64,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,   169,   170,     6,   172,   173,   174,
     175,    -1,    -1,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    -1,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,     6,   172,   173,   174,   175,    -1,    -1,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    -1,    64,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    31,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,   169,   170,     6,   172,   173,   174,
     175,    -1,    -1,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    83,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,    68,    -1,
      -1,    -1,    72,    73,    72,    73,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    -1,    83,    84,    85,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    94,    95,    96,    -1,
     100,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,   172,    -1,
     174,   175,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,     6,
      -1,    -1,   172,   173,   174,   175,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,   172,   173,   174,   175,     9,
      -1,    -1,    -1,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,   172,   173,   174,   175,     9,    -1,    -1,    -1,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,   172,
     173,   174,   175,     9,    -1,    -1,    -1,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,   172,   173,   174,   175,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    39,    40,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,    -1,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    39,    40,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,     5,   169,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,   168,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,     5,
     168,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   168,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,
      -1,    -1,     5,   168,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,   168,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,   160,   161,
      -1,    -1,    13,    14,    -1,    -1,   168,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,   168,    -1,    -1,
      -1,   172,   173,   174,   175,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,   172,   173,   174,   175,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    -1,    64,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    -1,    -1,    99,   100,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,   169,   170,   171,   172,   173,   174,
     175,    13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    -1,    57,    -1,    59,    -1,    61,
      -1,    -1,    64,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    -1,    -1,    99,   100,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,
     172,   173,   174,   175,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    80,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    -1,    -1,
      99,   100,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
     169,   170,    -1,   172,   173,   174,   175,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    -1,    75,
      76,    -1,    -1,    79,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    -1,    -1,    -1,   100,   101,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,   169,   170,   171,   172,   173,   174,   175,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    -1,    57,    -1,    59,    -1,    61,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    75,    76,    -1,    -1,    79,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,   172,
     173,   174,   175,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    -1,    52,    53,    54,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    -1,    -1,    79,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,    -1,   172,   173,   174,   175,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    -1,    59,    -1,    61,    -1,    -1,    64,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    75,    76,
      -1,    -1,    79,    -1,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      -1,    -1,    -1,   100,   101,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,   169,   170,    -1,   172,   173,   174,   175,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    42,    43,
      44,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,
      54,    55,    -1,    57,    -1,    59,    -1,    61,    62,    -1,
      64,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      -1,    75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,   169,   170,    -1,   172,   173,
     174,   175,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    48,    49,    -1,
      -1,    -1,    53,    54,    55,    -1,    57,    -1,    59,    60,
      61,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    75,    76,    -1,    -1,    79,    -1,
      -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    96,    -1,    -1,    -1,   100,
     101,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      -1,   172,   173,   174,   175,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    -1,    57,
      -1,    59,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    75,    76,    -1,
      -1,    79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    -1,
      -1,    -1,   100,   101,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    -1,    -1,    64,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,   169,   170,    -1,   172,   173,   174,
     175,    13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    -1,    57,    -1,    59,    -1,    61,
      -1,    -1,    64,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,    75,    76,    -1,    -1,    79,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    -1,    -1,    -1,   100,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,
     172,   173,   174,   175,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    -1,
      59,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    -1,    75,    76,    -1,    -1,
      79,    -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    -1,    -1,
      -1,   100,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
     169,   170,   171,   172,   173,   174,   175,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    -1,    75,
      76,    -1,    -1,    79,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    -1,    -1,    -1,   100,   101,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,   169,   170,   171,   172,   173,   174,   175,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    -1,    57,    -1,    59,    -1,    61,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    75,    76,    -1,    -1,    79,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    -1,    -1,    -1,   100,   101,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,   172,
     173,   174,   175,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    -1,    -1,    79,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,    -1,   172,   173,   174,   175,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,    -1,    -1,    53,    54,    55,    -1,
      57,    -1,    59,    -1,    61,    -1,    -1,    64,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    75,    76,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,   169,   170,    -1,   172,   173,   174,   175,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    42,    43,
      44,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,   175,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,
      -1,   172,   173,   174,   175,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,   172,   173,   174,   175,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
     161,    -1,    -1,    -1,    -1,   166,    -1,    63,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,   146,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   160,   161,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    40,    41,    -1,    -1,     5,    45,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,   160,   161,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,     5,    45,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      41,    -1,    -1,    -1,    45,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,   160,   161,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,   160,
     161,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    45,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   160,   161,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   161,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,   161,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   161,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,   161,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   171,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   171,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   177,   181,     0,    13,    14,    18,    19,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    31,    34,    35,
      36,    37,    38,    42,    43,    44,    46,    47,    48,    49,
      53,    54,    55,    57,    59,    61,    64,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    79,    80,    82,    83,
      84,    85,    90,    91,    92,    93,    94,    95,    96,    99,
     100,   101,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     153,   167,   169,   170,   172,   173,   174,   175,   185,   188,
     189,   190,   191,   207,   215,   218,   221,   222,   223,   225,
     237,   243,   244,   245,   246,   294,   295,   296,   297,   298,
     306,   307,   312,   313,   314,   315,   317,   318,   319,   320,
     321,   322,   323,   324,   335,    24,    83,   189,   295,   298,
     295,   295,   295,   295,     6,   295,   295,   167,   295,   295,
     295,   295,   295,    83,    94,   167,   185,   189,   292,   307,
     308,   323,   325,   295,   167,   309,   167,   288,   289,   295,
     207,   167,   167,   167,   167,   167,   167,   295,   316,   316,
      24,    24,   204,   287,   316,   170,   295,    24,    25,    27,
      72,    74,   183,   184,   194,   196,   200,   203,   263,   264,
     323,    28,   265,   266,   296,   167,   167,   167,   167,   220,
     224,   226,    24,    27,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   178,
     179,   180,   182,   193,   167,   167,   186,   187,   307,   167,
     172,   312,   314,   315,   322,   322,   295,   295,   295,   295,
     295,   295,   295,    28,    30,   154,   155,   156,   332,   333,
     295,   205,     9,   100,   159,   295,   328,   329,   330,   331,
      30,   310,   332,    30,   332,   170,   323,   167,   260,    83,
     188,   190,   296,    94,   222,    50,    51,    50,    51,    52,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    39,    40,    41,    45,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   160,   161,   169,
       9,   302,   302,   157,   157,   144,   145,   170,   172,   260,
       4,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   135,   136,   162,   302,   295,   146,   293,
     295,   292,   157,   260,   311,   144,   145,   157,   170,   172,
     316,   295,   165,   169,    55,   295,   290,   291,   295,   295,
     204,   295,   295,   169,   169,   169,     4,   165,   169,   169,
     205,    63,   158,   184,   195,   200,   169,   165,   169,   165,
     169,     4,   165,   169,   213,   214,   322,   295,   336,   337,
     295,   168,    24,    24,    24,   169,   192,   170,   328,   328,
     165,   197,   260,   295,   328,   144,   145,   172,   154,   333,
      32,   295,   322,    30,   154,   333,   168,    93,   171,   189,
     190,   206,   207,   322,   167,   295,   146,   166,   165,   173,
     174,   295,    24,    34,    35,    36,    37,    38,    42,    43,
      46,    47,    48,    68,    72,    73,    79,    83,    91,    92,
     100,   101,   103,   104,   105,   106,   107,   108,   109,   110,
     159,   168,   180,   261,   262,   295,   296,   219,   167,   207,
     167,     6,   169,     6,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   308,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   299,    24,   299,   170,   180,   323,   326,
     180,   323,   326,    24,   170,   323,   327,   327,   295,   316,
       9,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   168,   295,   311,   168,   323,
     327,   327,   323,   295,   316,   168,   168,   289,   167,   168,
     169,   165,    63,   168,   168,   168,   295,   287,   171,    24,
     170,   158,   169,   169,   184,   203,   264,   295,   266,   165,
     197,   165,   197,   168,   169,    97,   227,   299,    97,   228,
     170,   181,   168,   168,   186,   166,   168,   166,    24,    24,
      14,    24,    28,    33,   334,   171,   172,   171,   171,   167,
     190,   328,     9,   100,   295,     4,   329,   171,   295,     6,
     165,   197,    24,   295,   295,   205,   295,     6,   167,   299,
     167,   295,   260,   260,   295,   260,   260,   171,   166,   322,
     227,   171,   166,     6,   207,   295,     6,   207,   242,   290,
     295,     9,   100,   172,   230,   322,   208,     6,   170,   234,
     170,   299,   209,   183,   194,   198,   201,   202,   170,   214,
     168,   337,   168,   307,    98,   229,   170,   270,   307,   299,
     181,   171,     4,    33,   166,   295,   168,   168,   322,   167,
     295,   295,   262,   168,   227,   168,   168,    52,   295,    86,
      87,    88,   189,   247,   248,   249,   250,   251,   167,   247,
     171,   171,   229,   205,   168,   205,   169,   322,   167,   328,
     146,   168,     6,   207,   233,   169,   235,   169,   235,    67,
     238,   239,   240,   241,   295,    77,    78,   212,    63,   202,
     165,   197,   199,   202,   169,   270,   299,   267,   165,   170,
     171,   295,   166,   169,   328,   229,   207,     6,   169,   251,
     168,   165,   197,     5,   101,   102,   185,   252,   256,   257,
     258,   247,   168,   299,   169,    56,   290,   328,   166,   230,
       6,   207,   232,   205,   235,    65,    66,    67,   235,   171,
     165,   197,   171,   165,   197,   165,   197,   167,   170,    24,
     201,   171,   165,   197,   170,    80,    83,    84,    85,    86,
      87,    88,    89,   171,   189,   268,   269,   279,   280,   281,
     282,   307,   267,   171,   168,   299,   205,     6,   259,   249,
     257,     9,   216,     7,     7,   168,    80,   303,   170,   169,
     168,   168,   168,   205,    62,    65,   169,   295,     6,   169,
     236,   171,   146,   240,   295,   146,   210,   307,   205,   202,
     171,   267,   270,   268,   252,    74,   298,   282,   171,   170,
       5,    83,   253,   254,   255,   257,   146,   159,   217,   257,
     257,   259,   167,   259,   267,     6,   207,   231,   232,    60,
     169,   169,   236,   205,   295,   295,     7,    28,   211,   171,
     171,   169,   170,   271,    28,   283,   284,   180,   285,   286,
     302,   267,   254,     7,     7,   300,    28,   300,     9,    28,
     304,   305,   300,   171,   205,   169,   205,   307,   168,    83,
     171,   180,   272,   273,   274,   275,   276,   277,   307,     4,
     299,   165,   169,     4,   165,   169,   180,   171,   254,   254,
     301,   299,   170,    28,   165,   197,   170,    58,   170,   171,
     273,   169,   169,    63,    81,   157,   295,   284,   295,   286,
     299,   295,     4,   205,   305,   168,   205,   169,   205,    24,
     178,   282,   270,   180,   299,   299,   167,   300,   295,   171,
     171,   171,   180,   247,   300,   300,   168,   259,   300,   169,
     170,   278,   205,   300,   171
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   176,   177,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   186,   186,   187,   187,   188,   189,   189,
     190,   190,   190,   190,   191,   191,   191,   191,   191,   192,
     191,   193,   191,   191,   191,   191,   191,   191,   194,   194,
     195,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   208,   207,   207,   207,   207,   207,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   213,   214,   215,
     216,   216,   217,   217,   219,   218,   220,   218,   221,   221,
     222,   222,   224,   223,   226,   225,   227,   227,   228,   228,
     229,   229,   230,   230,   230,   230,   231,   231,   232,   232,
     233,   233,   234,   234,   234,   234,   235,   235,   235,   236,
     236,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   250,   250,   250,
     251,   251,   252,   252,   253,   253,   253,   254,   254,   255,
     255,   256,   256,   256,   257,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   262,   262,   262,   263,   263,
     264,   265,   265,   266,   266,   267,   267,   268,   268,   268,
     269,   269,   269,   270,   270,   271,   271,   271,   272,   272,
     273,   273,   274,   275,   275,   275,   275,   276,   276,   277,
     278,   278,   279,   279,   280,   280,   281,   281,   282,   282,
     282,   282,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   287,   288,   288,   289,   290,   290,   291,   291,   293,
     292,   294,   294,   294,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   296,   296,   297,   298,
     299,   300,   301,   302,   302,   303,   303,   304,   304,   305,
     305,   306,   306,   306,   306,   307,   307,   308,   308,   308,
     309,   309,   310,   310,   310,   311,   311,   312,   312,   312,
     312,   313,   313,   313,   313,   313,   313,   313,   313,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     316,   316,   317,   318,   318,   318,   318,   319,   319,   320,
     320,   320,   321,   321,   321,   321,   321,   321,   322,   322,
     322,   322,   323,   323,   323,   324,   324,   325,   325,   325,
     325,   325,   325,   325,   326,   326,   326,   327,   327,   327,
     328,   329,   329,   330,   330,   331,   331,   331,   331,   331,
     331,   331,   332,   332,   332,   332,   333,   333,   333,   333,
     333,   333,   333,   333,   334,   334,   334,   334,   335,   335,
     335,   335,   335,   335,   335,   336,   336,   337
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     4,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     0,
       6,     0,     5,     3,     4,     3,     4,     3,     1,     1,
       6,     6,     0,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     1,     3,     1,     3,     3,     1,     2,     0,
       1,     1,     2,     4,     3,     1,     1,     5,     7,     9,
       5,     3,     3,     3,     3,     3,     3,     1,     2,     6,
       7,     9,     0,     6,     1,     6,     3,     2,     0,     9,
       1,     3,     0,     1,     0,     4,     1,     3,     1,    13,
       0,     1,     0,     1,     0,    10,     0,     9,     1,     2,
       1,     1,     0,     7,     0,     8,     0,     2,     0,     2,
       0,     2,     1,     2,     4,     3,     1,     4,     1,     4,
       1,     4,     3,     4,     4,     5,     0,     5,     4,     1,
       1,     7,     0,     2,     1,     3,     4,     4,     1,     3,
       1,     4,     5,     6,     1,     3,     6,     7,     3,     6,
       2,     0,     1,     3,     2,     1,     0,     1,     1,     1,
       6,     8,     0,     1,     1,     2,     1,     1,     1,     3,
       3,     1,     2,     1,     1,     1,     1,     3,     3,     0,
       2,     2,     4,     1,     3,     1,     3,     2,     3,     1,
       1,     3,     1,     1,     3,     2,     0,     4,     4,    12,
       1,     2,     3,     1,     3,     1,     2,     3,     1,     2,
       2,     2,     3,     3,     3,     4,     3,     1,     1,     3,
       1,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     3,     1,
       4,     4,     3,     1,     1,     0,     1,     3,     1,     0,
       9,     3,     2,     3,     1,     6,     5,     3,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       5,     4,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     2,     1,     2,     4,     2,
       2,     1,     2,     2,     3,     1,    13,    12,     1,     1,
       0,     0,     0,     0,     1,     0,     5,     3,     1,     1,
       2,     2,     4,     4,     2,     1,     1,     1,     1,     3,
       0,     3,     0,     1,     1,     0,     1,     4,     3,     1,
       3,     1,     1,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       0,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     4,     4,     4,     4,     1,     1,     1,
       3,     3,     1,     4,     2,     3,     3,     1,     4,     4,
       3,     3,     3,     3,     1,     3,     1,     1,     3,     1,
       1,     0,     1,     3,     1,     3,     1,     4,     2,     2,
       6,     4,     2,     2,     1,     2,     1,     4,     3,     3,
       3,     3,     6,     3,     1,     1,     2,     1,     5,     4,
       2,     2,     4,     2,     2,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = ZENDEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == ZENDEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use ZENDerror or ZENDUNDEF. */
#define YYERRCODE ZENDUNDEF


/* Enable debugging if requested.  */
#if ZENDDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !ZENDDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !ZENDDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_T_LNUMBER: /* "integer"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3784 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_DNUMBER: /* "floating-point number"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3790 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_STRING: /* "identifier"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3796 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_NAME_FULLY_QUALIFIED: /* "fully qualified name"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3802 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_NAME_RELATIVE: /* "namespace-relative name"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3808 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_NAME_QUALIFIED: /* "namespaced name"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3814 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_VARIABLE: /* "variable"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3820 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_INLINE_HTML: /* T_INLINE_HTML  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3826 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_ENCAPSED_AND_WHITESPACE: /* "string content"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3832 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_CONSTANT_ENCAPSED_STRING: /* "quoted string"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3838 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_STRING_VARNAME: /* "variable name"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3844 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_T_NUM_STRING: /* "number"  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3850 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3856 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_top_statement_list: /* top_statement_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3862 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_namespace_declaration_name: /* namespace_declaration_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3868 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_namespace_name: /* namespace_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3874 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_legacy_namespace_name: /* legacy_namespace_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3880 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_name: /* name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3886 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attribute_decl: /* attribute_decl  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3892 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attribute_group: /* attribute_group  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3898 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attribute: /* attribute  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3904 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attributes: /* attributes  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3910 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attributed_statement: /* attributed_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3916 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_top_statement: /* top_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3922 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_group_use_declaration: /* group_use_declaration  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3928 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_mixed_group_use_declaration: /* mixed_group_use_declaration  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3934 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inline_use_declarations: /* inline_use_declarations  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3940 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unprefixed_use_declarations: /* unprefixed_use_declarations  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3946 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_use_declarations: /* use_declarations  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3952 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inline_use_declaration: /* inline_use_declaration  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3958 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unprefixed_use_declaration: /* unprefixed_use_declaration  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3964 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_use_declaration: /* use_declaration  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3970 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_const_list: /* const_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3976 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inner_statement_list: /* inner_statement_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3982 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inner_statement: /* inner_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3988 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3994 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_catch_list: /* catch_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4000 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_catch_name_list: /* catch_name_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4006 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_optional_variable: /* optional_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4012 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_finally_statement: /* finally_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4018 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unset_variables: /* unset_variables  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4024 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_unset_variable: /* unset_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4030 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_function_declaration_statement: /* function_declaration_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4036 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_declaration_statement: /* class_declaration_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4042 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_declaration_statement: /* trait_declaration_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4048 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_interface_declaration_statement: /* interface_declaration_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4054 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_extends_from: /* extends_from  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4060 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_interface_extends_list: /* interface_extends_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4066 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_implements_list: /* implements_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4072 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_foreach_variable: /* foreach_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4078 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_for_statement: /* for_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4084 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_foreach_statement: /* foreach_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4090 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_declare_statement: /* declare_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4096 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_switch_case_list: /* switch_case_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4102 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4108 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_match: /* match  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4114 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_match_arm_list: /* match_arm_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4120 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_match_arm_list: /* non_empty_match_arm_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4126 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_match_arm: /* match_arm  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4132 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_match_arm_cond_list: /* match_arm_cond_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4138 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_while_statement: /* while_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4144 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_if_stmt_without_else: /* if_stmt_without_else  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4150 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_if_stmt: /* if_stmt  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4156 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_alt_if_stmt_without_else: /* alt_if_stmt_without_else  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4162 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_alt_if_stmt: /* alt_if_stmt  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4168 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_parameter_list: /* parameter_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4174 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_parameter_list: /* non_empty_parameter_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4180 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attributed_parameter: /* attributed_parameter  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4186 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_parameter: /* parameter  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4192 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_optional_type_without_static: /* optional_type_without_static  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4198 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_type_expr: /* type_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4204 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_type: /* type  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4210 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_union_type: /* union_type  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4216 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_type_expr_without_static: /* type_expr_without_static  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4222 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_type_without_static: /* type_without_static  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4228 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_union_type_without_static: /* union_type_without_static  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4234 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_return_type: /* return_type  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4240 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_argument_list: /* argument_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4246 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_argument_list: /* non_empty_argument_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4252 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_argument: /* argument  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4258 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_global_var_list: /* global_var_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4264 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_global_var: /* global_var  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4270 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_static_var_list: /* static_var_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4276 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_static_var: /* static_var  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4282 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_statement_list: /* class_statement_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4288 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_attributed_class_statement: /* attributed_class_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4294 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_statement: /* class_statement  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4300 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_name_list: /* class_name_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4306 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_adaptations: /* trait_adaptations  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4312 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_adaptation_list: /* trait_adaptation_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4318 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_adaptation: /* trait_adaptation  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4324 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_precedence: /* trait_precedence  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4330 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_alias: /* trait_alias  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4336 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_trait_method_reference: /* trait_method_reference  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4342 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_absolute_trait_method_reference: /* absolute_trait_method_reference  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4348 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_method_body: /* method_body  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4354 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_property_list: /* property_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4360 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_property: /* property  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4366 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_const_list: /* class_const_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4372 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_const_decl: /* class_const_decl  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4378 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_const_decl: /* const_decl  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4384 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_echo_expr_list: /* echo_expr_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4390 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_echo_expr: /* echo_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4396 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_for_exprs: /* for_exprs  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4402 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_for_exprs: /* non_empty_for_exprs  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4408 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_anonymous_class: /* anonymous_class  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4414 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_new_expr: /* new_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4420 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4426 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_inline_function: /* inline_function  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4432 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_backup_doc_comment: /* backup_doc_comment  */
#line 52 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }
#line 4438 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_lexical_vars: /* lexical_vars  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4444 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_lexical_var_list: /* lexical_var_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4450 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_lexical_var: /* lexical_var  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4456 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_function_call: /* function_call  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4462 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_name: /* class_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4468 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_name_reference: /* class_name_reference  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4474 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_exit_expr: /* exit_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4480 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_backticks_expr: /* backticks_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4486 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_ctor_arguments: /* ctor_arguments  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4492 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_dereferencable_scalar: /* dereferencable_scalar  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4498 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_scalar: /* scalar  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4504 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_constant: /* constant  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4510 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_class_constant: /* class_constant  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4516 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_optional_expr: /* optional_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4522 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_variable_class_name: /* variable_class_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4528 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_fully_dereferencable: /* fully_dereferencable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4534 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_array_object_dereferencable: /* array_object_dereferencable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4540 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_callable_expr: /* callable_expr  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4546 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_callable_variable: /* callable_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4552 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_variable: /* variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4558 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_simple_variable: /* simple_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4564 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_static_member: /* static_member  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4570 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_new_variable: /* new_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4576 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_member_name: /* member_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4582 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_property_name: /* property_name  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4588 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_array_pair_list: /* array_pair_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4594 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_possible_array_pair: /* possible_array_pair  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4600 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_non_empty_array_pair_list: /* non_empty_array_pair_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4606 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_array_pair: /* array_pair  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4612 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_encaps_list: /* encaps_list  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4618 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_encaps_var: /* encaps_var  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4624 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_encaps_var_offset: /* encaps_var_offset  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4630 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_internal_functions_in_yacc: /* internal_functions_in_yacc  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4636 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_isset_variables: /* isset_variables  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4642 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

    case YYSYMBOL_isset_variable: /* isset_variable  */
#line 51 "/home/user/work/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4648 "/home/user/work/php-src/Zend/zend_language_parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = ZENDEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == ZENDEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval);
    }

  if (yychar <= END)
    {
      yychar = END;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == ZENDerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = ZENDUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = ZENDEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: top_statement_list  */
#line 284 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { CG(ast) = (yyvsp[0].ast); }
#line 4927 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 79: /* identifier: "identifier"  */
#line 303 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 4933 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 80: /* identifier: semi_reserved  */
#line 304 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               {
			zval zv;
			if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 4943 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 81: /* top_statement_list: top_statement_list top_statement  */
#line 312 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4949 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 82: /* top_statement_list: %empty  */
#line 313 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4955 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 83: /* namespace_declaration_name: identifier  */
#line 318 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4961 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 84: /* namespace_declaration_name: "namespaced name"  */
#line 319 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4967 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 85: /* namespace_name: "identifier"  */
#line 324 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4973 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 86: /* namespace_name: "namespaced name"  */
#line 325 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4979 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 87: /* legacy_namespace_name: namespace_name  */
#line 330 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4985 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 88: /* legacy_namespace_name: "fully qualified name"  */
#line 331 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4991 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 89: /* name: "identifier"  */
#line 335 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4997 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 90: /* name: "namespaced name"  */
#line 336 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 5003 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 91: /* name: "fully qualified name"  */
#line 337 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
#line 5009 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 92: /* name: "namespace-relative name"  */
#line 338 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
#line 5015 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 93: /* attribute_decl: class_name  */
#line 343 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[0].ast), NULL); }
#line 5021 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 94: /* attribute_decl: class_name argument_list  */
#line 345 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5027 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 95: /* attribute_group: attribute_decl  */
#line 350 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_GROUP, (yyvsp[0].ast)); }
#line 5033 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 96: /* attribute_group: attribute_group ',' attribute_decl  */
#line 352 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5039 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 97: /* attribute: "'#['" attribute_group possible_comma ']'  */
#line 356 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-2].ast); }
#line 5045 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 98: /* attributes: attribute  */
#line 360 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_LIST, (yyvsp[0].ast)); }
#line 5051 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 99: /* attributes: attributes attribute  */
#line 361 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5057 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 100: /* attributed_statement: function_declaration_statement  */
#line 365 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5063 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 101: /* attributed_statement: class_declaration_statement  */
#line 366 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5069 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 102: /* attributed_statement: trait_declaration_statement  */
#line 367 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5075 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 103: /* attributed_statement: interface_declaration_statement  */
#line 368 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5081 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 104: /* top_statement: statement  */
#line 372 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5087 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 105: /* top_statement: attributed_statement  */
#line 373 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5093 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 106: /* top_statement: attributes attributed_statement  */
#line 374 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5099 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 107: /* top_statement: "'__halt_compiler'" '(' ')' ';'  */
#line 376 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
#line 5107 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 108: /* top_statement: "'namespace'" namespace_declaration_name ';'  */
#line 380 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }
#line 5114 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 109: /* $@1: %empty  */
#line 382 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                       { RESET_DOC_COMMENT(); }
#line 5120 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 110: /* top_statement: "'namespace'" namespace_declaration_name $@1 '{' top_statement_list '}'  */
#line 384 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 5126 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 111: /* $@2: %empty  */
#line 385 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { RESET_DOC_COMMENT(); }
#line 5132 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 112: /* top_statement: "'namespace'" $@2 '{' top_statement_list '}'  */
#line 387 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }
#line 5138 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 113: /* top_statement: "'use'" mixed_group_use_declaration ';'  */
#line 388 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5144 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 114: /* top_statement: "'use'" use_type group_use_declaration ';'  */
#line 389 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 5150 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 115: /* top_statement: "'use'" use_declarations ';'  */
#line 390 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 5156 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 116: /* top_statement: "'use'" use_type use_declarations ';'  */
#line 391 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 5162 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 117: /* top_statement: "'const'" const_list ';'  */
#line 392 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5168 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 118: /* use_type: "'function'"  */
#line 396 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_SYMBOL_FUNCTION; }
#line 5174 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 119: /* use_type: "'const'"  */
#line 397 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_SYMBOL_CONST; }
#line 5180 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 120: /* group_use_declaration: legacy_namespace_name "'\\'" '{' unprefixed_use_declarations possible_comma '}'  */
#line 402 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 5186 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 121: /* mixed_group_use_declaration: legacy_namespace_name "'\\'" '{' inline_use_declarations possible_comma '}'  */
#line 407 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}
#line 5192 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 124: /* inline_use_declarations: inline_use_declarations ',' inline_use_declaration  */
#line 417 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5198 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 125: /* inline_use_declarations: inline_use_declaration  */
#line 419 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5204 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 126: /* unprefixed_use_declarations: unprefixed_use_declarations ',' unprefixed_use_declaration  */
#line 424 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5210 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 127: /* unprefixed_use_declarations: unprefixed_use_declaration  */
#line 426 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5216 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 128: /* use_declarations: use_declarations ',' use_declaration  */
#line 431 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5222 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 129: /* use_declarations: use_declaration  */
#line 433 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5228 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 130: /* inline_use_declaration: unprefixed_use_declaration  */
#line 437 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 5234 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 131: /* inline_use_declaration: use_type unprefixed_use_declaration  */
#line 438 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }
#line 5240 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 132: /* unprefixed_use_declaration: namespace_name  */
#line 443 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 5246 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 133: /* unprefixed_use_declaration: namespace_name "'as'" "identifier"  */
#line 445 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5252 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 134: /* use_declaration: legacy_namespace_name  */
#line 450 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 5258 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 135: /* use_declaration: legacy_namespace_name "'as'" "identifier"  */
#line 452 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5264 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 136: /* const_list: const_list ',' const_decl  */
#line 456 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5270 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 137: /* const_list: const_decl  */
#line 457 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }
#line 5276 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 138: /* inner_statement_list: inner_statement_list inner_statement  */
#line 462 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5282 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 139: /* inner_statement_list: %empty  */
#line 464 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 5288 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 140: /* inner_statement: statement  */
#line 469 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5294 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 141: /* inner_statement: attributed_statement  */
#line 470 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5300 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 142: /* inner_statement: attributes attributed_statement  */
#line 471 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5306 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 143: /* inner_statement: "'__halt_compiler'" '(' ')' ';'  */
#line 473 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }
#line 5313 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 144: /* statement: '{' inner_statement_list '}'  */
#line 479 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = (yyvsp[-1].ast); }
#line 5319 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 145: /* statement: if_stmt  */
#line 480 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5325 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 146: /* statement: alt_if_stmt  */
#line 481 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 5331 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 147: /* statement: "'while'" '(' expr ')' while_statement  */
#line 483 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5337 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 148: /* statement: "'do'" statement "'while'" '(' expr ')' ';'  */
#line 485 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 5343 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 149: /* statement: "'for'" '(' for_exprs ';' for_exprs ';' for_exprs ')' for_statement  */
#line 487 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5349 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 150: /* statement: "'switch'" '(' expr ')' switch_case_list  */
#line 489 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5355 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 151: /* statement: "'break'" optional_expr ';'  */
#line 490 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }
#line 5361 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 152: /* statement: "'continue'" optional_expr ';'  */
#line 491 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }
#line 5367 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 153: /* statement: "'return'" optional_expr ';'  */
#line 492 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }
#line 5373 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 154: /* statement: "'global'" global_var_list ';'  */
#line 493 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5379 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 155: /* statement: "'static'" static_var_list ';'  */
#line 494 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5385 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 156: /* statement: "'echo'" echo_expr_list ';'  */
#line 495 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5391 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 157: /* statement: T_INLINE_HTML  */
#line 496 "/home/user/work/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 5397 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 158: /* statement: expr ';'  */
#line 497 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[-1].ast); }
#line 5403 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 159: /* statement: "'unset'" '(' unset_variables possible_comma ')' ';'  */
#line 498 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                   { (yyval.ast) = (yyvsp[-3].ast); }
#line 5409 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 160: /* statement: "'foreach'" '(' expr "'as'" foreach_variable ')' foreach_statement  */
#line 500 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }
#line 5415 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 161: /* statement: "'foreach'" '(' expr "'as'" foreach_variable "'=>'" foreach_variable ')' foreach_statement  */
#line 503 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }
#line 5421 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 162: /* $@3: %empty  */
#line 505 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }
#line 5427 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 163: /* statement: "'declare'" '(' const_list ')' $@3 declare_statement  */
#line 507 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5433 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 164: /* statement: ';'  */
#line 508 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                              { (yyval.ast) = NULL; }
#line 5439 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 165: /* statement: "'try'" '{' inner_statement_list '}' catch_list finally_statement  */
#line 510 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5445 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 166: /* statement: "'goto'" "identifier" ';'  */
#line 511 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }
#line 5451 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 167: /* statement: "identifier" ':'  */
#line 512 "/home/user/work/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }
#line 5457 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 168: /* catch_list: %empty  */
#line 517 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
#line 5463 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 169: /* catch_list: catch_list "'catch'" '(' catch_name_list optional_variable ')' '{' inner_statement_list '}'  */
#line 519 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }
#line 5469 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 170: /* catch_name_list: class_name  */
#line 523 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 5475 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 171: /* catch_name_list: catch_name_list '|' class_name  */
#line 524 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5481 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 172: /* optional_variable: %empty  */
#line 528 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 5487 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 173: /* optional_variable: "variable"  */
#line 529 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = (yyvsp[0].ast); }
#line 5493 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 174: /* finally_statement: %empty  */
#line 533 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 5499 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 175: /* finally_statement: "'finally'" '{' inner_statement_list '}'  */
#line 534 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                       { (yyval.ast) = (yyvsp[-1].ast); }
#line 5505 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 176: /* unset_variables: unset_variable  */
#line 538 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5511 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 177: /* unset_variables: unset_variables ',' unset_variable  */
#line 539 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                   { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5517 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 178: /* unset_variable: variable  */
#line 543 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }
#line 5523 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 179: /* function_declaration_statement: function returns_ref "identifier" backup_doc_comment '(' parameter_list ')' return_type backup_fn_flags '{' inner_statement_list '}' backup_fn_flags  */
#line 549 "/home/user/work/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 5530 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 180: /* is_reference: %empty  */
#line 554 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = 0; }
#line 5536 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 181: /* is_reference: '&'  */
#line 555 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_PARAM_REF; }
#line 5542 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 182: /* is_variadic: %empty  */
#line 559 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.num) = 0; }
#line 5548 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 183: /* is_variadic: "'...'"  */
#line 560 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = ZEND_PARAM_VARIADIC; }
#line 5554 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 184: /* @4: %empty  */
#line 564 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = CG(zend_lineno); }
#line 5560 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 185: /* class_declaration_statement: class_modifiers "'class'" @4 "identifier" extends_from implements_list backup_doc_comment '{' class_statement_list '}'  */
#line 566 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5566 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 186: /* @5: %empty  */
#line 567 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = CG(zend_lineno); }
#line 5572 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 187: /* class_declaration_statement: "'class'" @5 "identifier" extends_from implements_list backup_doc_comment '{' class_statement_list '}'  */
#line 569 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5578 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 188: /* class_modifiers: class_modifier  */
#line 573 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.num) = (yyvsp[0].num); }
#line 5584 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 189: /* class_modifiers: class_modifiers class_modifier  */
#line 575 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 5590 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 190: /* class_modifier: "'abstract'"  */
#line 579 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
#line 5596 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 191: /* class_modifier: "'final'"  */
#line 580 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_FINAL; }
#line 5602 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 192: /* @6: %empty  */
#line 584 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = CG(zend_lineno); }
#line 5608 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 193: /* trait_declaration_statement: "'trait'" @6 "identifier" backup_doc_comment '{' class_statement_list '}'  */
#line 586 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL, NULL); }
#line 5614 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 194: /* @7: %empty  */
#line 590 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = CG(zend_lineno); }
#line 5620 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 195: /* interface_declaration_statement: "'interface'" @7 "identifier" interface_extends_list backup_doc_comment '{' class_statement_list '}'  */
#line 592 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5626 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 196: /* extends_from: %empty  */
#line 596 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 5632 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 197: /* extends_from: "'extends'" class_name  */
#line 597 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5638 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 198: /* interface_extends_list: %empty  */
#line 601 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 5644 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 199: /* interface_extends_list: "'extends'" class_name_list  */
#line 602 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5650 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 200: /* implements_list: %empty  */
#line 606 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 5656 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 201: /* implements_list: "'implements'" class_name_list  */
#line 607 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5662 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 202: /* foreach_variable: variable  */
#line 611 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5668 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 203: /* foreach_variable: '&' variable  */
#line 612 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }
#line 5674 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 204: /* foreach_variable: "'list'" '(' array_pair_list ')'  */
#line 613 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }
#line 5680 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 205: /* foreach_variable: '[' array_pair_list ']'  */
#line 614 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 5686 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 206: /* for_statement: statement  */
#line 618 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5692 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 207: /* for_statement: ':' inner_statement_list "'endfor'" ';'  */
#line 619 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = (yyvsp[-2].ast); }
#line 5698 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 208: /* foreach_statement: statement  */
#line 623 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5704 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 209: /* foreach_statement: ':' inner_statement_list "'endforeach'" ';'  */
#line 624 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-2].ast); }
#line 5710 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 210: /* declare_statement: statement  */
#line 628 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5716 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 211: /* declare_statement: ':' inner_statement_list "'enddeclare'" ';'  */
#line 629 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-2].ast); }
#line 5722 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 212: /* switch_case_list: '{' case_list '}'  */
#line 633 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5728 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 213: /* switch_case_list: '{' ';' case_list '}'  */
#line 634 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5734 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 214: /* switch_case_list: ':' case_list "'endswitch'" ';'  */
#line 635 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5740 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 215: /* switch_case_list: ':' ';' case_list "'endswitch'" ';'  */
#line 636 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5746 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 216: /* case_list: %empty  */
#line 640 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
#line 5752 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 217: /* case_list: case_list "'case'" expr case_separator inner_statement_list  */
#line 642 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5758 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 218: /* case_list: case_list "'default'" case_separator inner_statement_list  */
#line 644 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }
#line 5764 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 221: /* match: "'match'" '(' expr ')' '{' match_arm_list '}'  */
#line 655 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 5770 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 222: /* match_arm_list: %empty  */
#line 659 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_MATCH_ARM_LIST); }
#line 5776 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 223: /* match_arm_list: non_empty_match_arm_list possible_comma  */
#line 660 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5782 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 224: /* non_empty_match_arm_list: match_arm  */
#line 664 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_MATCH_ARM_LIST, (yyvsp[0].ast)); }
#line 5788 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 225: /* non_empty_match_arm_list: non_empty_match_arm_list ',' match_arm  */
#line 665 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                       { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5794 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 226: /* match_arm: match_arm_cond_list possible_comma "'=>'" expr  */
#line 670 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5800 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 227: /* match_arm: "'default'" possible_comma "'=>'" expr  */
#line 672 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, NULL, (yyvsp[0].ast)); }
#line 5806 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 228: /* match_arm_cond_list: expr  */
#line 676 "/home/user/work/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 5812 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 229: /* match_arm_cond_list: match_arm_cond_list ',' expr  */
#line 677 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5818 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 230: /* while_statement: statement  */
#line 682 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5824 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 231: /* while_statement: ':' inner_statement_list "'endwhile'" ';'  */
#line 683 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5830 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 232: /* if_stmt_without_else: "'if'" '(' expr ')' statement  */
#line 689 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5837 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 233: /* if_stmt_without_else: if_stmt_without_else "'elseif'" '(' expr ')' statement  */
#line 692 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5844 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 234: /* if_stmt: if_stmt_without_else  */
#line 697 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5850 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 235: /* if_stmt: if_stmt_without_else "'else'" statement  */
#line 699 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }
#line 5856 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 236: /* alt_if_stmt_without_else: "'if'" '(' expr ')' ':' inner_statement_list  */
#line 704 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5863 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 237: /* alt_if_stmt_without_else: alt_if_stmt_without_else "'elseif'" '(' expr ')' ':' inner_statement_list  */
#line 707 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5870 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 238: /* alt_if_stmt: alt_if_stmt_without_else "'endif'" ';'  */
#line 712 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                     { (yyval.ast) = (yyvsp[-2].ast); }
#line 5876 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 239: /* alt_if_stmt: alt_if_stmt_without_else "'else'" ':' inner_statement_list "'endif'" ';'  */
#line 714 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }
#line 5883 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 240: /* parameter_list: non_empty_parameter_list possible_comma  */
#line 719 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5889 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 241: /* parameter_list: %empty  */
#line 720 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
#line 5895 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 242: /* non_empty_parameter_list: attributed_parameter  */
#line 726 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }
#line 5901 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 243: /* non_empty_parameter_list: non_empty_parameter_list ',' attributed_parameter  */
#line 728 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5907 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 244: /* attributed_parameter: attributes parameter  */
#line 732 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5913 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 245: /* attributed_parameter: parameter  */
#line 733 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5919 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 246: /* optional_visibility_modifier: %empty  */
#line 737 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = 0; }
#line 5925 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 247: /* optional_visibility_modifier: "'public'"  */
#line 738 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5931 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 248: /* optional_visibility_modifier: "'protected'"  */
#line 739 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 5937 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 249: /* optional_visibility_modifier: "'private'"  */
#line 740 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 5943 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 250: /* parameter: optional_visibility_modifier optional_type_without_static is_reference is_variadic "variable" backup_doc_comment  */
#line 746 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-5].num) | (yyvsp[-3].num) | (yyvsp[-2].num), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL,
					NULL, (yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL); }
#line 5950 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 251: /* parameter: optional_visibility_modifier optional_type_without_static is_reference is_variadic "variable" backup_doc_comment '=' expr  */
#line 750 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-7].num) | (yyvsp[-5].num) | (yyvsp[-4].num), (yyvsp[-6].ast), (yyvsp[-3].ast), (yyvsp[0].ast),
					NULL, (yyvsp[-2].str) ? zend_ast_create_zval_from_str((yyvsp[-2].str)) : NULL); }
#line 5957 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 252: /* optional_type_without_static: %empty  */
#line 756 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 5963 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 253: /* optional_type_without_static: type_expr_without_static  */
#line 757 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5969 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 254: /* type_expr: type  */
#line 761 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5975 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 255: /* type_expr: '?' type  */
#line 762 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 5981 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 256: /* type_expr: union_type  */
#line 763 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5987 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 257: /* type: type_without_static  */
#line 767 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5993 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 258: /* type: "'static'"  */
#line 768 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_STATIC); }
#line 5999 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 259: /* union_type: type '|' type  */
#line 772 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6005 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 260: /* union_type: union_type '|' type  */
#line 773 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6011 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 261: /* type_expr_without_static: type_without_static  */
#line 780 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6017 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 262: /* type_expr_without_static: '?' type_without_static  */
#line 781 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 6023 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 263: /* type_expr_without_static: union_type_without_static  */
#line 782 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6029 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 264: /* type_without_static: "'array'"  */
#line 786 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
#line 6035 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 265: /* type_without_static: "'callable'"  */
#line 787 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
#line 6041 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 266: /* type_without_static: name  */
#line 788 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6047 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 267: /* union_type_without_static: type_without_static '|' type_without_static  */
#line 793 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6053 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 268: /* union_type_without_static: union_type_without_static '|' type_without_static  */
#line 795 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6059 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 269: /* return_type: %empty  */
#line 799 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 6065 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 270: /* return_type: ':' type_expr  */
#line 800 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6071 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 271: /* argument_list: '(' ')'  */
#line 804 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 6077 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 272: /* argument_list: '(' non_empty_argument_list possible_comma ')'  */
#line 805 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                               { (yyval.ast) = (yyvsp[-2].ast); }
#line 6083 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 273: /* non_empty_argument_list: argument  */
#line 810 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }
#line 6089 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 274: /* non_empty_argument_list: non_empty_argument_list ',' argument  */
#line 812 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6095 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 275: /* argument: expr  */
#line 816 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6101 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 276: /* argument: identifier ':' expr  */
#line 818 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMED_ARG, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6107 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 277: /* argument: "'...'" expr  */
#line 819 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 6113 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 278: /* global_var_list: global_var_list ',' global_var  */
#line 823 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6119 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 279: /* global_var_list: global_var  */
#line 824 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6125 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 280: /* global_var: simple_variable  */
#line 829 "/home/user/work/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }
#line 6131 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 281: /* static_var_list: static_var_list ',' static_var  */
#line 834 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6137 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 282: /* static_var_list: static_var  */
#line 835 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6143 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 283: /* static_var: "variable"  */
#line 839 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }
#line 6149 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 284: /* static_var: "variable" '=' expr  */
#line 840 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6155 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 285: /* class_statement_list: class_statement_list class_statement  */
#line 845 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6161 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 286: /* class_statement_list: %empty  */
#line 847 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 6167 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 287: /* attributed_class_statement: variable_modifiers optional_type_without_static property_list ';'  */
#line 853 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_GROUP, (yyvsp[-2].ast), (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }
#line 6174 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 288: /* attributed_class_statement: method_modifiers "'const'" class_const_list ';'  */
#line 856 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST_GROUP, (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }
#line 6181 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 289: /* attributed_class_statement: method_modifiers function returns_ref identifier backup_doc_comment '(' parameter_list ')' return_type backup_fn_flags method_body backup_fn_flags  */
#line 860 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast), NULL); CG(extra_fn_flags) = (yyvsp[-2].num); }
#line 6188 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 290: /* class_statement: attributed_class_statement  */
#line 865 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); }
#line 6194 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 291: /* class_statement: attributes attributed_class_statement  */
#line 866 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 6200 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 292: /* class_statement: "'use'" class_name_list trait_adaptations  */
#line 868 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6206 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 293: /* class_name_list: class_name  */
#line 872 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 6212 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 294: /* class_name_list: class_name_list ',' class_name  */
#line 873 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6218 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 295: /* trait_adaptations: ';'  */
#line 877 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = NULL; }
#line 6224 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 296: /* trait_adaptations: '{' '}'  */
#line 878 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = NULL; }
#line 6230 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 297: /* trait_adaptations: '{' trait_adaptation_list '}'  */
#line 879 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6236 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 298: /* trait_adaptation_list: trait_adaptation  */
#line 884 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }
#line 6242 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 299: /* trait_adaptation_list: trait_adaptation_list trait_adaptation  */
#line 886 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6248 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 300: /* trait_adaptation: trait_precedence ';'  */
#line 890 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 6254 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 301: /* trait_adaptation: trait_alias ';'  */
#line 891 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6260 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 302: /* trait_precedence: absolute_trait_method_reference "'insteadof'" class_name_list  */
#line 896 "/home/user/work/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6266 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 303: /* trait_alias: trait_method_reference "'as'" "identifier"  */
#line 901 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6272 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 304: /* trait_alias: trait_method_reference "'as'" reserved_non_modifiers  */
#line 903 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { zval zv;
			  if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			  (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }
#line 6280 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 305: /* trait_alias: trait_method_reference "'as'" member_modifier identifier  */
#line 907 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6286 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 306: /* trait_alias: trait_method_reference "'as'" member_modifier  */
#line 909 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }
#line 6292 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 307: /* trait_method_reference: identifier  */
#line 914 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }
#line 6298 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 308: /* trait_method_reference: absolute_trait_method_reference  */
#line 915 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6304 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 309: /* absolute_trait_method_reference: class_name "'::'" identifier  */
#line 920 "/home/user/work/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6310 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 310: /* method_body: ';'  */
#line 924 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 6316 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 311: /* method_body: '{' inner_statement_list '}'  */
#line 925 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6322 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 312: /* variable_modifiers: non_empty_member_modifiers  */
#line 929 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = (yyvsp[0].num); }
#line 6328 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 313: /* variable_modifiers: "'var'"  */
#line 930 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6334 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 314: /* method_modifiers: %empty  */
#line 934 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6340 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 315: /* method_modifiers: non_empty_member_modifiers  */
#line 936 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
#line 6346 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 316: /* non_empty_member_modifiers: member_modifier  */
#line 940 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.num) = (yyvsp[0].num); }
#line 6352 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 317: /* non_empty_member_modifiers: non_empty_member_modifiers member_modifier  */
#line 942 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 6358 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 318: /* member_modifier: "'public'"  */
#line 946 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6364 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 319: /* member_modifier: "'protected'"  */
#line 947 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 6370 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 320: /* member_modifier: "'private'"  */
#line 948 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 6376 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 321: /* member_modifier: "'static'"  */
#line 949 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_STATIC; }
#line 6382 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 322: /* member_modifier: "'abstract'"  */
#line 950 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_ABSTRACT; }
#line 6388 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 323: /* member_modifier: "'final'"  */
#line 951 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_FINAL; }
#line 6394 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 324: /* property_list: property_list ',' property  */
#line 955 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6400 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 325: /* property_list: property  */
#line 956 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }
#line 6406 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 326: /* property: "variable" backup_doc_comment  */
#line 961 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6412 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 327: /* property: "variable" '=' expr backup_doc_comment  */
#line 963 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6418 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 328: /* class_const_list: class_const_list ',' class_const_decl  */
#line 967 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6424 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 329: /* class_const_list: class_const_decl  */
#line 968 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                 { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }
#line 6430 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 330: /* class_const_decl: identifier '=' expr backup_doc_comment  */
#line 972 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6436 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 331: /* const_decl: "identifier" '=' expr backup_doc_comment  */
#line 976 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6442 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 332: /* echo_expr_list: echo_expr_list ',' echo_expr  */
#line 980 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6448 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 333: /* echo_expr_list: echo_expr  */
#line 981 "/home/user/work/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6454 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 334: /* echo_expr: expr  */
#line 984 "/home/user/work/php-src/Zend/zend_language_parser.y"
             { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 6460 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 335: /* for_exprs: %empty  */
#line 988 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = NULL; }
#line 6466 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 336: /* for_exprs: non_empty_for_exprs  */
#line 989 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6472 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 337: /* non_empty_for_exprs: non_empty_for_exprs ',' expr  */
#line 993 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6478 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 338: /* non_empty_for_exprs: expr  */
#line 994 "/home/user/work/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 6484 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 339: /* @8: %empty  */
#line 998 "/home/user/work/php-src/Zend/zend_language_parser.y"
                { (yyval.num) = CG(zend_lineno); }
#line 6490 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 340: /* anonymous_class: "'class'" @8 ctor_arguments extends_from implements_list backup_doc_comment '{' class_statement_list '}'  */
#line 999 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                                             {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}
#line 6501 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 341: /* new_expr: "'new'" class_name_reference ctor_arguments  */
#line 1009 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6507 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 342: /* new_expr: "'new'" anonymous_class  */
#line 1011 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6513 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 343: /* new_expr: "'new'" attributes anonymous_class  */
#line 1013 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { zend_ast_with_attributes((yyvsp[0].ast)->child[0], (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 6519 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 344: /* expr: variable  */
#line 1018 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6525 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 345: /* expr: "'list'" '(' array_pair_list ')' '=' expr  */
#line 1020 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6531 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 346: /* expr: '[' array_pair_list ']' '=' expr  */
#line 1022 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6537 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 347: /* expr: variable '=' expr  */
#line 1024 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6543 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 348: /* expr: variable '=' '&' variable  */
#line 1026 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6549 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 349: /* expr: "'clone'" expr  */
#line 1027 "/home/user/work/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }
#line 6555 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 350: /* expr: variable "'+='" expr  */
#line 1029 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6561 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 351: /* expr: variable "'-='" expr  */
#line 1031 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6567 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 352: /* expr: variable "'*='" expr  */
#line 1033 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6573 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 353: /* expr: variable "'**='" expr  */
#line 1035 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6579 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 354: /* expr: variable "'/='" expr  */
#line 1037 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6585 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 355: /* expr: variable "'.='" expr  */
#line 1039 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6591 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 356: /* expr: variable "'%='" expr  */
#line 1041 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6597 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 357: /* expr: variable "'&='" expr  */
#line 1043 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6603 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 358: /* expr: variable "'|='" expr  */
#line 1045 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6609 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 359: /* expr: variable "'^='" expr  */
#line 1047 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6615 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 360: /* expr: variable "'<<='" expr  */
#line 1049 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6621 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 361: /* expr: variable "'>>='" expr  */
#line 1051 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6627 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 362: /* expr: variable "'??='" expr  */
#line 1053 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6633 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 363: /* expr: variable "'++'"  */
#line 1054 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }
#line 6639 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 364: /* expr: "'++'" variable  */
#line 1055 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }
#line 6645 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 365: /* expr: variable "'--'"  */
#line 1056 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }
#line 6651 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 366: /* expr: "'--'" variable  */
#line 1057 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }
#line 6657 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 367: /* expr: expr "'||'" expr  */
#line 1059 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6663 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 368: /* expr: expr "'&&'" expr  */
#line 1061 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6669 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 369: /* expr: expr "'or'" expr  */
#line 1063 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6675 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 370: /* expr: expr "'and'" expr  */
#line 1065 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6681 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 371: /* expr: expr "'xor'" expr  */
#line 1067 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6687 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 372: /* expr: expr '|' expr  */
#line 1068 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6693 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 373: /* expr: expr '&' expr  */
#line 1069 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6699 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 374: /* expr: expr '^' expr  */
#line 1070 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6705 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 375: /* expr: expr '.' expr  */
#line 1071 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6711 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 376: /* expr: expr '+' expr  */
#line 1072 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6717 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 377: /* expr: expr '-' expr  */
#line 1073 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6723 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 378: /* expr: expr '*' expr  */
#line 1074 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6729 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 379: /* expr: expr "'**'" expr  */
#line 1075 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6735 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 380: /* expr: expr '/' expr  */
#line 1076 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6741 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 381: /* expr: expr '%' expr  */
#line 1077 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6747 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 382: /* expr: expr "'<<'" expr  */
#line 1078 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6753 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 383: /* expr: expr "'>>'" expr  */
#line 1079 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6759 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 384: /* expr: '+' expr  */
#line 1080 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                   { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }
#line 6765 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 385: /* expr: '-' expr  */
#line 1081 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                   { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }
#line 6771 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 386: /* expr: '!' expr  */
#line 1082 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }
#line 6777 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 387: /* expr: '~' expr  */
#line 1083 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }
#line 6783 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 388: /* expr: expr "'==='" expr  */
#line 1085 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6789 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 389: /* expr: expr "'!=='" expr  */
#line 1087 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6795 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 390: /* expr: expr "'=='" expr  */
#line 1089 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6801 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 391: /* expr: expr "'!='" expr  */
#line 1091 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6807 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 392: /* expr: expr '<' expr  */
#line 1093 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6813 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 393: /* expr: expr "'<='" expr  */
#line 1095 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6819 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 394: /* expr: expr '>' expr  */
#line 1097 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6825 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 395: /* expr: expr "'>='" expr  */
#line 1099 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6831 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 396: /* expr: expr "'<=>'" expr  */
#line 1101 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6837 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 397: /* expr: expr "'instanceof'" class_name_reference  */
#line 1103 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6843 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 398: /* expr: '(' expr ')'  */
#line 1104 "/home/user/work/php-src/Zend/zend_language_parser.y"
                             {
			(yyval.ast) = (yyvsp[-1].ast);
			if ((yyval.ast)->kind == ZEND_AST_CONDITIONAL) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONDITIONAL;
		}
#line 6852 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 399: /* expr: new_expr  */
#line 1108 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6858 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 400: /* expr: expr '?' expr ':' expr  */
#line 1110 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6864 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 401: /* expr: expr '?' ':' expr  */
#line 1112 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }
#line 6870 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 402: /* expr: expr "'??'" expr  */
#line 1114 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6876 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 403: /* expr: internal_functions_in_yacc  */
#line 1115 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); }
#line 6882 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 404: /* expr: "'(int)'" expr  */
#line 1116 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }
#line 6888 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 405: /* expr: "'(double)'" expr  */
#line 1117 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }
#line 6894 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 406: /* expr: "'(string)'" expr  */
#line 1118 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }
#line 6900 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 407: /* expr: "'(array)'" expr  */
#line 1119 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }
#line 6906 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 408: /* expr: "'(object)'" expr  */
#line 1120 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }
#line 6912 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 409: /* expr: "'(bool)'" expr  */
#line 1121 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }
#line 6918 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 410: /* expr: "'(unset)'" expr  */
#line 1122 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }
#line 6924 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 411: /* expr: "'exit'" exit_expr  */
#line 1123 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }
#line 6930 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 412: /* expr: '@' expr  */
#line 1124 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }
#line 6936 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 413: /* expr: scalar  */
#line 1125 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6942 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 414: /* expr: '`' backticks_expr '`'  */
#line 1126 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                       { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }
#line 6948 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 415: /* expr: "'print'" expr  */
#line 1127 "/home/user/work/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }
#line 6954 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 416: /* expr: "'yield'"  */
#line 1128 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6960 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 417: /* expr: "'yield'" expr  */
#line 1129 "/home/user/work/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6966 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 418: /* expr: "'yield'" expr "'=>'" expr  */
#line 1130 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6972 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 419: /* expr: "'yield from'" expr  */
#line 1131 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                  { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6978 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 420: /* expr: "'throw'" expr  */
#line 1132 "/home/user/work/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[0].ast)); }
#line 6984 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 421: /* expr: inline_function  */
#line 1133 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6990 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 422: /* expr: attributes inline_function  */
#line 1134 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 6996 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 423: /* expr: "'static'" inline_function  */
#line 1135 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                         { (yyval.ast) = (yyvsp[0].ast); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }
#line 7002 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 424: /* expr: attributes "'static'" inline_function  */
#line 1137 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-2].ast)); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }
#line 7008 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 425: /* expr: match  */
#line 1138 "/home/user/work/php-src/Zend/zend_language_parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 7014 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 426: /* inline_function: function returns_ref backup_doc_comment '(' parameter_list ')' lexical_vars return_type backup_fn_flags '{' inner_statement_list '}' backup_fn_flags  */
#line 1145 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
				  (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 7022 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 427: /* inline_function: fn returns_ref backup_doc_comment '(' parameter_list ')' return_type "'=>'" backup_fn_flags backup_lex_pos expr backup_fn_flags  */
#line 1150 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_ARROW_FUNC, (yyvsp[-10].num) | (yyvsp[0].num), (yyvsp[-11].num), (yyvsp[-9].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0), (yyvsp[-7].ast), NULL,
				  zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)), (yyvsp[-5].ast), NULL);
				  ((zend_ast_decl *) (yyval.ast))->lex_pos = (yyvsp[-2].ptr);
				  CG(extra_fn_flags) = (yyvsp[-3].num); }
#line 7032 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 428: /* fn: "'fn'"  */
#line 1158 "/home/user/work/php-src/Zend/zend_language_parser.y"
             { (yyval.num) = CG(zend_lineno); }
#line 7038 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 429: /* function: "'function'"  */
#line 1162 "/home/user/work/php-src/Zend/zend_language_parser.y"
                   { (yyval.num) = CG(zend_lineno); }
#line 7044 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 430: /* backup_doc_comment: %empty  */
#line 1166 "/home/user/work/php-src/Zend/zend_language_parser.y"
               { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
#line 7050 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 431: /* backup_fn_flags: %empty  */
#line 1170 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                         { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }
#line 7056 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 432: /* backup_lex_pos: %empty  */
#line 1174 "/home/user/work/php-src/Zend/zend_language_parser.y"
               { (yyval.ptr) = LANG_SCNG(yy_text); }
#line 7062 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 433: /* returns_ref: %empty  */
#line 1178 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = 0; }
#line 7068 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 434: /* returns_ref: '&'  */
#line 1179 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
#line 7074 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 435: /* lexical_vars: %empty  */
#line 1183 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 7080 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 436: /* lexical_vars: "'use'" '(' lexical_var_list possible_comma ')'  */
#line 1184 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                              { (yyval.ast) = (yyvsp[-2].ast); }
#line 7086 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 437: /* lexical_var_list: lexical_var_list ',' lexical_var  */
#line 1188 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7092 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 438: /* lexical_var_list: lexical_var  */
#line 1189 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }
#line 7098 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 439: /* lexical_var: "variable"  */
#line 1193 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7104 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 440: /* lexical_var: '&' "variable"  */
#line 1194 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }
#line 7110 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 441: /* function_call: name argument_list  */
#line 1199 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7116 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 442: /* function_call: class_name "'::'" member_name argument_list  */
#line 1201 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7122 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 443: /* function_call: variable_class_name "'::'" member_name argument_list  */
#line 1203 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7128 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 444: /* function_call: callable_expr argument_list  */
#line 1205 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7134 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 445: /* class_name: "'static'"  */
#line 1210 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
#line 7141 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 446: /* class_name: name  */
#line 1212 "/home/user/work/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 7147 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 447: /* class_name_reference: class_name  */
#line 1216 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7153 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 448: /* class_name_reference: new_variable  */
#line 1217 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7159 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 449: /* class_name_reference: '(' expr ')'  */
#line 1218 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7165 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 450: /* exit_expr: %empty  */
#line 1222 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 7171 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 451: /* exit_expr: '(' optional_expr ')'  */
#line 1223 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 7177 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 452: /* backticks_expr: %empty  */
#line 1228 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 7183 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 453: /* backticks_expr: "string content"  */
#line 1229 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = (yyvsp[0].ast); }
#line 7189 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 454: /* backticks_expr: encaps_list  */
#line 1230 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 7195 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 455: /* ctor_arguments: %empty  */
#line 1235 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 7201 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 456: /* ctor_arguments: argument_list  */
#line 1236 "/home/user/work/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 7207 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 457: /* dereferencable_scalar: "'array'" '(' array_pair_list ')'  */
#line 1241 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }
#line 7213 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 458: /* dereferencable_scalar: '[' array_pair_list ']'  */
#line 1242 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 7219 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 459: /* dereferencable_scalar: "quoted string"  */
#line 1243 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7225 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 460: /* dereferencable_scalar: '"' encaps_list '"'  */
#line 1244 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7231 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 461: /* scalar: "integer"  */
#line 1248 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7237 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 462: /* scalar: "floating-point number"  */
#line 1249 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7243 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 463: /* scalar: "heredoc start" "string content" "heredoc end"  */
#line 1250 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 7249 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 464: /* scalar: "heredoc start" "heredoc end"  */
#line 1252 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 7255 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 465: /* scalar: "heredoc start" encaps_list "heredoc end"  */
#line 1253 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 7261 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 466: /* scalar: dereferencable_scalar  */
#line 1254 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7267 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 467: /* scalar: constant  */
#line 1255 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7273 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 468: /* scalar: class_constant  */
#line 1256 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7279 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 469: /* constant: name  */
#line 1260 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }
#line 7285 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 470: /* constant: "'__LINE__'"  */
#line 1261 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
#line 7291 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 471: /* constant: "'__FILE__'"  */
#line 1262 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
#line 7297 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 472: /* constant: "'__DIR__'"  */
#line 1263 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
#line 7303 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 473: /* constant: "'__TRAIT__'"  */
#line 1264 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
#line 7309 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 474: /* constant: "'__METHOD__'"  */
#line 1265 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
#line 7315 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 475: /* constant: "'__FUNCTION__'"  */
#line 1266 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
#line 7321 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 476: /* constant: "'__NAMESPACE__'"  */
#line 1267 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
#line 7327 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 477: /* constant: "'__CLASS__'"  */
#line 1268 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
#line 7333 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 478: /* class_constant: class_name "'::'" identifier  */
#line 1273 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7339 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 479: /* class_constant: variable_class_name "'::'" identifier  */
#line 1275 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7345 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 480: /* optional_expr: %empty  */
#line 1279 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 7351 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 481: /* optional_expr: expr  */
#line 1280 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7357 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 482: /* variable_class_name: fully_dereferencable  */
#line 1284 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                     { (yyval.ast) = (yyvsp[0].ast); }
#line 7363 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 483: /* fully_dereferencable: variable  */
#line 1288 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7369 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 484: /* fully_dereferencable: '(' expr ')'  */
#line 1289 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7375 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 485: /* fully_dereferencable: dereferencable_scalar  */
#line 1290 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7381 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 486: /* fully_dereferencable: class_constant  */
#line 1291 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7387 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 487: /* array_object_dereferencable: fully_dereferencable  */
#line 1295 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7393 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 488: /* array_object_dereferencable: constant  */
#line 1296 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7399 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 489: /* callable_expr: callable_variable  */
#line 1300 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7405 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 490: /* callable_expr: '(' expr ')'  */
#line 1301 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7411 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 491: /* callable_expr: dereferencable_scalar  */
#line 1302 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7417 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 492: /* callable_variable: simple_variable  */
#line 1307 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7423 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 493: /* callable_variable: array_object_dereferencable '[' optional_expr ']'  */
#line 1309 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7429 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 494: /* callable_variable: array_object_dereferencable '{' expr '}'  */
#line 1311 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7435 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 495: /* callable_variable: array_object_dereferencable "'->'" property_name argument_list  */
#line 1313 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7441 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 496: /* callable_variable: array_object_dereferencable "'?->'" property_name argument_list  */
#line 1315 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7447 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 497: /* callable_variable: function_call  */
#line 1316 "/home/user/work/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 7453 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 498: /* variable: callable_variable  */
#line 1321 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7459 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 499: /* variable: static_member  */
#line 1323 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7465 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 500: /* variable: array_object_dereferencable "'->'" property_name  */
#line 1325 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7471 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 501: /* variable: array_object_dereferencable "'?->'" property_name  */
#line 1327 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7477 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 502: /* simple_variable: "variable"  */
#line 1331 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7483 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 503: /* simple_variable: '$' '{' expr '}'  */
#line 1332 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 7489 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 504: /* simple_variable: '$' simple_variable  */
#line 1333 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7495 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 505: /* static_member: class_name "'::'" simple_variable  */
#line 1338 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7501 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 506: /* static_member: variable_class_name "'::'" simple_variable  */
#line 1340 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7507 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 507: /* new_variable: simple_variable  */
#line 1345 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7513 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 508: /* new_variable: new_variable '[' optional_expr ']'  */
#line 1347 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7519 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 509: /* new_variable: new_variable '{' expr '}'  */
#line 1349 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7525 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 510: /* new_variable: new_variable "'->'" property_name  */
#line 1351 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7531 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 511: /* new_variable: new_variable "'?->'" property_name  */
#line 1353 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7537 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 512: /* new_variable: class_name "'::'" simple_variable  */
#line 1355 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7543 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 513: /* new_variable: new_variable "'::'" simple_variable  */
#line 1357 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7549 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 514: /* member_name: identifier  */
#line 1361 "/home/user/work/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = (yyvsp[0].ast); }
#line 7555 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 515: /* member_name: '{' expr '}'  */
#line 1362 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7561 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 516: /* member_name: simple_variable  */
#line 1363 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7567 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 517: /* property_name: "identifier"  */
#line 1367 "/home/user/work/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 7573 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 518: /* property_name: '{' expr '}'  */
#line 1368 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7579 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 519: /* property_name: simple_variable  */
#line 1369 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7585 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 520: /* array_pair_list: non_empty_array_pair_list  */
#line 1374 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }
#line 7591 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 521: /* possible_array_pair: %empty  */
#line 1378 "/home/user/work/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 7597 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 522: /* possible_array_pair: array_pair  */
#line 1379 "/home/user/work/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 7603 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 523: /* non_empty_array_pair_list: non_empty_array_pair_list ',' possible_array_pair  */
#line 1384 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7609 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 524: /* non_empty_array_pair_list: possible_array_pair  */
#line 1386 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }
#line 7615 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 525: /* array_pair: expr "'=>'" expr  */
#line 1391 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 7621 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 526: /* array_pair: expr  */
#line 1393 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }
#line 7627 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 527: /* array_pair: expr "'=>'" '&' variable  */
#line 1395 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }
#line 7633 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 528: /* array_pair: '&' variable  */
#line 1397 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }
#line 7639 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 529: /* array_pair: "'...'" expr  */
#line 1399 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 7645 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 530: /* array_pair: expr "'=>'" "'list'" '(' array_pair_list ')'  */
#line 1401 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }
#line 7652 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 531: /* array_pair: "'list'" '(' array_pair_list ')'  */
#line 1404 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }
#line 7659 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 532: /* encaps_list: encaps_list encaps_var  */
#line 1410 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7665 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 533: /* encaps_list: encaps_list "string content"  */
#line 1412 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7671 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 534: /* encaps_list: encaps_var  */
#line 1414 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }
#line 7677 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 535: /* encaps_list: "string content" encaps_var  */
#line 1416 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7683 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 536: /* encaps_var: "variable"  */
#line 1421 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7689 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 537: /* encaps_var: "variable" '[' encaps_var_offset ']'  */
#line 1423 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }
#line 7696 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 538: /* encaps_var: "variable" "'->'" "identifier"  */
#line 1426 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 7703 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 539: /* encaps_var: "variable" "'?->'" "identifier"  */
#line 1429 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 7710 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 540: /* encaps_var: "'${'" expr '}'  */
#line 1432 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 7716 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 541: /* encaps_var: "'${'" "variable name" '}'  */
#line 1434 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 7722 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 542: /* encaps_var: "'${'" "variable name" '[' expr ']' '}'  */
#line 1436 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }
#line 7729 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 543: /* encaps_var: "'{$'" variable '}'  */
#line 1438 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 7735 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 544: /* encaps_var_offset: "identifier"  */
#line 1442 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7741 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 545: /* encaps_var_offset: "number"  */
#line 1443 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7747 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 546: /* encaps_var_offset: '-' "number"  */
#line 1444 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }
#line 7753 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 547: /* encaps_var_offset: "variable"  */
#line 1445 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7759 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 548: /* internal_functions_in_yacc: "'isset'" '(' isset_variables possible_comma ')'  */
#line 1450 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                                               { (yyval.ast) = (yyvsp[-2].ast); }
#line 7765 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 549: /* internal_functions_in_yacc: "'empty'" '(' expr ')'  */
#line 1451 "/home/user/work/php-src/Zend/zend_language_parser.y"
                                     { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }
#line 7771 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 550: /* internal_functions_in_yacc: "'include'" expr  */
#line 1453 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }
#line 7777 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 551: /* internal_functions_in_yacc: "'include_once'" expr  */
#line 1455 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }
#line 7783 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 552: /* internal_functions_in_yacc: "'eval'" '(' expr ')'  */
#line 1457 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }
#line 7789 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 553: /* internal_functions_in_yacc: "'require'" expr  */
#line 1459 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }
#line 7795 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 554: /* internal_functions_in_yacc: "'require_once'" expr  */
#line 1461 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }
#line 7801 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 555: /* isset_variables: isset_variable  */
#line 1465 "/home/user/work/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = (yyvsp[0].ast); }
#line 7807 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 556: /* isset_variables: isset_variables ',' isset_variable  */
#line 1467 "/home/user/work/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7813 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;

  case 557: /* isset_variable: expr  */
#line 1471 "/home/user/work/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }
#line 7819 "/home/user/work/php-src/Zend/zend_language_parser.c"
    break;


#line 7823 "/home/user/work/php-src/Zend/zend_language_parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == ZENDEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= END)
        {
          /* Return failure if at end of input.  */
          if (yychar == END)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = ZENDEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != ZENDEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1474 "/home/user/work/php-src/Zend/zend_language_parser.y"


/* Over-ride Bison formatting routine to give better token descriptions.
   Copy to YYRES the contents of YYSTR for use in yyerror.
   YYSTR is taken from yytname, from the %token declaration.
   If YYRES is null, do not copy; instead, return the length of what
   the result would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	const char *toktype = yystr;
	size_t toktype_len = strlen(toktype);

	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *tokcontent, *tokcontent_end;
		size_t tokcontent_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			strcmp(toktype, "\"end of file\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		/* Prevent the backslash getting doubled in the output (eugh) */
		if (strcmp(toktype, "\"'\\\\'\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "token \"\\\"");
			}
			return sizeof("token \"\\\"")-1;
		}

		/* Avoid unreadable """ */
		/* "'" would theoretically be just as bad, but is never currently parsed as a separate token */
		if (strcmp(toktype, "'\"'") == 0) {
			if (yyres) {
				yystpcpy(yyres, "double-quote mark");
			}
			return sizeof("double-quote mark")-1;
		}

		/* Strip off the outer quote marks */
		if (toktype_len >= 2 && *toktype == '"') {
			toktype++;
			toktype_len -= 2;
		}

		/* If the token always has one form, the %token line should have a single-quoted name */
		/* The parser rules also include single-character un-named tokens which will be single-quoted here */
		/* We re-format this with double quotes here to ensure everything's consistent */
		if (toktype_len > 0 && *toktype == '\'') {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "token \"%.*s\"", (int)toktype_len-2, toktype+1);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + sizeof("token ")-1;
		}

		/* Fetch the content of the last seen token from global lexer state */
		tokcontent = LANG_SCNG(yy_text);
		tokcontent_len = LANG_SCNG(yy_leng);

		/* For T_BAD_CHARACTER, the content probably won't be a printable char */
		/* Also, "unexpected invalid character" sounds a bit redundant */
		if (tokcontent_len == 1 && strcmp(yystr, "\"invalid character\"") == 0) {
			if (yyres) {
#ifdef __VMS
				snprintf(buffer, sizeof(buffer), "character 0x%02X", *tokcontent);
#else
				snprintf(buffer, sizeof(buffer), "character 0x%02hhX", *tokcontent);
#endif
				yystpcpy(yyres, buffer);
			}
			return sizeof("character 0x00")-1;
		}

		/* Truncate at line end to avoid messing up log formats */
		tokcontent_end = memchr(tokcontent, '\n', tokcontent_len);
		if (tokcontent_end != NULL) {
			tokcontent_len = (tokcontent_end - tokcontent);
		}

		/* Try to be helpful about what kind of string was found, before stripping the quotes */
		if (tokcontent_len > 0 && strcmp(yystr, "\"quoted string\"") == 0) {
			if (*tokcontent == '"') {
				toktype = "double-quoted string";
				toktype_len = sizeof("double-quoted string")-1;
			}
			else if (*tokcontent == '\'') {
				toktype = "single-quoted string";
				toktype_len = sizeof("single-quoted string")-1;
			}
		}

		/* For quoted strings, strip off another layer of quotes to avoid putting quotes inside quotes */
		if (tokcontent_len > 0 && (*tokcontent == '\'' || *tokcontent=='"'))  {
			tokcontent++;
			tokcontent_len--;
		}
		if (tokcontent_len > 0 && (tokcontent[tokcontent_len-1] == '\'' || tokcontent[tokcontent_len-1] == '"'))  {
			tokcontent_len--;
		}

		/* Truncate to 30 characters and add a ... */
		if (tokcontent_len > 30 + sizeof("...")-1) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "%.*s \"%.*s...\"", (int)toktype_len, toktype, 30, tokcontent);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + 30 + sizeof(" \"...\"")-1;
		}

		if (yyres) {
			snprintf(buffer, sizeof(buffer), "%.*s \"%.*s\"", (int)toktype_len, toktype, (int)tokcontent_len, tokcontent);
			yystpcpy(yyres, buffer);
		}
		return toktype_len + tokcontent_len + sizeof(" \"\"")-1;
	}

	/* One of the expected tokens */

	/* Prevent the backslash getting doubled in the output (eugh) */
	if (strcmp(toktype, "\"'\\\\'\"") == 0) {
		if (yyres) {
			yystpcpy(yyres, "\"\\\"");
		}
		return sizeof("\"\\\"")-1;
	}

	/* Strip off the outer quote marks */
	if (toktype_len >= 2 && *toktype == '"') {
		toktype++;
		toktype_len -= 2;
	}

	if (yyres) {
		YYSIZE_T yyn = 0;

		for (; yyn < toktype_len; ++yyn) {
			/* Replace single quotes with double for consistency */
			if (toktype[yyn] == '\'') {
				yyres[yyn] = '"';
			}
			else {
				yyres[yyn] = toktype[yyn];
			}
		}
		yyres[toktype_len] = '\0';
	}

	return toktype_len;
}
