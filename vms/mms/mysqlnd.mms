############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),oss$root:[include])

############################################################################
# First
############################################################################
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
X86_OSSDEF = define/nolog/trans=concealed oss$root DSA22:[OSS.X86.]
.ELSE
X86_START =
X86_LIBDEF =
X86_OSSDEF =
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    $(X86_OSSDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.mysqlnd] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]mysqlnd.exe
    ! mysqlnd is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_alloc.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_auth.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_block_alloc.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_charset.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_commands.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_connection.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_debug.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_driver.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_ext_plugin.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_loaddata.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_plugin.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_protocol_frame_codec.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_ps_codec.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_ps.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_read_buffer.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_result_meta.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_result.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_reverse_api.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_statistics.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_vio.obj -
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_wireprotocol.obj -
[.$(OBJ_DIR).ext.mysqlnd]php_mysqlnd.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]mysqlnd.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]mysqlnd.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_alloc.obj : [.ext.mysqlnd]mysqlnd_alloc.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_auth.obj : [.ext.mysqlnd]mysqlnd_auth.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_block_alloc.obj : [.ext.mysqlnd]mysqlnd_block_alloc.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_charset.obj : [.ext.mysqlnd]mysqlnd_charset.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_commands.obj : [.ext.mysqlnd]mysqlnd_commands.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_connection.obj : [.ext.mysqlnd]mysqlnd_connection.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_debug.obj : [.ext.mysqlnd]mysqlnd_debug.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_driver.obj : [.ext.mysqlnd]mysqlnd_driver.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_ext_plugin.obj : [.ext.mysqlnd]mysqlnd_ext_plugin.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_loaddata.obj : [.ext.mysqlnd]mysqlnd_loaddata.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_plugin.obj : [.ext.mysqlnd]mysqlnd_plugin.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_protocol_frame_codec.obj : [.ext.mysqlnd]mysqlnd_protocol_frame_codec.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_ps_codec.obj : [.ext.mysqlnd]mysqlnd_ps_codec.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_ps.obj : [.ext.mysqlnd]mysqlnd_ps.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_read_buffer.obj : [.ext.mysqlnd]mysqlnd_read_buffer.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_result_meta.obj : [.ext.mysqlnd]mysqlnd_result_meta.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_result.obj : [.ext.mysqlnd]mysqlnd_result.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_reverse_api.obj : [.ext.mysqlnd]mysqlnd_reverse_api.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_statistics.obj : [.ext.mysqlnd]mysqlnd_statistics.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_vio.obj : [.ext.mysqlnd]mysqlnd_vio.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]mysqlnd_wireprotocol.obj : [.ext.mysqlnd]mysqlnd_wireprotocol.c $(HEADERS)
[.$(OBJ_DIR).ext.mysqlnd]php_mysqlnd.obj : [.ext.mysqlnd]php_mysqlnd.c $(HEADERS)
