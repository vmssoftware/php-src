############################################################################
# -
MMS/EXT/DESCR=bcmach.mms/MACRO=( -
    "OUT_DIR=...", -
    "OBJ_DIR=...", -
    "CC_QUALIFIERS=...", -
    "CC_DEFINES=...", -
    "CC_INCLUDES=...", -
    "LINK_FLAGS=..." -
)
############################################################################

############################################################################
# Compiler flags combination
############################################################################
CC_FLAGS = $(CC_QUALIFIERS)/DEFINE=($(CC_DEFINES))/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define libbcmath [.ext.bcmath.libbcmath]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.bcmath.libbcmath] | copy SYS$INPUT nl:

############################################################################
# Suffixes and rules
############################################################################
.SUFFIXES
.SUFFIXES .OBJ .C

.C.OBJ
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)

############################################################################
# Target
############################################################################
TARGET : [.$(OUT_DIR)]bcmath.exe
    ! bcmath is built

############################################################################
# H
############################################################################

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.bcmath]bcmath.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]add.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]compare.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]debug.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]div.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]divmod.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]doaddsub.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]init.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]int2num.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]nearzero.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]neg.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]num2long.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]num2str.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]output.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]raise.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]raisemod.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]recmul.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]rmzero.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]sqrt.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]str2num.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]sub.obj -
[.$(OBJ_DIR).ext.bcmath.libbcmath]zero.obj

[.$(OUT_DIR)]bcmath.exe : $(OBJ_FILES)
    $(LINK) $(LINK_FLAGS) /SHARE=$(MMS$TARGET) [.vms.opt]bcmath.opt/opt

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.bcmath]bcmath.obj : [.ext.bcmath]bcmath.obj : c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]add.obj : [.ext.bcmath.libbcmath.src]add.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]compare.obj : [.ext.bcmath.libbcmath.src]compare.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]debug.obj : [.ext.bcmath.libbcmath.src]debug.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]div.obj : [.ext.bcmath.libbcmath.src]div.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]divmod.obj : [.ext.bcmath.libbcmath.src]divmod.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]doaddsub.obj : [.ext.bcmath.libbcmath.src]doaddsub.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]init.obj : [.ext.bcmath.libbcmath.src]init.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]int2num.obj : [.ext.bcmath.libbcmath.src]int2num.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]nearzero.obj : [.ext.bcmath.libbcmath.src]nearzero.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]neg.obj : [.ext.bcmath.libbcmath.src]neg.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]num2long.obj : [.ext.bcmath.libbcmath.src]num2long.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]num2str.obj : [.ext.bcmath.libbcmath.src]num2str.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]output.obj : [.ext.bcmath.libbcmath.src]output.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]raise.obj : [.ext.bcmath.libbcmath.src]raise.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]raisemod.obj : [.ext.bcmath.libbcmath.src]raisemod.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]recmul.obj : [.ext.bcmath.libbcmath.src]recmul.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]rmzero.obj : [.ext.bcmath.libbcmath.src]rmzero.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]sqrt.obj : [.ext.bcmath.libbcmath.src]sqrt.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]str2num.obj : [.ext.bcmath.libbcmath.src]str2num.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]sub.obj : [.ext.bcmath.libbcmath.src]sub.c $(HEADERS)
[.$(OBJ_DIR).ext.bcmath.libbcmath]zero.obj : [.ext.bcmath.libbcmath.src]zero.c $(HEADERS)
