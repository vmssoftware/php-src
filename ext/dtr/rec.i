%module rec

%{
#include "rec.h"
%}

%include "typemaps.i"
%typemap(argout) char **
%{ {zval *data; MAKE_STD_ZVAL(data); ZVAL_STRING(data, (const char *)*$1, 1); free(*$1);} %}

%typemap(out) char *
{
    if(!result) {
      ZVAL_NULL(return_value);
    } else {
      ZVAL_STRINGL(return_value, (char *)result, 1);
      free(result);
    }
}

%rename(rec_new) _new;
%rename(rec_delete) _delete;
%rename(rec_getstr) _getstr;
%rename(rec_getint) _getint;
%rename(rec_addstr) _addstr;
%rename(rec_addint) _addint;
%rename(rec_load) _load;
%rename(rec_addfloat) _addfloat;
%rename(rec_getfloat) _getfloat;
%rename(rec_addnum) _addnum;
%rename(rec_gethex) _gethex;
%rename(rec_getnum) _getnum;
%rename(rec_setstr) _setstr;
%rename(rec_setint) _setint;
%rename(rec_setnum) _setnum;
%rename(rec_setfloat) _setfloat;

extern void *_new();
extern void _delete(void *);
extern char *_getstr(void *, int);
extern long long _getint(void *, int);
extern void _addstr(void *, char *, unsigned short, unsigned short);
extern void _addint(void *, int, long long, unsigned short);
extern void _load(void *, void *, unsigned short);
extern void _addfloat(void *, int, double, unsigned short);
extern double _getfloat(void *, int);
extern void _addnum(void *, int, double, short, unsigned short, unsigned short, unsigned short);
extern char *_gethex(void *, int);
extern double _getnum(void *, int);
extern void _setstr(void *, char *, int);
extern void _setint(void *, long long, int);
extern void _setnum(void *, double, int);
extern void _setfloat(void *, double, int);


