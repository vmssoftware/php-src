$ set verify
$
$ define streams php$root:[include.main.streams]
$ define ext php$root:[include.ext]
$ define main php$root:[include.main]
$
$ define cc$include [],[-],php$root:[include.ext.opcache], -
php$root:[include.main], -
php$root:[include.TSRM], -
php$root:[include.Zend], dtr$library
$
$ ccopt = "/nolist/warn=disable=(QUESTCOMPARE,EXTRASEMI)/names=(as_is,shortened)/include=cc$include/define=(_LARGEFILE,_USE_STD_STAT,ZEND_ENABLE_STATIC_TSRMLS_CACHE=1,PHP_ATOM_INC)"
$
$ ! DTR
$ swig :== $swig$root:[bin]swig.exe
$ swig -php dtr.i
$ purge/log
$
$ cc'ccopt' dtr_wrap.c
$ cc'ccopt' dtr.c
$ cc'ccopt' rec.c
$ cc'ccopt' rsscanf.c
$ delete/log/noconf dtr_wrap.c;*
$
$ link/share=dtr.exe dtr.obj,rec.obj,rsscanf.obj,dtr_wrap.obj,sys$input/opt
php$shr/share
sys$library:dtrshr.exe/share
dtr$library:termserve.olb/lib
GSMATCH=LEQUAL,1,0
case_sensitive=YES
SYMBOL_VECTOR=(get_module=PROCEDURE)
$ purge/log [...]
$ delete/log/noconf *.obj;*
$
$
$ ! REC
$ swig :== $swig$root:[bin]swig.exe
$ swig -php rec.i
$ purge/log
$
$ cc'ccopt' rec_wrap.c
$ cc'ccopt' rec.c
$ delete/log/noconf rec_wrap.c;*
$
$ link/share=rec.exe rec.obj,rec_wrap.obj,sys$input/opt
php$shr/share
GSMATCH=LEQUAL,1,0
case_sensitive=YES
SYMBOL_VECTOR=(get_module=PROCEDURE)
$ purge/log [...]
$ delete/log/noconf *.obj;*
$
$ ! DSC
$ swig :== $swig$root:[bin]swig.exe
$ swig -php dscdef.i
$ purge/log
$
$ cc'ccopt' dscdef_wrap.c
$ delete/log/noconf dscdef_wrap.c;*
$
$ link/share=dscdef.exe dscdef_wrap.obj,sys$input/opt
php$shr/share
GSMATCH=LEQUAL,1,0
case_sensitive=YES
SYMBOL_VECTOR=(get_module=PROCEDURE)
$ purge/log [...]
$ delete/log/noconf *.obj;*
$
$ delete/log/noconf dtr.php;*
$ delete/log/noconf rec.php;*
$ delete/log/noconf dscdef.php;*
$ delete/log/noconf php_dtr.h;*
$ delete/log/noconf php_rec.h;*
$ delete/log/noconf php_dscdef.h;*
$
$ exit
