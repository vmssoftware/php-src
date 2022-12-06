<style type="text/css">
table.lnm {
	border-width: 1px;
	border-spacing: 2px;
	border-style: outset;
	border-color: gray;
	border-collapse: separate;
	background-color: white;
	display: inline-block;
	vertical-align: top;
}
table.lnm th {
	border-width: 1px;
	padding: 1px;
	border-style: inset;
	border-color: gray;
	background-color: white;
	-moz-border-radius: ;
}
table.lnm td {
	border-width: 1px;
	padding: 1px;
	border-style: inset;
	border-color: gray;
	background-color: white;
	-moz-border-radius: ;
}
</style>
<?php 

#
# Load the OpenVMS extension if needed
#
if (! extension_loaded ("openvms"))
    dl ("openvms.exe");

#
# Display the header
#
echo "<h1><center>Testing the OpenVMS extension</center></h1><br>\n";

#
# Allow only errors to be reported
#
error_reporting (E_ERROR);

#
# Test the OpenVMS convert filename function
#
# openvms_cvt_filename (func_code, file_name) 
#
# func_codes:
#	OPENVMS_CVT_VMS_TO_UNIX		Convert vms filespec to unix filespec
#	OPENVMS_CVT_UNIX_TO_VMS		Convert unix filespec to vms filespec
#
$VmsFn = "PHP\$ROOT:[etc]php.ini";
$UnixFn = openvms_cvt_filename (OPENVMS_CVT_VMS_TO_UNIX, $VmsFn);
if ($UnixFn === FALSE)
    echo "openvms_cvt_filename (OPENVMS_CVT_VMS_TO_UNIX, \"$VmsFn\") = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else    
    echo "openvms_cvt_filename (OPENVMS_CVT_VMS_TO_UNIX, \"$VmsFn\") = $UnixFn<br>\n";

#
# Test the OpenVMS getdvi function
#
# openvms_getdvi (item_code [,device_name]) 
#
# item_codes:
#	<item_code>			Any Item code supported by F$GETDVI
#	"?"				List of supported item codes
# device_name:				Defaults to "TT"
#
$item = "DISPLAY_DEVNAM";
$val = openvms_getdvi ($item);
if ($val === FALSE)
    echo "openvms_getdvi (\"$item\") = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else
    echo "openvms_getdvi (\"$item\") = $val<br>\n";

#
# Test the OpenVMS getjpi function
#
# openvms_getjpi (item_code [,proc_name][,pid]) 
#
# item_codes:
#	<item_code>			Any Item code supported by F$GETJPI
#	"?"				List of supported item codes
# proc_name:				Any process name 
# pid:					Any process ID or -1 wild card
#
$item = "LAST_LOGIN_I";
$val = openvms_getjpi ($item);
if ($val === FALSE)
    echo "openvms_getjpi (\"$item\") = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else
    echo "openvms_getjpi (\"$item\") = $val<br>\n";

#
# Test the OpenVMS getsyi function
#
# openvms_getsyi (item_code [,node_name][,csid]) 
#
# item_codes:
#	<item_code>			Any Item code supported by F$GETSYI
#	"?"				List of supported item codes
# node_name:				Any node name 
# csid:					Any cluster system ID or -1 wild card
#
$item = "BOOTTIME";
$val = openvms_getsyi ($item);
if ($val === FALSE)
    echo "openvms_getsyi (\"$item\") = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else
    echo "openvms_getsyi (\"$item\") = $val<br>\n";

#
# Test the OpenVMS time function
#
# openvms_time ([millisecond_time]) 
#
$val = openvms_time ();
if ($val === FALSE)
    echo "openvms_time () = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else
    echo "openvms_time () = $val<br>\n";

#
# Test the OpenVMS uptime function
#
# openvms_uptime ()
#
$uptime = openvms_uptime ();
if ($uptime === FALSE)
    echo "openvms_uptime () = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else
    echo "openvms_uptime () = $uptime<br>\n";

echo "<br>\n";

#
# Test the OpenVMS trnlnm function
# syntax same as SYS$TRNLNM: result=openvms_trnlnm(attr, tabnam, lognam, acmode, itmlst);
#    result = value of the logical name or FALSE on failure
#    attr = CASE_BLIND or INTERLOCKED or CASE_BLIND,INTERLOCKED
#    tabnam = table in which to look up the logical name, defaults to LNM$FILE_DEV
#    lognam = name of the logical being tranlated
#    acmode = (optional) minimum access mode of the logical name, not specified or zero means "access mode of caller"
#    itmlst = (optional) list of desired attributes to return about the logical name
#			  individual attribute flags are returned as true or false
#			  INDEX is the only input item, all are output items
#

# define a list of all possible item list entries
$items = array(
 "ACCESS_MODE" => "",		# LNM$_ACMODE
 "ATTRIBUTES" => "",		# LNM$_ATTRIBUTES
 "CASE_BLIND" => "",		# LNM$M_CASE_BLIND
 "CLUSTERWIDE" => "",		# LNM$M_CLUSTERWIDE
 "CONCEALED" => "",		# LNM$M_CONCEALED
 "CONFINE" => "",		# LNM$M_CONFINE
 "CRELOG" => "",		# LNM$M_CRELOG
 "DCL_REQUEST" => "",		# LNM$M_DCL_REQUEST
 "EXISTS" => "",		# LNM$M_EXISTS
 "INDEX" => 1,			# LNM$_INDEX
 "INTERLOCKED" => "",		# LNM$M_INTERLOCKED
 "LENGTH" => "",		# LNM$_LENGTH
 "MAX_INDEX" => "",		# LNM$_MAX_INDEX
 "NO_ALIAS" => "",		# LNM$M_NO_ALIAS
 "PARENT" => "",		# LNM$_PARENT
 "SHAREABLE" => "",		# LNM$M_SHAREABLE
 "STRING" => "",		# LNM$_STRING  (same as the return value of the function)
 "TABLE" => "",			# LNM$M_TABLE
 "TABLE_NAME" => "",		# LNM$_TABLE
 "TERMINAL" => ""		# LNM$M_TERMINAL
);
echo '$items["INDEX"] = 1;<br> ';
$val = openvms_trnlnm('CASE_BLIND', '', 'sda$read_dir', 0, $items);
if ($val === FALSE)
    echo "openvms_trnlnm ('CASE_BLIND', \"\", 'sda\$read_dir', 0, \$items) = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else {
    echo "openvms_trnlnm ('CASE_BLIND', \"\", 'sda\$read_dir', 0, \$items) = $val\n<br>";
    echo "\$items = <table class=\"lnm\">\n";
    foreach($items as $key_val => $value) {
	if (is_bool($value)) $value = $value ? "TRUE" : "FALSE";
	echo "<tr><td>$key_val</td><td>$value</td></tr>\n";
    }
    echo "</table><br>\n";
}

echo "<br>\n";

#
# Test the OpenVMS crelnm function
# syntax same as SYS$CRELNM: result=openvms_crelnm(attr, tabnam, lognam, acmode, itmlst);
#    result = TRUE on success or FALSE on failure
#    attr = CONFINE or NO_ALIAS or CONFINE,NO_ALIAS
#    tabnam = table in which to place the logical name, defaults to LNM$PROCESS_TABLE
#    lognam = name of the logical being created
#    acmode = (optional) access mode of the logical name, not specified or zero means "access mode of caller"
#    itmlst = (optional) list of attributes to set on the logical name (see SYS$CRELNM for supported values)
#			  STRING = value of the logical name
#			  TABLE_NAME = returns the name of the logical name table in which the logical is placed
#

$items = array(
 "CONCEALED" => 1,
 "TERMINAL" => 1,
 "STRING" => 'This is the value',
 "TABLE_NAME" => ''
);
$val = openvms_crelnm('NO_ALIAS', 'LNM$JOB', 'TMPTEMP', 0, $items);
if ($val === FALSE)
    echo "openvms_crelnm ('NO_ALIAS', 'LNM\$JOB', 'TMPTEMP', 0, \$items) = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else 
    echo "openvms_crelnm ('NO_ALIAS', 'LNM\$JOB', 'TMPTEMP', 0, \$items) = $val\n<br>";

echo "<br>\n";

#
# Test the OpenVMS dellnm function
# syntax same as SYS$DELLNM: result=openvms_dellnm(tabnam, lognam, acmode);
#    result = TRUE on success or FALSE on failure
#    tabnam = table from which the logical name is to be deleted, no default
#    lognam = (OPTIONAL) logical name being deleted
#    acmode = (optional) access mode of the logical name, not specified or zero means "access mode of caller"
#
# read the documentation on SYS$DELLNM for what happens when the logical name is no specified
#
$val = openvms_dellnm('LNM$JOB', 'TMPTEMP');
if ($val === FALSE)
    echo "openvms_dellnm ('LNM\$JOB', 'TMPTEMP') = <b>" . openvms_message (openvms_status ()) . "</b><br>\n";
else 
    echo "openvms_dellnm ('LNM\$JOB', 'TMPTEMP') = $val\n<br>";

echo "<br>\n";

#
# Test the OpenVMS DCL symbol functions
# syntax:
#   openvms_symbol_set(symbol_name, symbol_value [, true_if_global]);
#   openvms_symbol_get(symbol_name [, true_if_global]);
#   openvms_symbol_delete(symbol_name [, true_if_global]);
#
echo "openvms_symbol_set('BLAH_1',date('Y-m-d'));<br>\n";
$val = openvms_symbol_set('BLAH_1',date('Y-m-d'));
if ($val === FALSE)
    echo openvms_message (openvms_status ());
echo "openvms_symbol_set('BLAH_2','TWO');<br>\n";
$val = openvms_symbol_set('BLAH_2','TWO');
if ($val === FALSE)
    echo openvms_message (openvms_status ());
echo "openvms_symbol_set('BLAH_3',date('h:m:s'),true);<br>\n";
$val = openvms_symbol_set('BLAH_3',date('h:m:s'),true);
if ($val === FALSE)
    echo openvms_message (openvms_status ());
echo "openvms_symbol_set('BLAH_4','global-4',true);>br>\n";
$val = openvms_symbol_set('BLAH_4','global-4',true);
if ($val === FALSE)
    echo openvms_message (openvms_status ());
echo "BLAH_4 = openvms_symbol_get('BLAH_4') = " . openvms_symbol_get('BLAH_4') . "<br>\n";
echo "BLAH_4 (local) = openvms_symbol_get('BLAH_4',false) = " . openvms_symbol_get('BLAH_4',false) . "<br>\n";
echo "BLAH_4 (global) = openvms_symbol_get('BLAH_4',true) = " . openvms_symbol_get('BLAH_4',true) . "<br>\n";

$val = openvms_symbol_delete('BLAH_2');
if ($val === FALSE)
  echo openvms_message (openvms_status ());
$val = openvms_symbol_delete('BLAH_4',true);
if ($val === FALSE)
    echo openvms_message (openvms_status ());

echo "<br>\n";

#
# Show the cluster info
#
ShowCluster ();

#
# Show the system info
#
ShowSystem ();

#
# Show Cluster
#
function ShowCluster ()
{

$SystemId = openvms_getsyi ("SCSSYSTEMID");
$NodeName = openvms_getsyi ("NODENAME");
$Time = strtok (openvms_time (), ".");

echo "<pre>\n";
$hdr = "View of Cluster from system ID $SystemId  node: $NodeName";
$pad = str_repeat (" ", 79 - (strlen ($hdr) + strlen ($Time)));
echo $hdr . $pad . $Time . "\n";
echo "+-----------------------------+\n";
echo "|      SYSTEMS      | MEMBERS |\n";
echo "|-------------------+---------|\n";
echo "|  NODE  | SOFTWARE |  STATUS |\n";
echo "|--------+----------+---------|\n";

$ctx = -1;
while (1)
    {
    $csid = openvms_getsyi ("NODE_CSID", "", $ctx);
    if ($csid === FALSE)
	{
	$status = openvms_status ();
	if ($status != 2560)
	    echo openvms_message (openvms_status ()) . "<br>\n";
	break;
	}
    $NodeName = str_pad (openvms_getsyi ("NODENAME", "", $csid), 6, " ", STR_PAD_RIGHT);
    $swtype = openvms_getsyi ("NODE_SWTYPE", "", $csid);
    $swvers = openvms_getsyi ("NODE_SWVERS", "", $csid);
    $software = str_pad ($swtype . $swvers, 8, " ", STR_PAD_RIGHT);
    if (strcasecmp (openvms_getsyi ("CLUSTER_MEMBER", "", $csid), "TRUE") == 0)
	$status =  "MEMBER";
    else
	$status = "      ";                  
    echo "| $NodeName | $software | $status  |\n";
    }

if (openvms_getsyi ("CLUSTER_NODES") == 0)
    {
    $NodeName = str_pad (openvms_getsyi ("NODENAME"), 6, " ", STR_PAD_RIGHT);
    $swtype = openvms_getsyi ("NODE_SWTYPE", "", $csid);
    $swvers = openvms_getsyi ("NODE_SWVERS", "", $csid);
    $software = str_pad ($swtype . $swvers, 8, " ", STR_PAD_RIGHT);
    if (strcasecmp (openvms_getsyi ("CLUSTER_MEMBER", "", $csid), "TRUE") == 0)
	$status =  "MEMBER";
    else
	$status = "      ";
    echo "| $NodeName | $software | $status  |\n";
    }

echo "+-----------------------------+\n";
echo "</pre>\n";

}

#
# Show System (Requires World Privilege)
#
function ShowSystem ()
{

$VmsVer = trim (openvms_getsyi ("VERSION"));
$NodeName = openvms_getsyi ("NODENAME");
$UpTime = trim (openvms_uptime ());
$Time = openvms_time ();

echo "<pre>\n";
echo "OpenVMS $VmsVer  on node $NodeName  $Time  Uptime  $UpTime\n";
echo "  Pid    Process Name    State  Pri      I/O       CPU       Page flts  Pages\n";
$ctx = -1;
while (1)
    {
    $pid = openvms_getjpi ("PID", "", $ctx);
    if ($pid === FALSE)
	{
	$status = openvms_status ();
	if ($status != 2472)
	    echo openvms_message (openvms_status ()) . "<br>\n";
	break;
	}
    $prcpid = str_pad ($pid, 8, " ", STR_PAD_RIGHT);
    $prcnam = str_pad (openvms_getjpi ("PRCNAM", "", $pid), 15, " ", STR_PAD_RIGHT);
    $state = str_pad (openvms_getjpi ("STATE", "", $pid), 5, " ", STR_PAD_RIGHT);
    $pri = str_pad (openvms_getjpi ("PRI", "", $pid), 3, " ", STR_PAD_LEFT);
    $io = openvms_getjpi ("DIRIO", "", $pid) + openvms_getjpi ("BUFIO", "", $pid);
    $io = str_pad ($io, 9, " ", STR_PAD_LEFT);
    $cputim = openvms_time (openvms_getjpi ("CPUTIM", "", $pid));
    $pagflts = str_pad (openvms_getjpi ("PAGEFLTS", "", $pid), 9, " ", STR_PAD_LEFT);
    $pages = openvms_getjpi ("GPGCNT", "", $pid) + openvms_getjpi ("PPGCNT", "", $pid);
    $pages = $pages / (openvms_getsyi ("PAGE_SIZE") / 512);
    $pages = str_pad ($pages, 6, " ", STR_PAD_LEFT);
    $multithread = openvms_getjpi ("MULTITHREAD", "", $pid);
    $owner = openvms_getjpi ("OWNER", "", $pid);
    $mode = openvms_getjpi ("MODE", "", $pid);
    if ($multithread >= 1)
	$sts = "M";
    else
	$sts = " ";
    if ($owner != 0)
	$sts .= "S";
    else 
    if (strcasecmp ($mode, "NETWORK") == 0)
	$sts .= "N";
    else
    if (strcasecmp ($mode, "BATCH") == 0)
	$sts .= "B";
    else
	$sts .= " ";
    echo "$prcpid $prcnam $state  $pri$io$cputim $pagflts $pages $sts\n";
    }
echo "</pre>\n";

}

?>