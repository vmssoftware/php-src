$ @decc$root:setup.com
$ define/nolog TCPIP_LIB sys$common:[tcpip$lib]tcpip$lib.olb
$ define/nolog SSL111_LIBSSL32 ssl111$root:[LIB]SSL111$LIBSSL32.OLB
$ define/nolog SSL111_LIBCRYPTO32 ssl111$root:[LIB]SSL111$LIBCRYPTO32.OLB
$