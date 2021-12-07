<?php
   if (! extension_loaded('dtr')) {
      if (! dl('dtr.exe')) {
         exit;
      }
   }

list($sts, $dab) = dtr_init(100, 0);

if ($sts != 1) {
   printf("Initialization error\n");
   exit();
}

list($sts, $cond, $state) = dtr_command($dab, 'set dictionary cdd$top.dtr$lib.demo.rdb;');

if ($sts != 1) {
   printf("Command error\n");
   exit();
}

if ($state == DTR_K_STL_MSG) {
   printf("%s\n", dtr_msg_buf($dab));
   dtr_cont($dab);
}

list($sts, $cond, $state) = dtr_command($dab, 'ready jobs shared read;');

if ($sts != 1) {
   printf("Command error\n");
   exit();
}

while ($state == DTR_K_STL_MSG) {
   printf("%s\n", dtr_msg_buf($dab));
   list($sts, $cond, $state) = dtr_cont($dab);
}

list($sts, $cond, $state) = dtr_command($dab, 'print jobs;');

if ($sts != 1) {
   printf("Command error\n");
   exit();
}

$sts = dtr_skip($dab, 4);

$fmt = "%4c   %1c   %20c %11c  %11c";

while (dtr_state($dab) == DTR_K_STL_LINE) {
   $row = dtr_row($dab, $fmt);
   print_r($row);
}

$sts = dtr_finish($dab);

if ($sts != 1) {
   printf("Problem tidying up\n");
   exit();
}
?>
