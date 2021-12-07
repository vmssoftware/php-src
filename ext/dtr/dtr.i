%module dtr

%{
#include "dtr.h"
%}

%include "typemaps.i"
%typemap(argout) char **
%{ {zval *data; MAKE_STD_ZVAL(data); ZVAL_STRING(data, (const char *)*$1, 1); free(*$1);} %}

%typemap(out) char *
{
    if(!result) {
        ZVAL_NULL(return_value);
    } else {
        ZVAL_STRING(return_value, (char *)result, 1);
        free(result);
    }
}

%typemap(out) char **
{
    char **arr = $1;
    if (arr == NULL) {
        ZVAL_NULL($result);
    }
    else {
        int len = 0, i;
        while (arr[len]) len++;
        array_init($result);
        for (i = 0; i < len; i++) {
            zval *elem;
            MAKE_STD_ZVAL(elem);
            ZVAL_STRING(elem, arr[i], 1);
            zend_hash_next_index_insert(HASH_OF($result), &elem, sizeof(zval *), NULL );
            free(arr[i]);
        }
        free(arr);
    }
}


%constant int DTR_K_STL_CMD = DTR$K_STL_CMD;
%constant int DTR_K_STL_PRMPT = DTR$K_STL_PRMPT;
%constant int DTR_K_STL_LINE = DTR$K_STL_LINE;
%constant int DTR_K_STL_MSG = DTR$K_STL_MSG;
%constant int DTR_K_STL_PGET = DTR$K_STL_PGET;
%constant int DTR_K_STL_PPUT = DTR$K_STL_PPUT;
%constant int DTR_K_STL_CONT = DTR$K_STL_CONT;
%constant int DTR_K_STL_UDK = DTR$K_STL_UDK;
%constant int DTR_K_STL_END_UDK = DTR$K_STL_END_UDK;

%constant int DTR_K_SEMI_COLON_OPT = DTR_K_SEMI_COLON_OPT;
%constant int DTR_K_UNQUOTED_LIT = DTR_K_UNQUOTED_LIT;
%constant int DTR_K_SYNTAX_PROMPT = DTR_K_SYNTAX_PROMPT;
%constant int DTR_K_IMMED_RETURN = DTR_K_IMMED_RETURN;
%constant int DTR_K_FORMS_ENABLE = DTR_K_FORMS_ENABLE;
%constant int DTR_K_VERIFY = DTR_K_VERIFY;
%constant int DTR_K_BIG_ENDIAN = DTR_K_BIG_ENDIAN;
%constant int DTR_K_IEEE_FLOAT = DTR_K_IEEE_FLOAT;
%constant int DTR_K_CONTEXT_SEARCH = DTR_K_CONTEXT_SEARCH;
%constant int DTR_K_HYPHEN_DISABLED = DTR_K_HYPHEN_DISABLED;
%constant int DTR_K_MORE_COMMANDS = DTR_K_MORE_COMMANDS;
%constant int DTR_K_ABORT = DTR_K_ABORT;
%constant int DTR_K_LOCK_WAIT = DTR_K_LOCK_WAIT;
%constant int DTR_K_FN_PORT_SUPPORT = DTR_K_FN_PORT_SUPPORT;
%constant int DTR_K_DATE_STR = DTR_K_DATE_STR;
%constant int DTR_K_RET_ON_PRINT_ERROR = DTR_K_RET_ON_PRINT_ERROR;
%constant int DTR_K_GET_ROUTINES_SUPPORT = DTR_K_GET_ROUTINES_SUPPORT;

%constant int DTR_M_OPT_CMD = DTR$M_OPT_CMD;
%constant int DTR_M_OPT_PRMPT = DTR$M_OPT_PRMPT;
%constant int DTR_M_OPT_LINE = DTR$M_OPT_LINE;
%constant int DTR_M_OPT_MSG = DTR$M_OPT_MSG;
%constant int DTR_M_OPT_PGET = DTR$M_OPT_PGET;
%constant int DTR_M_OPT_PPUT = DTR$M_OPT_PPUT;
%constant int DTR_M_OPT_CONT = DTR$M_OPT_CONT;
%constant int DTR_M_OPT_UDK = DTR$M_OPT_UDK;
%constant int DTR_M_OPT_DTR_UDK = DTR$M_OPT_DTR_UDK;
%constant int DTR_M_OPT_END_UDK = DTR$M_OPT_END_UDK;
%constant int DTR_M_OPT_UNWIND = DTR$M_OPT_UNWIND;
%constant int DTR_M_OPT_CONTROL_C = DTR$M_OPT_CONTROL_C;
%constant int DTR_M_OPT_STARTUP = DTR$M_OPT_STARTUP;
%constant int DTR_M_OPT_FOREIGN = DTR$M_OPT_FOREIGN;
%constant int DTR_M_OPT_BANNER = DTR$M_OPT_BANNER;
%constant int DTR_M_OPT_REMOVE_CTLC = DTR$M_OPT_REMOVE_CTLC;
%constant int DTR_M_OPT_KEYDEFS = DTR$M_OPT_KEYDEFS;

%constant int DTR_K_UDK_SET = DTR$K_UDK_SET;
%constant int DTR_K_UDK_SET_NO = DTR$K_UDK_SET_NO;
%constant int DTR_K_UDK_SHOW = DTR$K_UDK_SHOW;
%constant int DTR_K_UDK_STATEMENT = DTR$K_UDK_STATEMENT;
%constant int DTR_K_UDK_COMMAND = DTR$K_UDK_COMMAND;

%constant int DTR_K_TOK_TOKEN = DTR$K_TOK_TOKEN;
%constant int DTR_K_TOK_PICTURE = DTR$K_TOK_PICTURE;
%constant int DTR_K_TOK_FILENAME = DTR$K_TOK_FILENAME;
%constant int DTR_K_TOK_COMMAND = DTR$K_TOK_COMMAND;
%constant int DTR_K_TOK_TEST_TOKEN = DTR$K_TOK_TEST_TOKEN;
%constant int DTR_K_TOK_LIST_ELEMENT = DTR$K_TOK_LIST_ELEMENT;
%constant int DTR_K_TOK_TEST_EOL = DTR$K_TOK_TEST_EOL;

%constant int DTR_SUCCESS = DTR_SUCCESS;

%constant int DTR_K_INF_TYPE_DOMAIN = DTR$K_INF_TYPE_DOMAIN;
%constant int DTR_K_INF_TYPE_COLLECTION = DTR$K_INF_TYPE_COLLECTION;
%constant int DTR_K_INF_TYPE_KEYWORD = DTR$K_INF_TYPE_KEYWORD;
%constant int DTR_K_INF_TYPE_DIC_NAME = DTR$K_INF_TYPE_DIC_NAME;
%constant int DTR_K_INF_TYPE_GLV = DTR$K_INF_TYPE_GLV;
%constant int DTR_K_INF_TYPE_PLOT = DTR$K_INF_TYPE_PLOT;

%constant int DTR_K_INF_DOM_FLD = DTR$K_INF_DOM_FLD;
%constant int DTR_K_INF_DOM_FORM = DTR$K_INF_DOM_FORM;
%constant int DTR_K_INF_DOM_SHARE = DTR$K_INF_DOM_SHARE;
%constant int DTR_K_INF_DOM_ACCESS = DTR$K_INF_DOM_ACCESS;
%constant int DTR_K_INF_DOM_NAME = DTR$K_INF_DOM_NAME;
%constant int DTR_K_INF_DOM_NEXT_DOM = DTR$K_INF_DOM_NEXT_DOM;
%constant int DTR_K_INF_DOM_SSC = DTR$K_INF_DOM_SSC;
%constant int DTR_K_INF_DOM_REC_LEN = DTR$K_INF_DOM_REC_LEN;

%constant int DTR_K_INF_FLD_NAME = DTR$K_INF_FLD_NAME;
%constant int DTR_K_INF_FLD_QNAME = DTR$K_INF_FLD_QNAME;
%constant int DTR_K_INF_FLD_PICTURE = DTR$K_INF_FLD_PICTURE;
%constant int DTR_K_INF_FLD_EDIT = DTR$K_INF_FLD_EDIT;
%constant int DTR_K_INF_FLD_DTYPE = DTR$K_INF_FLD_DTYPE;
%constant int DTR_K_INF_FLD_OFFSET = DTR$K_INF_FLD_OFFSET;
%constant int DTR_K_INF_FLD_LENGTH = DTR$K_INF_FLD_LENGTH;
%constant int DTR_K_INF_FLD_SCALE = DTR$K_INF_FLD_SCALE;
%constant int DTR_K_INF_FLD_CHILD = DTR$K_INF_FLD_CHILD;
%constant int DTR_K_INF_FLD_CNT = DTR$K_INF_FLD_CNT;
%constant int DTR_K_INF_FLD_LIST = DTR$K_INF_FLD_LIST;
%constant int DTR_K_INF_FLD_REDEFINES = DTR$K_INF_FLD_REDEFINES;
%constant int DTR_K_INF_FLD_VIRTUAL = DTR$K_INF_FLD_VIRTUAL;
%constant int DTR_K_INF_FLD_FILLER = DTR$K_INF_FLD_FILLER;
%constant int DTR_K_INF_FLD_MISSING = DTR$K_INF_FLD_MISSING;
%constant int DTR_K_INF_FLD_MISSING_TXT = DTR$K_INF_FLD_MISSING_TXT;
%constant int DTR_K_INF_FLD_SEG_STRING = DTR$K_INF_FLD_SEG_STRING;

%constant int DTR_K_INF_COL_CURSOR = DTR$K_INF_COL_CURSOR;
%constant int DTR_K_INF_COL_SIZE = DTR$K_INF_COL_SIZE;
%constant int DTR_K_INF_COL_FLD = DTR$K_INF_COL_FLD;
%constant int DTR_K_INF_COL_DROPPED = DTR$K_INF_COL_DROPPED;
%constant int DTR_K_INF_COL_ERASED = DTR$K_INF_COL_ERASED;
%constant int DTR_K_INF_COL_INVISIBLE = DTR$K_INF_COL_INVISIBLE;
%constant int DTR_K_INF_COL_NAME = DTR$K_INF_COL_NAME;
%constant int DTR_K_INF_COL_NEXT_COL = DTR$K_INF_COL_NEXT_COL;

%constant int DTR_K_INF_GLV_FIRST_DOM = DTR$K_INF_GLV_FIRST_DOM;
%constant int DTR_K_INF_GLV_FIRST_COL = DTR$K_INF_GLV_FIRST_COL;
%constant int DTR_K_INF_GLV_FIRST_SSC = DTR$K_INF_GLV_FIRST_SSC;
%constant int DTR_K_INF_GLV_DEF_DIC = DTR$K_INF_GLV_DEF_DIC;

%constant int DTR_K_INF_FRM_NAME = DTR$K_INF_FRM_NAME;
%constant int DTR_K_INF_FRM_LIBRARY = DTR$K_INF_FRM_LIBRARY;

%constant int DTR_K_INF_SSC_NAME = DTR$K_INF_SSC_NAME;
%constant int DTR_K_INF_SSC_SET = DTR$K_INF_SSC_SET;
%constant int DTR_K_INF_SSC_NEXT = DTR$K_INF_SSC_NEXT;

%constant int DTR_K_INF_SET_NAME = DTR$K_INF_SET_NAME;
%constant int DTR_K_INF_SET_NEXT = DTR$K_INF_SET_NEXT;
%constant int DTR_K_INF_SET_SDP = DTR$K_INF_SET_SDP;
%constant int DTR_K_INF_SET_SINGULAR = DTR$K_INF_SET_SINGULAR;

%constant int DTR_K_INF_SDP_NEXT = DTR$K_INF_SDP_NEXT;
%constant int DTR_K_INF_SDP_DOMAIN = DTR$K_INF_SDP_DOMAIN;
%constant int DTR_K_INF_SDP_TENANCY = DTR$K_INF_SDP_TENANCY;
%constant int DTR_K_INF_SDP_INSERT = DTR$K_INF_SDP_INSERT;
%constant int DTR_K_INF_SDP_RETAIN = DTR$K_INF_SDP_RETAIN;

%constant int DTR_K_INF_FLD_QHDR = DTR$K_INF_FLD_QHDR;

%constant int DTR_K_INF_HDR_CNT = DTR$K_INF_HDR_CNT;
%constant int DTR_K_INF_HDR_STRING = DTR$K_INF_HDR_STRING;

%constant int DTR_K_INF_GLV_STA_OBJ = DTR$K_INF_GLV_STA_OBJ;
%constant int DTR_K_INF_GLV_STA_CNT = DTR$K_INF_GLV_STA_CNT;
%constant int DTR_K_INF_GLV_STA_LINE = DTR$K_INF_GLV_STA_LINE;

%constant int DTR_K_INF_PLO_CNT = DTR$K_INF_PLO_CNT;
%constant int DTR_K_INF_PLO_PAI = DTR$K_INF_PLO_PAI;

%constant int DTR_K_INF_PAI_PROMPT = DTR$K_INF_PAI_PROMPT;
%constant int DTR_K_INF_PAI_DTYPE = DTR$K_INF_PAI_DTYPE;

%constant int DTR_K_INF_DOM_ACCESS_READ = DTR$K_INF_DOM_ACCESS_READ;
%constant int DTR_K_INF_DOM_ACCESS_WRITE = DTR$K_INF_DOM_ACCESS_WRITE;
%constant int DTR_K_INF_DOM_ACCESS_MODIFY = DTR$K_INF_DOM_ACCESS_MODIFY;
%constant int DTR_K_INF_DOM_ACCESS_EXTEND = DTR$K_INF_DOM_ACCESS_EXTEND;

%constant int DTR_K_INF_DOM_SHARE_EXCLUSIVE = DTR$K_INF_DOM_SHARE_EXCLUSIVE;
%constant int DTR_K_INF_DOM_SHARE_SHARED = DTR$K_INF_DOM_SHARE_SHARED;
%constant int DTR_K_INF_DOM_SHARE_PROTECT = DTR$K_INF_DOM_SHARE_PROTECT;

%constant int DTR_NTS = DTR_NTS;

%rename(dtr_command) _command;
%rename(dtr_cont) _continue;
%rename(dtr_create_udk) _create_udk;
%rename(dtr_dtr) _dtr;
%rename(dtr_end_udk) _end_udk;
%rename(dtr_finish) _finish;
%rename(dtr_get_port) _get_port;
%rename(dtr_get_string) _get_string;
%rename(dtr_info) _info;
%rename(dtr_init) _init;
%rename(dtr_lookup) _lookup;
%rename(dtr_port_eof) _port_eof;
%rename(dtr_put_port) _put_port;
%rename(dtr_put_value) _put_value;
%rename(dtr_unwind) _unwind;
%rename(dtr_condition) _condition;
%rename(dtr_state) _state;
%rename(dtr_msg_buf) _msg_buf;
%rename(dtr_aux_buf) _aux_buf;
%rename(dtr_get_options) _get_options;
%rename(dtr_set_options) _set_options;
%rename(dtr_clear_options) _clear_options;
%rename(dtr_get_rec_len) _get_rec_len;
%rename(dtr_get_flags) _get_flags;
%rename(dtr_get_udk_index) _get_udk_index;
%rename(dtr_dtr) _dtr;
%rename(dtr_skip) _skip;
%rename(dtr_row) _row;


unsigned int _command(unsigned int, char *, int *OUTPUT, unsigned short *OUTPUT);
unsigned int _continue(unsigned int, int *OUTPUT, unsigned short *OUTPUT);
unsigned int _create_udk(unsigned int, char *, short, short);
unsigned int _end_udk(unsigned int);
unsigned int _finish(unsigned int);
unsigned int _get_port(unsigned int, void *);
unsigned int _get_string(unsigned int, int, char **OUTPUT, char *);
unsigned int _info(unsigned int, int, char, int *OUTPUT, char **OUTPUT, int);
unsigned int _init(unsigned int *OUTPUT, int, int);
unsigned int _lookup(unsigned int, char, int *OUTPUT, char *);
unsigned int _port_eof(unsigned int);
unsigned int _put_port(unsigned int, void *);
unsigned int _put_value(unsigned int, char *);
unsigned int _unwind(unsigned int);
unsigned int _condition(unsigned int);
unsigned int _state(unsigned int);
char *_msg_buf(unsigned int);
char *_aux_buf(unsigned int);
unsigned int _get_options(unsigned int);
unsigned int _set_options(unsigned int, unsigned int);
unsigned int _clear_options(unsigned int, unsigned int);
unsigned int _get_rec_len(unsigned int);
unsigned int _get_flags(unsigned int);
unsigned int _get_udk_index(unsigned int);
unsigned int _dtr(unsigned int, int);
unsigned int _skip(unsigned int, unsigned int);
char **_row(unsigned int, char *);

