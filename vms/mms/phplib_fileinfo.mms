############################################################################
# Must be invoked from php.mms
############################################################################

CC_FLAGS = $(CC_QUALIFIERS)/DEFINE=($(CC_DEFINES))/INCLUDE_DIRECTORY=($(CC_INCLUDES))

############################################################################
# First
############################################################################
.FIRST
    @ ! defines for nested includes
    @ define libmagic [.ext.fileinfo.libmagic]
    @ define pcre2lib [.ext.pcre.pcre2lib]
    @ define fileinfo [.ext.fileinfo]
    @ ! create output directory (because of bug in MMS)
    @ pipe create/dir [.$(OBJ_DIR).ext.fileinfo.libmagic] | copy SYS$INPUT nl:

############################################################################
# Main target
############################################################################
TARGET : [.$(OUT_DIR)]phplib_fileinfo.olb
    ! fileinfo is built

############################################################################
# Object files
############################################################################
OBJ_FILES = -
[.$(OBJ_DIR).ext.fileinfo]fileinfo.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]apprentice.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]apptype.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]ascmagic.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]buffer.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]cdf_time.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]cdf.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]compress.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]der.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]encoding.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]fsmagic.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]funcs.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]is_csv.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]is_json.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]is_tar.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]magic.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]print.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]readcdf.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]softmagic.obj -
[.$(OBJ_DIR).ext.fileinfo.libmagic]strcasestr.obj

############################################################################
# Main target rule
############################################################################
[.$(OUT_DIR)]phplib_fileinfo.olb : [.$(OUT_DIR)]phplib_fileinfo.olb($(OBJ_FILES))
    continue

############################################################################
# Source files
############################################################################
[.$(OBJ_DIR).ext.fileinfo]fileinfo.obj : [.ext.fileinfo]fileinfo.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]apprentice.obj : [.ext.fileinfo.libmagic]apprentice.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]apptype.obj : [.ext.fileinfo.libmagic]apptype.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]ascmagic.obj : [.ext.fileinfo.libmagic]ascmagic.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]buffer.obj : [.ext.fileinfo.libmagic]buffer.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]cdf_time.obj : [.ext.fileinfo.libmagic]cdf_time.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]cdf.obj : [.ext.fileinfo.libmagic]cdf.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]compress.obj : [.ext.fileinfo.libmagic]compress.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]der.obj : [.ext.fileinfo.libmagic]der.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]encoding.obj : [.ext.fileinfo.libmagic]encoding.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]fsmagic.obj : [.ext.fileinfo.libmagic]fsmagic.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]funcs.obj : [.ext.fileinfo.libmagic]funcs.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]is_csv.obj : [.ext.fileinfo.libmagic]is_csv.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]is_json.obj : [.ext.fileinfo.libmagic]is_json.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]is_tar.obj : [.ext.fileinfo.libmagic]is_tar.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]magic.obj : [.ext.fileinfo.libmagic]magic.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]print.obj : [.ext.fileinfo.libmagic]print.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]readcdf.obj : [.ext.fileinfo.libmagic]readcdf.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]softmagic.obj : [.ext.fileinfo.libmagic]softmagic.c $(HEADERS)
[.$(OBJ_DIR).ext.fileinfo.libmagic]strcasestr.obj : [.ext.fileinfo.libmagic]strcasestr.c $(HEADERS)
