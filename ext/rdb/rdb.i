%module rdb
%{
  #include "db.h"
%}

%typemap(out) char **
{
    char **stringarray = $1;
    if ( stringarray == NULL ) {
      ZVAL_NULL($result);
    }
    else {
      int len = rdb_ncol( arg1 );
      array_init($result);
      for ( int i = 0; i < len; ++i, ++stringarray ) {
        zval data;
        ZVAL_STRINGL(&data, *stringarray, 1);
        zend_hash_next_index_insert( HASH_OF($result), &data);
      }
    }
}
%typemap(freearg) char **
{
    extern void eib_DB_FreeRow(char **);
    eib_DB_FreeRow( $1 );
}

%include "db.h"

