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
$VmsFn = "sys\$login:login.com";
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
$val = openvms_getsyi ($item, "", 0);
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
