$ ! PHP$SHUTDOWN.COM
$ !+
$ ! 06-May-2020
$ ! Shutdown file for Php 3.10 on OpenVMS
$ !
$ !-
$
$ verify = f$verify(0)
$ set noon
$
$! Cleanup logical names...
$!
$!! if f$file_attributes("PHP$SHR","KNOWN")
$!! then
$!!    install remove php$shr
$!! endif
$
$ if f$trnlnm("PHP$SHR", "LNM$SYSTEM_TABLE") .nes. ""
$ then
$    deassign/sys PHP$SHR
$ endif
$
$ if f$trnlnm("PHP$ROOT", "LNM$SYSTEM_TABLE") .nes. ""
$ then
$    deassign/sys PHP$ROOT
$ endif
$
$ exit
