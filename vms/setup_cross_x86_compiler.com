$ @SYS$MANAGER:X86_XTOOLS$SYLOGIN
$ define/nolog sys$library X86$LIBRARY
$ define/nolog/trans=concealed oss$root DSA22:[OSS.X86.]
$ define/nolog SSL111_LIBSSL32 oss$root:[LIB]SSL111$LIBSSL32.OLB
$ define/nolog SSL111_LIBCRYPTO32 oss$root:[LIB]SSL111$LIBCRYPTO32.OLB
$ define/nolog TCPIP_LIB usr_disk:[vorfolomeev.tcpip_x86]tcpip$lib.olb
$ define/nolog APACHE$APR_SHR oss$root:[lib]apache$apr_shr.exe
$ define/nolog APACHE$APU_SHR oss$root:[lib]apache$apu_shr.exe
$ define/nolog APACHE$HTTPD_SHR oss$root:[lib]apache$httpd_shr.exe
$