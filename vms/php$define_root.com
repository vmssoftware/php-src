$! 'f$verify(0)
$
$! Create php$define_logicals.com such that php$root is corectly defined
$!
$
$ com_nam = f$environment("procedure")
$
$ root = com_nam - "]" + ".]"
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
