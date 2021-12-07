<?php
   if (! extension_loaded('rec')) {
      if (! dl('rec.exe')) {
         exit;
      }
   }
   if (! extension_loaded('dtr')) {
      if (! dl('dtr.exe')) {
         exit;
      }
   }

   $r = rec_new();
   rec_addstr($r, null, 10, 0);
   rec_addstr($r, null, 10, 10);
   rec_addstr($r, null, 6, 20);
   rec_addstr($r, null, 3, 26);
   rec_addstr($r, null, 5, 29);
   rec_addstr($r, null, 2, 34);
   rec_addstr($r, null, 5, 36);

   list($sts, $dab) = dtr_init(100, 0);

   if ($sts != 1) {
      printf("Initialization error\n");
      exit();
   }

   list($sts, $cond, $state) = dtr_command($dab, 'set dictionary cdd$top.dtr$lib.demo;');

   if ($sts != 1) {
      printf("Command error\n");
      exit();
   }

   if ($state == DTR_K_STL_MSG) {
      printf("%s\n", dtr_msg_buf($dab));
      dtr_cont($dab);
   }

   list($sts, $cond, $state) = dtr_command($dab, 'declare port yport using yacht;');

   if ($sts != 1) {
      printf("Command error\n");
      exit();
   }

   while ($state == DTR_K_STL_MSG) {
      printf("%s\n", dtr_msg_buf($dab));
      list($sts, $cond, $state) = dtr_cont($dab);
   }

   list($sts, $cond, $state) = dtr_command($dab, 'ready yachts; ready yport write;');

   if ($sts != 1) {
      printf("Command error\n");
      exit();
   }

   while ($state == DTR_K_STL_MSG) {
      printf("%s\n", dtr_msg_buf($dab));
      list($sts, $cond, $state) = dtr_cont($dab);
   }

   list($sts, $cond, $state) = dtr_command($dab, 'yport = yachts with loa > 30;');

   if ($sts != 1) {
      printf("Command error\n");
      exit();
   }

   while ($state == DTR_K_STL_MSG) {
      printf("%s\n", dtr_msg_buf($dab));
      list($sts, $cond, $state) = dtr_cont($dab);
   }

   while ($state == DTR_K_STL_PGET) {
      $sts = dtr_get_port($dab, $r);

      if ($sts != 1) {
         printf("Error fetching data\n");
         exit();
      }

      printf("%-10s\t%-10s\t%-6s\t%-3s\t%-5s\t%-2s\t%-5s\n", rec_getstr($r, 0),
                rec_getstr($r, 1),
                rec_getstr($r, 2),
                rec_getstr($r, 3),
                rec_getstr($r, 4),
                rec_getstr($r, 5),
                rec_getstr($r, 6));
      $state = dtr_state($dab);
   }

   $sts = dtr_finish($dab);

   if ($sts != 1) {
      printf("Problem tidying up\n");
      exit();
   }

   rec_delete($r);
?>
