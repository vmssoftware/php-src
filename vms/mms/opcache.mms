############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=-
($(CC_INCLUDES)-
,[.ext.opcache]-
,oss$root:[include]-
)

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define optimizer [.ext.opcache.Optimizer]
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.opcache | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.opcache.Optimizer] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]opcache.exe
    ! opcache is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.opcache]ZendAccelerator.obj -
[.$(OBJ_DIR).ext.opcache]shared_alloc_mmap.obj -
[.$(OBJ_DIR).ext.opcache]shared_alloc_posix.obj -
[.$(OBJ_DIR).ext.opcache]shared_alloc_shm.obj -
[.$(OBJ_DIR).ext.opcache]zend_accelerator_blacklist.obj -
[.$(OBJ_DIR).ext.opcache]zend_accelerator_debug.obj -
[.$(OBJ_DIR).ext.opcache]zend_accelerator_hash.obj -
[.$(OBJ_DIR).ext.opcache]zend_accelerator_module.obj -
[.$(OBJ_DIR).ext.opcache]zend_accelerator_util_funcs.obj -
[.$(OBJ_DIR).ext.opcache]zend_file_cache.obj -
[.$(OBJ_DIR).ext.opcache]zend_persist.obj -
[.$(OBJ_DIR).ext.opcache]zend_persist_calc.obj -
[.$(OBJ_DIR).ext.opcache]zend_shared_alloc.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]block_pass.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]compact_literals.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]compact_vars.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]dce.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]dfa_pass.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]escape_analysis.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]nop_removal.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]optimize_func_calls.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]optimize_temp_vars_5.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]pass1.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]pass3.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]sccp.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]scdf.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]ssa_integrity.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_call_graph.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_cfg.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_dfg.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_dump.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_func_info.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_inference.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_optimizer.obj -
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_ssa.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]opcache.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]opcache.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.opcache]ZendAccelerator.obj : [.ext.opcache]ZendAccelerator.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]shared_alloc_mmap.obj : [.ext.opcache]shared_alloc_mmap.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]shared_alloc_posix.obj : [.ext.opcache]shared_alloc_posix.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]shared_alloc_shm.obj : [.ext.opcache]shared_alloc_shm.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_accelerator_blacklist.obj : [.ext.opcache]zend_accelerator_blacklist.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_accelerator_debug.obj : [.ext.opcache]zend_accelerator_debug.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_accelerator_hash.obj : [.ext.opcache]zend_accelerator_hash.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_accelerator_module.obj : [.ext.opcache]zend_accelerator_module.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_accelerator_util_funcs.obj : [.ext.opcache]zend_accelerator_util_funcs.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_file_cache.obj : [.ext.opcache]zend_file_cache.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_persist.obj : [.ext.opcache]zend_persist.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_persist_calc.obj : [.ext.opcache]zend_persist_calc.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache]zend_shared_alloc.obj : [.ext.opcache]zend_shared_alloc.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]block_pass.obj : [.ext.opcache.Optimizer]block_pass.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]compact_literals.obj : [.ext.opcache.Optimizer]compact_literals.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]compact_vars.obj : [.ext.opcache.Optimizer]compact_vars.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]dce.obj : [.ext.opcache.Optimizer]dce.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]dfa_pass.obj : [.ext.opcache.Optimizer]dfa_pass.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]escape_analysis.obj : [.ext.opcache.Optimizer]escape_analysis.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]nop_removal.obj : [.ext.opcache.Optimizer]nop_removal.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]optimize_func_calls.obj : [.ext.opcache.Optimizer]optimize_func_calls.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]optimize_temp_vars_5.obj : [.ext.opcache.Optimizer]optimize_temp_vars_5.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]pass1.obj : [.ext.opcache.Optimizer]pass1.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]pass3.obj : [.ext.opcache.Optimizer]pass3.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]sccp.obj : [.ext.opcache.Optimizer]sccp.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]scdf.obj : [.ext.opcache.Optimizer]scdf.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]ssa_integrity.obj : [.ext.opcache.Optimizer]ssa_integrity.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_call_graph.obj : [.ext.opcache.Optimizer]zend_call_graph.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_cfg.obj : [.ext.opcache.Optimizer]zend_cfg.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_dfg.obj : [.ext.opcache.Optimizer]zend_dfg.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_dump.obj : [.ext.opcache.Optimizer]zend_dump.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_func_info.obj : [.ext.opcache.Optimizer]zend_func_info.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_inference.obj : [.ext.opcache.Optimizer]zend_inference.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_optimizer.obj : [.ext.opcache.Optimizer]zend_optimizer.c $(HEADERS)
[.$(OBJ_DIR).ext.opcache.Optimizer]zend_ssa.obj : [.ext.opcache.Optimizer]zend_ssa.c $(HEADERS)
