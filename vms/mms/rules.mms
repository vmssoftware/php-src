############################################################################
# Debug/Relase
############################################################################
.IF IS_DEBUG
CC_QUALIFIERS = $(CC_QUALIFIERS_G)/DEBUG/NOOPTIMIZE/LIST=$(MMS$TARGET_NAME)/SHOW=ALL
CC_DEFINES = $(CC_DEFINES_G),_DEBUG
LINK_FLAGS = /NODEBUG/MAP=[.$(OUT_DIR)]$(NOTDIR $(MMS$TARGET_NAME))/TRACE/DSF=[.$(OUT_DIR)]$(NOTDIR $(MMS$TARGET_NAME)).DSF
.ELSE
CC_QUALIFIERS = $(CC_QUALIFIERS_G)/NODEBUG/OPTIMIZE/NOLIST
CC_DEFINES = $(CC_DEFINES_G),_NDEBUG
LINK_FLAGS = /NODEBUG/NOMAP/NOTRACEBACK
.ENDIF

CC_INCLUDES = $(CC_INCLUDES_G)
OBJ_DIR = $(OUT_DIR).OBJ

############################################################################
# Suffixes/Rules
############################################################################
.SUFFIXES
.SUFFIXES .OLB .OBJ .C

.C.OBJ
    $(CC) $(CC_FLAGS) /OBJECT=$(MMS$TARGET) $(MMS$SOURCE)

.OBJ.OLB
    @ IF F$SEARCH("$(MMS$TARGET)") .EQS. "" THEN $(LIBR)/CREATE $(MMS$TARGET)
    $(LIBR) $(MMS$TARGET) $(MMS$SOURCE)
