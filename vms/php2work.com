$ if "''P1'" .eqs. ""
$ then
$   CONFIG := DEBUG
$ else
$   CONFIG := 'P1'
$ endif
$ write sys$output "Prepare for ''CONFIG'"
$
$ com_nam = f$environment("procedure")
$ com_dir = f$parse(com_nam,,,"directory")
$ com_dev = f$parse(com_nam,,,"device")
$ com_pat = com_dev + com_dir
$ prj_ptt = com_pat - ".vms]"
$ bld_pat = prj_ptt + ".out.''CONFIG']"
$ opc_pat = prj_ptt + ".ext.opcache]"
$ std_pat = prj_ptt + ".ext.standard]"
$ mai_pat = prj_ptt + ".main]"
$ str_pat = prj_ptt + ".main.streams]"
$ tsr_pat = prj_ptt + ".tsrm]"
$ znd_pat = prj_ptt + ".Zend]"
$
$ @'com_pat'php_names.com
$
$ pipe delete/tree php$root:[000000...]*.*;* | copy SYS$INPUT nl:
$
$ backup 'bld_pat'php.exe php$root:[bin]
$
$ backup 'bld_pat'php$shr.exe php$root:[lib]
$ backup 'bld_pat'bcmath.exe php$root:[lib.extensions]
$ backup 'bld_pat'bz2.exe php$root:[lib.extensions]
$ backup 'bld_pat'calendar.exe php$root:[lib.extensions]
$ backup 'bld_pat'curl.exe php$root:[lib.extensions]
$ backup 'bld_pat'dba.exe php$root:[lib.extensions]
$ backup 'bld_pat'exif.exe php$root:[lib.extensions]
$ backup 'bld_pat'ftp.exe php$root:[lib.extensions]
$ backup 'bld_pat'gd.exe php$root:[lib.extensions]
$ backup 'bld_pat'gmp.exe php$root:[lib.extensions]
$ backup 'bld_pat'ldap.exe php$root:[lib.extensions]
$ backup 'bld_pat'mbstring.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'mysql.exe php$root:[lib.extensions]
$ backup 'bld_pat'mysqli.exe php$root:[lib.extensions]
$ backup 'bld_pat'mysqlnd.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'oci8.exe php$root:[lib.extensions]
$ backup 'bld_pat'odbc.exe php$root:[lib.extensions]
$ backup 'bld_pat'openssl.exe php$root:[lib.extensions]
$ backup 'bld_pat'openvms.exe php$root:[lib.extensions]
$ backup 'bld_pat'pdo_mysql.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'pdo_oci.exe php$root:[lib.extensions]
$ backup 'bld_pat'pdo_dblib_freetds.exe php$root:[lib.extensions]
$ backup 'bld_pat'readline.exe php$root:[lib.extensions]
$ backup 'bld_pat'shmop.exe php$root:[lib.extensions]
$ backup 'bld_pat'soap.exe php$root:[lib.extensions]
$ backup 'bld_pat'sockets.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'sybase_ct.exe php$root:[lib.extensions]
$ backup 'bld_pat'sysvsem.exe php$root:[lib.extensions]
$ backup 'bld_pat'sysvshm.exe php$root:[lib.extensions]
$ backup 'bld_pat'tidy.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'wddx.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'xmlrpc.exe php$root:[lib.extensions]
$ backup 'bld_pat'xsl.exe php$root:[lib.extensions]
$ backup 'bld_pat'zip.exe php$root:[lib.extensions]
$ backup 'bld_pat'zlib.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'zmq.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'rdb.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'redis.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'mimerdb.exe php$root:[lib.extensions]
$ backup 'bld_pat'opcache.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'dlm.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'rec.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'dtr.exe php$root:[lib.extensions]
$ ! backup 'bld_pat'dscdef.exe php$root:[lib.extensions]
$
$ backup 'bld_pat'php-cgi.exe php$root:[csws]
$ backup 'bld_pat'mod_php.exe php$root:[csws]
$
$ backup 'com_pat'php.ini-dev php$root:[etc]
$ backup 'com_pat'php.ini-prod php$root:[etc]
$ backup 'com_pat'php.ini php$root:[etc]
$
$ backup 'com_pat'cacert.pem php$root:[etc]
$
$ backup 'opc_pat'*.h php$root:[include.ext.opcahce]
$
$ backup 'std_pat'*.h php$root:[include.ext.standard]
$
$ backup 'mai_pat'*.h php$root:[include.main]
$
$ backup 'str_pat'*.h php$root:[include.main.streams]
$
$ backup 'tsr_pat'*.h php$root:[include.tsrm]
$
$ backup 'znd_pat'*.h php$root:[include.Zend]
$
