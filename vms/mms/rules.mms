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
