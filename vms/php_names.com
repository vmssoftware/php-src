$ com_nam = f$environment("procedure")
$ com_dir = f$parse(com_nam,,,"directory")
$ com_dev = f$parse(com_nam,,,"device")
$ com_pat = com_dev + com_dir
$ INSTALL_DIR = com_pat - ".vms]" + ".out.php.]"
$ define /trans=concealed php$root 'INSTALL_DIR'
$ define php$shr php$root:[lib]php$shr.exe
$ !define libgmp$shr32 oss$root:[lib]libgmp$shr32.exe
$ !define libgd$shr oss$root:[lib]libgd$shr.exe
$ !define libmbfl$shr oss$root:[lib]libmbfl$shr.exe
$ php :== $php$root:[bin]php.exe