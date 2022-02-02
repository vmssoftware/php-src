$! 'f$verify(0)
$
$! Create php$define_logicals.com such that php$root is corectly defined
$!
$
$ if "" .nes. f$trnlnm("php$verify") then set verify
$
$ root = f$trnlmn("pcsi$destination") - "]" + "php.]"
$
$ open/write fd sys$common:[sysmgr]php$define_logicals.com
$ write fd "$ define/system/trans=concealed php$root ''root'"
$ write fd "$ define/system php$shr php$root:[lib]php$shr.exe"
$ write fd "$ php :== $php$root:[bin]php.exe"
$ write fd "$ exit"
$ close fd
$ purge/nolog sys$startup:php$define_logicals.com
$
$ exit
