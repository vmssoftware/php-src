$ ! PHP$STARTUP.COM
$ !+
$ ! 06-May-2020
$ ! Startup file for Php 3.10 on OpenVMS
$ !
$ !-
$
$ set noon
$
$ file = f$search("sys$startup:php$define_logicals.com")
$
$ if file .eqs. ""
$ then
$    root = f$trnlmn("pcsi$destination")
$    if "''root'" .eqs. ""
$    then
$       write sys$output "The logical name pcsi$destination is not defined; check installation."
$       exit
$    endif
$
$    root = "''root" - "]" + "php.]"
$    define/system/trans=concealed php$root 'root
$    define/system php$shr php$root:[lib]php$shr.exe
$    php :== $php$root:[bin]php.exe
$ else
$    @sys$startup:php$define_logicals.com
$ endif
$
$!! if f$file_attributes("PHP$SHR","KNOWN")
$!! then
$!!    install replace php$shr
$!! else
$!!    install add php$shr /open /header_res /share
$!! endif
$
$ exit
