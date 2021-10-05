############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.Zend])

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define Optimizer [.Zend.Optimizer]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).Zend] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).Zend.Optimizer] | copy SYS$INPUT nl:

############################################################################
# zend target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_zend.olb
    ! phplib_zend is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).Zend]zend.obj -
[.$(OBJ_DIR).Zend]zend_API.obj -
[.$(OBJ_DIR).Zend]zend_alloc.obj -
[.$(OBJ_DIR).Zend]zend_ast.obj -
[.$(OBJ_DIR).Zend]zend_attributes.obj -
[.$(OBJ_DIR).Zend]zend_builtin_functions.obj -
[.$(OBJ_DIR).Zend]zend_closures.obj -
[.$(OBJ_DIR).Zend]zend_compile.obj -
[.$(OBJ_DIR).Zend]zend_constants.obj -
[.$(OBJ_DIR).Zend]zend_cpuinfo.obj -
[.$(OBJ_DIR).Zend]zend_default_classes.obj -
[.$(OBJ_DIR).Zend]zend_dtrace.obj -
[.$(OBJ_DIR).Zend]zend_enum.obj -
[.$(OBJ_DIR).Zend]zend_exceptions.obj -
[.$(OBJ_DIR).Zend]zend_execute.obj -
[.$(OBJ_DIR).Zend]zend_execute_API.obj -
[.$(OBJ_DIR).Zend]zend_extensions.obj -
[.$(OBJ_DIR).Zend]zend_fibers.obj -
[.$(OBJ_DIR).Zend]zend_float.obj -
[.$(OBJ_DIR).Zend]zend_gc.obj -
- ! [.$(OBJ_DIR).Zend]zend_gdb.obj -
[.$(OBJ_DIR).Zend]zend_generators.obj -
[.$(OBJ_DIR).Zend]zend_hash.obj -
[.$(OBJ_DIR).Zend]zend_highlight.obj -
[.$(OBJ_DIR).Zend]zend_inheritance.obj -
[.$(OBJ_DIR).Zend]zend_ini.obj -
[.$(OBJ_DIR).Zend]zend_ini_parser.obj -
[.$(OBJ_DIR).Zend]zend_ini_scanner.obj -
[.$(OBJ_DIR).Zend]zend_interfaces.obj -
[.$(OBJ_DIR).Zend]zend_iterators.obj -
[.$(OBJ_DIR).Zend]zend_language_parser.obj -
[.$(OBJ_DIR).Zend]zend_language_scanner.obj -
[.$(OBJ_DIR).Zend]zend_list.obj -
[.$(OBJ_DIR).Zend]zend_llist.obj -
[.$(OBJ_DIR).Zend]zend_multibyte.obj -
[.$(OBJ_DIR).Zend]zend_object_handlers.obj -
[.$(OBJ_DIR).Zend]zend_objects.obj -
[.$(OBJ_DIR).Zend]zend_objects_API.obj -
[.$(OBJ_DIR).Zend]zend_observer.obj -
[.$(OBJ_DIR).Zend]zend_opcode.obj -
[.$(OBJ_DIR).Zend]zend_operators.obj -
[.$(OBJ_DIR).Zend]zend_ptr_stack.obj -
[.$(OBJ_DIR).Zend]zend_signal.obj -
[.$(OBJ_DIR).Zend]zend_smart_str.obj -
[.$(OBJ_DIR).Zend]zend_sort.obj -
[.$(OBJ_DIR).Zend]zend_stack.obj -
[.$(OBJ_DIR).Zend]zend_stream.obj -
[.$(OBJ_DIR).Zend]zend_string.obj -
[.$(OBJ_DIR).Zend]zend_strtod.obj -
[.$(OBJ_DIR).Zend]zend_system_id.obj -
[.$(OBJ_DIR).Zend]zend_variables.obj -
[.$(OBJ_DIR).Zend]zend_virtual_cwd.obj -
[.$(OBJ_DIR).Zend]zend_vm_opcodes.obj -
[.$(OBJ_DIR).Zend]zend_weakrefs.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_optimizer.obj -
[.$(OBJ_DIR).Zend.Optimizer]pass1.obj -
[.$(OBJ_DIR).Zend.Optimizer]pass3.obj -
[.$(OBJ_DIR).Zend.Optimizer]optimize_func_calls.obj -
[.$(OBJ_DIR).Zend.Optimizer]block_pass.obj -
[.$(OBJ_DIR).Zend.Optimizer]optimize_temp_vars_5.obj -
[.$(OBJ_DIR).Zend.Optimizer]nop_removal.obj -
[.$(OBJ_DIR).Zend.Optimizer]compact_literals.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_cfg.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_dfg.obj -
[.$(OBJ_DIR).Zend.Optimizer]dfa_pass.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_ssa.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_inference.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_func_info.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_call_graph.obj -
[.$(OBJ_DIR).Zend.Optimizer]sccp.obj -
[.$(OBJ_DIR).Zend.Optimizer]scdf.obj -
[.$(OBJ_DIR).Zend.Optimizer]dce.obj -
[.$(OBJ_DIR).Zend.Optimizer]escape_analysis.obj -
[.$(OBJ_DIR).Zend.Optimizer]compact_vars.obj -
[.$(OBJ_DIR).Zend.Optimizer]zend_dump.obj -

############################################################################
# zend target rule
############################################################################
[.$(OUT_DIR)]phplib_zend.olb : [.$(OUT_DIR)]phplib_zend.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).Zend]zend.obj : [.Zend]zend.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_API.obj : [.Zend]zend_API.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_alloc.obj : [.Zend]zend_alloc.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_ast.obj : [.Zend]zend_ast.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_attributes.obj : [.Zend]zend_attributes.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_builtin_functions.obj : [.Zend]zend_builtin_functions.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_closures.obj : [.Zend]zend_closures.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_compile.obj : [.Zend]zend_compile.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_constants.obj : [.Zend]zend_constants.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_cpuinfo.obj : [.Zend]zend_cpuinfo.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_default_classes.obj : [.Zend]zend_default_classes.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_dtrace.obj : [.Zend]zend_dtrace.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_enum.obj : [.Zend]zend_enum.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_exceptions.obj : [.Zend]zend_exceptions.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_execute.obj : [.Zend]zend_execute.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_execute_API.obj : [.Zend]zend_execute_API.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_extensions.obj : [.Zend]zend_extensions.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_fibers.obj : [.Zend]zend_fibers.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_float.obj : [.Zend]zend_float.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_gc.obj : [.Zend]zend_gc.c $(HEADERS)
! [.$(OBJ_DIR).Zend]zend_gdb.obj : [.Zend]zend_gdb.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_generators.obj : [.Zend]zend_generators.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_hash.obj : [.Zend]zend_hash.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_highlight.obj : [.Zend]zend_highlight.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_inheritance.obj : [.Zend]zend_inheritance.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_ini.obj : [.Zend]zend_ini.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_ini_parser.obj : [.Zend]zend_ini_parser.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_ini_scanner.obj : [.Zend]zend_ini_scanner.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_interfaces.obj : [.Zend]zend_interfaces.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_iterators.obj : [.Zend]zend_iterators.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_language_parser.obj : [.Zend]zend_language_parser.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_language_scanner.obj : [.Zend]zend_language_scanner.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_list.obj : [.Zend]zend_list.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_llist.obj : [.Zend]zend_llist.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_multibyte.obj : [.Zend]zend_multibyte.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_object_handlers.obj : [.Zend]zend_object_handlers.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_objects.obj : [.Zend]zend_objects.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_objects_API.obj : [.Zend]zend_objects_API.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_observer.obj : [.Zend]zend_observer.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_opcode.obj : [.Zend]zend_opcode.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_operators.obj : [.Zend]zend_operators.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_ptr_stack.obj : [.Zend]zend_ptr_stack.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_signal.obj : [.Zend]zend_signal.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_smart_str.obj : [.Zend]zend_smart_str.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_sort.obj : [.Zend]zend_sort.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_stack.obj : [.Zend]zend_stack.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_stream.obj : [.Zend]zend_stream.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_string.obj : [.Zend]zend_string.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_strtod.obj : [.Zend]zend_strtod.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_system_id.obj : [.Zend]zend_system_id.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_variables.obj : [.Zend]zend_variables.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_virtual_cwd.obj : [.Zend]zend_virtual_cwd.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_vm_opcodes.obj : [.Zend]zend_vm_opcodes.c $(HEADERS)
[.$(OBJ_DIR).Zend]zend_weakrefs.obj : [.Zend]zend_weakrefs.c $(HEADERS)

[.$(OBJ_DIR).Zend.Optimizer]zend_optimizer.obj : [.Zend.Optimizer]zend_optimizer.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]pass1.obj : [.Zend.Optimizer]pass1.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]pass3.obj : [.Zend.Optimizer]pass3.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]optimize_func_calls.obj : [.Zend.Optimizer]optimize_func_calls.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]block_pass.obj : [.Zend.Optimizer]block_pass.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]optimize_temp_vars_5.obj : [.Zend.Optimizer]optimize_temp_vars_5.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]nop_removal.obj : [.Zend.Optimizer]nop_removal.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]compact_literals.obj : [.Zend.Optimizer]compact_literals.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_cfg.obj : [.Zend.Optimizer]zend_cfg.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_dfg.obj : [.Zend.Optimizer]zend_dfg.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]dfa_pass.obj : [.Zend.Optimizer]dfa_pass.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_ssa.obj : [.Zend.Optimizer]zend_ssa.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_inference.obj : [.Zend.Optimizer]zend_inference.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_func_info.obj : [.Zend.Optimizer]zend_func_info.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_call_graph.obj : [.Zend.Optimizer]zend_call_graph.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]sccp.obj : [.Zend.Optimizer]sccp.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]scdf.obj : [.Zend.Optimizer]scdf.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]dce.obj : [.Zend.Optimizer]dce.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]escape_analysis.obj : [.Zend.Optimizer]escape_analysis.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]compact_vars.obj : [.Zend.Optimizer]compact_vars.c $(HEADERS)
[.$(OBJ_DIR).Zend.Optimizer]zend_dump.obj : [.Zend.Optimizer]zend_dump.c $(HEADERS)
