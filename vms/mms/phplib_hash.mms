############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)-
/WARNINGS=(WARNINGS=ALL, DISABLE=($(CC_DISABLE_WARN))) -
/DEFINE=($(CC_DEFINES),"KeccakP200_excluded","KeccakP400_excluded","KeccakP800_excluded")-
/INCLUDE_DIRECTORY=($(CC_INCLUDES),[.ext.hash.xxhash],[.ext.hash.sha3.generic32lc])

.FIRST
    $(SETUP_COMPILER)
    @ define murmur [.ext.hash.murmur]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.hash] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.hash.murmur] | copy SYS$INPUT nl:
    @ pipe create/dir [.$(OBJ_DIR).ext.hash.sha3.generic32lc] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_hash.olb
    ! hash is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.hash.sha3.generic32lc]KeccakHash.obj -
[.$(OBJ_DIR).ext.hash.sha3.generic32lc]KeccakP-1600-inplace32BI.obj -
[.$(OBJ_DIR).ext.hash.sha3.generic32lc]KeccakSponge.obj -
[.$(OBJ_DIR).ext.hash]hash.obj -
[.$(OBJ_DIR).ext.hash]hash_adler32.obj -
[.$(OBJ_DIR).ext.hash]hash_crc32.obj -
[.$(OBJ_DIR).ext.hash]hash_fnv.obj -
[.$(OBJ_DIR).ext.hash]hash_gost.obj -
[.$(OBJ_DIR).ext.hash]hash_haval.obj -
[.$(OBJ_DIR).ext.hash]hash_joaat.obj -
[.$(OBJ_DIR).ext.hash]hash_md.obj -
[.$(OBJ_DIR).ext.hash]hash_ripemd.obj -
[.$(OBJ_DIR).ext.hash]hash_sha.obj -
[.$(OBJ_DIR).ext.hash]hash_sha3.obj -
[.$(OBJ_DIR).ext.hash]hash_snefru.obj -
[.$(OBJ_DIR).ext.hash]hash_tiger.obj -
[.$(OBJ_DIR).ext.hash]hash_whirlpool.obj -

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_hash.olb : [.$(OUT_DIR)]phplib_hash.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.hash]hash.obj : [.ext.hash]hash.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_adler32.obj : [.ext.hash]hash_adler32.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_crc32.obj : [.ext.hash]hash_crc32.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_fnv.obj : [.ext.hash]hash_fnv.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_gost.obj : [.ext.hash]hash_gost.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_haval.obj : [.ext.hash]hash_haval.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_joaat.obj : [.ext.hash]hash_joaat.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_md.obj : [.ext.hash]hash_md.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_ripemd.obj : [.ext.hash]hash_ripemd.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_sha.obj : [.ext.hash]hash_sha.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_sha3.obj : [.ext.hash]hash_sha3.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_snefru.obj : [.ext.hash]hash_snefru.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_tiger.obj : [.ext.hash]hash_tiger.c $(HEADERS)
[.$(OBJ_DIR).ext.hash]hash_whirlpool.obj : [.ext.hash]hash_whirlpool.c $(HEADERS)

[.$(OBJ_DIR).ext.hash.sha3.generic32lc]KeccakP-1600-inplace32BI.obj : [.ext.hash.sha3.generic32lc]KeccakP-1600-inplace32BI.c $(HEADERS)
[.$(OBJ_DIR).ext.hash.sha3.generic32lc]KeccakHash.obj : [.ext.hash.sha3.generic32lc]KeccakHash.c $(HEADERS)
[.$(OBJ_DIR).ext.hash.sha3.generic32lc]KeccakSponge.obj : [.ext.hash.sha3.generic32lc]KeccakSponge.c $(HEADERS)


