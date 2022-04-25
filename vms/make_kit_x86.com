$ set verify
$
$ delete/log/noconf vsi-i64vms-php-*.pcsi;*
$ delete/log/noconf vsi-i64vms-php-*.pcsi$compressed;*
$
$ ! material is the parent folder for php$root 
$ ! for example if php$root is WORK:[VORFOLOMEEV.PHP.]
$ ! then material must be WORK:[VORFOLOMEEV.]
$ ! NOTE: php$root must ends with PHP
$
$ product package php -
        /source=php.pcsi$desc -
        /destination=[] -
        /material=(WORK:[VORFOLOMEEV.]) -
        /format=sequential -
        /opt=noconf -
        /log -
        /producer=VSI
$
$ product copy php/source=[]/dest=[]/format=compressed/opt=noconf
$ purge/log
$
$ purge/log [...]
$
$ set noverify
$
$ exit

