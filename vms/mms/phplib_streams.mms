############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN_G))) -
/DEFINE=($(CC_DEFINES))-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.main.streams])

############################################################################
# First
############################################################################
.IF X86_HOST
X86_START = @SYS$MANAGER:X86_XTOOLS$SYLOGIN
X86_LIBDEF = define/nolog sys$library X86$LIBRARY
.ELSE
X86_START =
X86_LIBDEF =
.ENDIF

.FIRST
    $(X86_START)
    $(X86_LIBDEF)
    @ ! defines for nested includes
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).main.streams] | copy SYS$INPUT nl:

############################################################################
# streams target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_streams.olb
    ! phplib_streams is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).main.streams]cast.obj -
[.$(OBJ_DIR).main.streams]filter.obj -
[.$(OBJ_DIR).main.streams]glob_wrapper.obj -
[.$(OBJ_DIR).main.streams]memory.obj -
[.$(OBJ_DIR).main.streams]mmap.obj -
[.$(OBJ_DIR).main.streams]plain_wrapper.obj -
[.$(OBJ_DIR).main.streams]streams.obj -
[.$(OBJ_DIR).main.streams]transports.obj -
[.$(OBJ_DIR).main.streams]userspace.obj -
[.$(OBJ_DIR).main.streams]xp_socket.obj

############################################################################
# streams target rule
############################################################################
[.$(OUT_DIR)]phplib_streams.olb : [.$(OUT_DIR)]phplib_streams.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).main.streams]cast.obj : [.main.streams]cast.c $(HEADERS)
[.$(OBJ_DIR).main.streams]filter.obj : [.main.streams]filter.c $(HEADERS)
[.$(OBJ_DIR).main.streams]glob_wrapper.obj : [.main.streams]glob_wrapper.c $(HEADERS)
[.$(OBJ_DIR).main.streams]memory.obj : [.main.streams]memory.c $(HEADERS)
[.$(OBJ_DIR).main.streams]mmap.obj : [.main.streams]mmap.c $(HEADERS)
[.$(OBJ_DIR).main.streams]plain_wrapper.obj : [.main.streams]plain_wrapper.c $(HEADERS)
[.$(OBJ_DIR).main.streams]streams.obj : [.main.streams]streams.c $(HEADERS)
[.$(OBJ_DIR).main.streams]transports.obj : [.main.streams]transports.c $(HEADERS)
[.$(OBJ_DIR).main.streams]userspace.obj : [.main.streams]userspace.c $(HEADERS)
[.$(OBJ_DIR).main.streams]xp_socket.obj : [.main.streams]xp_socket.c $(HEADERS)
