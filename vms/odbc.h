/*
**
** © Copyright 2002 Hewlett-Packard Development Company, L.P.
**
** Hewlett-Packard and the Hewlett-Packard logo are trademarks
** of Hewlett-Packard Development Company L.P. in the U.S. and/or
** other countries.
**
** Confidential computer software.
** Valid license from Hewlett-Packard required for possession, use
** or copying.  Consistent with FAR 12.211 and 12.212, Commercial
** Computer Software, Computer Software Documentation, and Technical
** Data for Commercial.  Items are licensed to the U.S. Government
** under vendor's standard commercial license.
**
** Hewlett-Packard shall not be liable for technical or editorial
** errors or omissions contained herein.  The information is provided
** "as is" without warranty of any kind and is subject to change
** without notice.  The warranties for Hewlett-Packard products are
** set forth in the express warranty statements accompanying such
** products.  Nothing herein should be construed as constituting an
** additional warranty.
**
*/

#ifndef __ODBC_H
#define __ODBC_H

/******************************************************************************/
/***                         SQLTYPES.H Definitions                         ***/
/******************************************************************************/

#define SQL_API

/*
** API declaration data types
*/
typedef char   			SQLCHAR;	/* Changed from unsigned char */
typedef long            	SQLINTEGER;
typedef unsigned long   	SQLUINTEGER;
typedef void *          	SQLPOINTER;
typedef short           	SQLSMALLINT;
typedef unsigned short  	SQLUSMALLINT;

/*
** Function return type
*/
typedef SQLSMALLINT     	SQLRETURN;

/*
** Generic data structures
*/
typedef void*			SQLHENV;
typedef void*			SQLHDBC;
typedef void*			SQLHSTMT;

/*
** SQL portable types for C
*/
typedef unsigned char           UCHAR;
typedef signed char             SCHAR;
typedef long int                SDWORD;
typedef short int               SWORD;
typedef unsigned long int       UDWORD;
typedef unsigned short int      UWORD;
typedef signed long             SLONG;
typedef signed short            SSHORT;
typedef unsigned long           ULONG;
typedef unsigned short          USHORT;
typedef double                  SDOUBLE;
typedef double            	LDOUBLE;
typedef float                   SFLOAT;
typedef void*              	PTR;
typedef void*              	HENV;
typedef void*              	HDBC;
typedef void*              	HSTMT;
typedef signed short            RETCODE;

/******************************************************************************/
/***                           SQL.H Definitions                            ***/
/******************************************************************************/

/*
** Special length/indicator values
*/
#define SQL_NULL_DATA		(-1)
#define SQL_DATA_AT_EXEC	(-2)

/*
** Return values from functions
*/
#define SQL_SUCCESS		0
#define SQL_SUCCESS_WITH_INFO	1
#define SQL_ERROR		(-1)
#define SQL_INVALID_HANDLE	(-2)

#define SQL_STILL_EXECUTING	2
#define SQL_NEED_DATA		99

/*
** Test for SQL_SUCCESS or SQL_SUCCESS_WITH_INFO
*/
#define SQL_SUCCEEDED(rc) 	(((rc)&(~1))==0)

/*
** Flags for null-terminated string
*/
#define SQL_NTS			(-3)
#define SQL_NTSL		(-3L)

/*
** Maximum message length
*/
#define SQL_MAX_MESSAGE_LENGTH	512

/*
** SQL data type codes
*/
#define	SQL_UNKNOWN_TYPE	0
#define SQL_CHAR            	1
#define SQL_NUMERIC         	2
#define SQL_DECIMAL         	3
#define SQL_INTEGER         	4
#define SQL_SMALLINT        	5
#define SQL_FLOAT           	6
#define SQL_REAL            	7
#define SQL_DOUBLE          	8
#define SQL_VARCHAR        	12

/*
** GetTypeInfo() request for all data types
*/
#define SQL_ALL_TYPES		0

/*
** FreeStmt() options
*/
#define SQL_CLOSE           	0
#define SQL_DROP            	1
#define SQL_UNBIND          	2
#define SQL_RESET_PARAMS    	3

/*
** Codes used for FetchOrientation in SQLFetchScroll() and in SQLDataSources()
*/
#define SQL_FETCH_NEXT      	1
#define SQL_FETCH_FIRST     	2

/*
** Other codes used for FetchOrientation in SQLFetchScroll()
*/
#define SQL_FETCH_LAST      	3
#define SQL_FETCH_PRIOR     	4
#define SQL_FETCH_ABSOLUTE  	5
#define SQL_FETCH_RELATIVE  	6

/*
** SQLEndTran() options
*/
#define SQL_COMMIT          	0
#define SQL_ROLLBACK        	1

/*
** Null handles returned by SQLAllocHandle()
*/
#define SQL_NULL_HENV       	0
#define SQL_NULL_HDBC       	0
#define SQL_NULL_HSTMT      	0

/*
** Information requested by SQLGetInfo()
*/
#define SQL_DATA_SOURCE_NAME		 2
#define SQL_FETCH_DIRECTION		 8
#define SQL_SERVER_NAME			 13
#define SQL_SEARCH_PATTERN_ESCAPE        14
#define SQL_DBMS_NAME			 17
#define SQL_DBMS_VER			 18
#define SQL_ACCESSIBLE_TABLES		 19
#define SQL_ACCESSIBLE_PROCEDURES	 20
#define SQL_CURSOR_COMMIT_BEHAVIOR	 23
#define SQL_DATA_SOURCE_READ_ONLY	 25
#define SQL_DEFAULT_TXN_ISOLATION	 26
#define SQL_IDENTIFIER_CASE		 28
#define SQL_IDENTIFIER_QUOTE_CHAR	 29
#define SQL_MAX_COLUMN_NAME_LEN		 30
#define SQL_MAXIMUM_COLUMN_NAME_LENGTH	 SQL_MAX_COLUMN_NAME_LEN
#define SQL_MAX_CURSOR_NAME_LEN		 31
#define SQL_MAXIMUM_CURSOR_NAME_LENGTH	 SQL_MAX_CURSOR_NAME_LEN
#define SQL_MAX_SCHEMA_NAME_LEN		 32
#define SQL_MAXIMUM_SCHEMA_NAME_LENGTH	 SQL_MAX_SCHEMA_NAME_LEN
#define SQL_MAX_CATALOG_NAME_LEN	 34
#define SQL_MAXIMUM_CATALOG_NAME_LENGTH	 SQL_MAX_CATALOG_NAME_LEN
#define SQL_MAX_TABLE_NAME_LEN		 35
#define SQL_SCROLL_CONCURRENCY		 43
#define SQL_TXN_CAPABLE			 46
#define SQL_TRANSACTION_CAPABLE		 SQL_TXN_CAPABLE
#define SQL_USER_NAME			 47
#define SQL_TXN_ISOLATION_OPTION	 72
#define SQL_TRANSACTION_ISOLATION_OPTION SQL_TXN_ISOLATION_OPTION
#define SQL_INTEGRITY			 73
#define SQL_GETDATA_EXTENSIONS		 81
#define SQL_NULL_COLLATION		 85
#define SQL_ALTER_TABLE			 86
#define SQL_ORDER_BY_COLUMNS_IN_SELECT	 90
#define SQL_SPECIAL_CHARACTERS		 94
#define SQL_MAX_COLUMNS_IN_GROUP_BY	 97
#define SQL_MAXIMUM_COLUMNS_IN_GROUP_BY	 SQL_MAX_COLUMNS_IN_GROUP_BY
#define SQL_MAX_COLUMNS_IN_INDEX	 98
#define SQL_MAXIMUM_COLUMNS_IN_INDEX	 SQL_MAX_COLUMNS_IN_INDEX
#define SQL_MAX_COLUMNS_IN_ORDER_BY	 99
#define SQL_MAXIMUM_COLUMNS_IN_ORDER_BY	 SQL_MAX_COLUMNS_IN_ORDER_BY
#define SQL_MAX_COLUMNS_IN_SELECT	 100
#define SQL_MAXIMUM_COLUMNS_IN_SELECT	 SQL_MAX_COLUMNS_IN_SELECT
#define SQL_MAX_COLUMNS_IN_TABLE	 101
#define SQL_MAX_INDEX_SIZE		 102
#define SQL_MAXIMUM_INDEX_SIZE		 SQL_MAX_INDEX_SIZE
#define SQL_MAX_ROW_SIZE		 104
#define SQL_MAXIMUM_ROW_SIZE		 SQL_MAX_ROW_SIZE
#define SQL_MAX_STATEMENT_LEN		 105
#define SQL_MAXIMUM_STATEMENT_LENGTH	 SQL_MAX_STATEMENT_LEN
#define SQL_MAX_TABLES_IN_SELECT	 106
#define SQL_MAXIMUM_TABLES_IN_SELECT	 SQL_MAX_TABLES_IN_SELECT
#define SQL_MAX_USER_NAME_LEN		 107
#define SQL_MAXIMUM_USER_NAME_LENGTH	 SQL_MAX_USER_NAME_LEN

/*
** SQL_FETCH_DIRECTION bitmasks
*/
#define SQL_FD_FETCH_NEXT	0x00000001L
#define SQL_FD_FETCH_FIRST	0x00000002L
#define SQL_FD_FETCH_LAST	0x00000004L
#define SQL_FD_FETCH_PRIOR	0x00000008L
#define SQL_FD_FETCH_ABSOLUTE	0x00000010L
#define SQL_FD_FETCH_RELATIVE	0x00000020L

SQLRETURN SQL_API SQLAllocConnect(
	SQLHENV		EnvironmentHandle,
	SQLHDBC		*ConnectionHandle);

SQLRETURN SQL_API SQLAllocEnv(
	SQLHENV 	*EnvironmentHandle);

SQLRETURN SQL_API SQLAllocStmt(
	SQLHDBC		ConnectionHandle,
	SQLHSTMT	*StatementHandle);

SQLRETURN SQL_API SQLBindCol(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	ColumnNumber,
	SQLSMALLINT	TargetType,
	SQLPOINTER	TargetValue,
	SQLINTEGER	BufferLength,
	SQLINTEGER	*StrLen_or_Ind);

SQLRETURN SQL_API SQLColumns(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLCHAR		*ColumnName,
	SQLSMALLINT	NameLength4);

SQLRETURN SQL_API SQLConnect(
	SQLHDBC		ConnectionHandle,
	SQLCHAR		*ServerName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*UserName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*Authentication,
	SQLSMALLINT	NameLength3);

SQLRETURN SQL_API SQLDataSources(
	SQLHENV		EnvironmentHandle,
        SQLUSMALLINT	Direction,
        SQLCHAR		*ServerName,
	SQLSMALLINT	BufferLength1,
	SQLSMALLINT	*NameLength1,
	SQLCHAR		*Description,
	SQLSMALLINT	BufferLength2,
	SQLSMALLINT	*NameLength2);

SQLRETURN SQL_API SQLDisconnect(
	SQLHDBC		ConnectionHandle);

SQLRETURN SQL_API SQLError(
	SQLHENV		EnvironmentHandle,
	SQLHDBC		ConnectionHandle,
	SQLHSTMT	StatementHandle,
	SQLCHAR		*Sqlstate,
	SQLINTEGER	*NativeError,
	SQLCHAR		*MessageText,
	SQLSMALLINT	BufferLength,
	SQLSMALLINT	*TextLength);

SQLRETURN SQL_API SQLExecDirect(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*StatementText,
	SQLINTEGER	TextLength);

SQLRETURN SQL_API SQLExecute(
	SQLHSTMT	StatementHandle);

SQLRETURN SQL_API SQLFetch(
	SQLHSTMT	StatementHandle);

SQLRETURN SQL_API SQLFreeConnect(
	SQLHDBC		ConnectionHandle);

SQLRETURN SQL_API SQLFreeEnv(
	SQLHENV		EnvironmentHandle);

SQLRETURN SQL_API SQLFreeStmt(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	Option);

SQLRETURN SQL_API SQLGetConnectOption(
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	Option,
	SQLPOINTER	Value);

SQLRETURN SQL_API SQLGetCursorName(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CursorName,
	SQLSMALLINT	BufferLength,
	SQLSMALLINT	*NameLength);

SQLRETURN SQL_API SQLGetData(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	ColumnNumber,
	SQLSMALLINT	TargetType,
	SQLPOINTER	TargetValue,
	SQLINTEGER	BufferLength,
	SQLINTEGER	*StrLen_or_Ind);

SQLRETURN SQL_API SQLGetInfo(
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	InfoType,
	SQLPOINTER	InfoValue,
	SQLSMALLINT	BufferLength,
	SQLSMALLINT	*StringLength);

SQLRETURN SQL_API SQLGetTypeInfo(
	SQLHSTMT	StatementHandle,
	SQLSMALLINT	DataType);

SQLRETURN SQL_API SQLNumResultCols(
	SQLHSTMT	StatementHandle,
	SQLSMALLINT	*ColumnCount);

SQLRETURN SQL_API SQLParamData(
	SQLHSTMT	StatementHandle,
	SQLPOINTER	*Value);

SQLRETURN SQL_API SQLPrepare(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*StatementText,
	SQLINTEGER	TextLength);

SQLRETURN SQL_API SQLPutData(
	SQLHSTMT	StatementHandle,
	SQLPOINTER	Data,
	SQLINTEGER	StrLen_or_Ind);

SQLRETURN SQL_API SQLRowCount(
	SQLHSTMT	StatementHandle,
	SQLINTEGER	*RowCount);

SQLRETURN SQL_API SQLSetConnectOption(
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	Option,
	SQLUINTEGER	Value);

SQLRETURN SQL_API SQLSetCursorName(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CursorName,
	SQLSMALLINT	NameLength);

SQLRETURN SQL_API SQLSetStmtOption(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	Option,
	SQLUINTEGER	Value);

SQLRETURN SQL_API SQLSpecialColumns(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	IdentifierType,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLUSMALLINT	Scope,
	SQLUSMALLINT 	Nullable);

SQLRETURN SQL_API SQLStatistics(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLUSMALLINT	Unique,
	SQLUSMALLINT	Reserved);

SQLRETURN SQL_API SQLTables(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLCHAR		*TableType,
	SQLSMALLINT	NameLength4);

SQLRETURN SQL_API SQLTransact(
	SQLHENV		EnvironmentHandle,
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	CompletionType);

/******************************************************************************/
/***                          SQLEXT.H Definitions                          ***/
/******************************************************************************/

/*
** SQL_ODBC_CURSORS options
*/
#define SQL_CUR_USE_IF_NEEDED	0UL
#define SQL_CUR_USE_ODBC	1UL
#define SQL_CUR_USE_DRIVER	2UL
#define SQL_CUR_DEFAULT		SQL_CUR_USE_DRIVER

/*
** SQL extended datatypes
*/
#define SQL_DATE		9
#define SQL_TIME		10
#define SQL_TIMESTAMP		11
#define SQL_LONGVARCHAR		(-1)
#define SQL_BINARY		(-2)
#define SQL_VARBINARY		(-3)
#define SQL_LONGVARBINARY	(-4)
#define SQL_BIGINT		(-5)
#define SQL_TINYINT		(-6)
#define SQL_BIT			(-7)

#define SQL_C_CHAR    		SQL_CHAR
#define SQL_C_LONG    		SQL_INTEGER
#define SQL_C_SHORT   		SQL_SMALLINT
#define SQL_C_FLOAT   		SQL_REAL
#define SQL_C_DOUBLE  		SQL_DOUBLE
#define SQL_C_DEFAULT 		99

#define SQL_SIGNED_OFFSET       (-20)
#define SQL_UNSIGNED_OFFSET     (-22)

/*
** C datatype to SQL datatype mapping
*/
#define SQL_C_DATE       	SQL_DATE
#define SQL_C_TIME       	SQL_TIME
#define SQL_C_TIMESTAMP  	SQL_TIMESTAMP
#define SQL_C_BINARY     	SQL_BINARY
#define SQL_C_BIT        	SQL_BIT
#define SQL_C_TINYINT    	SQL_TINYINT
#define SQL_C_SLONG      	(SQL_C_LONG+SQL_SIGNED_OFFSET)
#define SQL_C_SSHORT     	(SQL_C_SHORT+SQL_SIGNED_OFFSET)
#define SQL_C_STINYINT   	(SQL_TINYINT+SQL_SIGNED_OFFSET)
#define SQL_C_ULONG      	(SQL_C_LONG+SQL_UNSIGNED_OFFSET)
#define SQL_C_USHORT     	(SQL_C_SHORT+SQL_UNSIGNED_OFFSET)
#define SQL_C_UTINYINT   	(SQL_TINYINT+SQL_UNSIGNED_OFFSET)
#define SQL_C_BOOKMARK   	SQL_C_ULONG

#define SQL_TYPE_NULL		0

/*
** Return code SQL_NO_DATA_FOUND is the same as SQL_NO_DATA
*/
#define SQL_NO_DATA_FOUND	100

/*
** Connection attributes
*/
#define SQL_ACCESS_MODE		101
#define SQL_AUTOCOMMIT		102
#define SQL_LOGIN_TIMEOUT	103
#define SQL_OPT_TRACE		104
#define SQL_OPT_TRACEFILE	105
#define SQL_TRANSLATE_DLL	106
#define SQL_TRANSLATE_OPTION	107
#define SQL_TXN_ISOLATION	108
#define SQL_CURRENT_QUALIFIER	109
#define SQL_ODBC_CURSORS	110
#define SQL_QUIET_MODE		111
#define SQL_PACKET_SIZE		112

/*
** SQL_AUTOCOMMIT options
*/
#define SQL_AUTOCOMMIT_OFF	0UL
#define SQL_AUTOCOMMIT_ON	1UL
#define SQL_AUTOCOMMIT_DEFAULT	SQL_AUTOCOMMIT_ON

/*
** Statement attributes
*/
#define SQL_QUERY_TIMEOUT	0
#define SQL_MAX_ROWS		1
#define SQL_NOSCAN		2
#define SQL_MAX_LENGTH		3
#define SQL_ASYNC_ENABLE	4
#define SQL_BIND_TYPE		5
#define SQL_CURSOR_TYPE		6
#define SQL_CONCURRENCY		7
#define SQL_KEYSET_SIZE		8
#define SQL_ROWSET_SIZE		9
#define SQL_SIMULATE_CURSOR	10
#define SQL_RETRIEVE_DATA	11
#define SQL_USE_BOOKMARKS	12
#define SQL_GET_BOOKMARK	13
#define SQL_ROW_NUMBER		14

/*
** SQL_CONCURRENCY options
*/
#define SQL_CONCUR_READ_ONLY	1
#define SQL_CONCUR_LOCK		2
#define SQL_CONCUR_ROWVER	3
#define SQL_CONCUR_VALUES	4
#define SQL_CONCUR_DEFAULT	SQL_CONCUR_READ_ONLY

/*
** SQL_CURSOR_TYPE options
*/
#define SQL_CURSOR_FORWARD_ONLY	0UL
#define SQL_CURSOR_KEYSET_DRIVEN 1UL
#define SQL_CURSOR_DYNAMIC	2UL
#define SQL_CURSOR_STATIC	3UL
#define SQL_CURSOR_TYPE_DEFAULT	SQL_CURSOR_FORWARD_ONLY

/*
** SQLBindParameter extensions
*/
#define SQL_DEFAULT_PARAM	(-5)
#define SQL_IGNORE		(-6)
#define SQL_LEN_DATA_AT_EXEC_OFFSET (-100)
#define SQL_LEN_DATA_AT_EXEC(length) (-(length)+SQL_LEN_DATA_AT_EXEC_OFFSET)

/*
** SQLColAttributes defines
*/
#define SQL_COLUMN_COUNT	0
#define SQL_COLUMN_NAME		1
#define SQL_COLUMN_TYPE 	2
#define SQL_COLUMN_LENGTH	3
#define SQL_COLUMN_PRECISION	4
#define SQL_COLUMN_SCALE	5
#define SQL_COLUMN_DISPLAY_SIZE	6
#define SQL_COLUMN_NULLABLE	7
#define SQL_COLUMN_UNSIGNED	8
#define SQL_COLUMN_MONEY	9
#define SQL_COLUMN_UPDATABLE	10
#define SQL_COLUMN_AUTO_INCREMENT 11
#define SQL_COLUMN_CASE_SENSITIVE 12
#define SQL_COLUMN_SEARCHABLE	13
#define SQL_COLUMN_TYPE_NAME	14
#define SQL_COLUMN_TABLE_NAME	15
#define SQL_COLUMN_OWNER_NAME	16
#define SQL_COLUMN_QUALIFIER_NAME 17
#define SQL_COLUMN_LABEL	18
#define SQL_COLATT_OPT_MAX	SQL_COLUMN_LABEL
#define SQL_COLUMN_DRIVER_START	1000

/*
** Defines for SQLBindParameter and SQLProcedureColumns
*/
#define SQL_PARAM_TYPE_UNKNOWN	0
#define SQL_PARAM_INPUT		1
#define SQL_PARAM_INPUT_OUTPUT	2
#define SQL_RESULT_COL		3
#define SQL_PARAM_OUTPUT	4
#define SQL_RETURN_VALUE	5

SQLRETURN SQL_API SQLBindParameter(
	SQLHSTMT 	hstmt,
	SQLUSMALLINT	ipar,
	SQLSMALLINT	fParamType,
	SQLSMALLINT	fCType,
	SQLSMALLINT	fSqlType,
	SQLUINTEGER	cbColDef,
	SQLSMALLINT	ibScale,
	SQLPOINTER	rgbValue,
	SQLINTEGER	cbValueMax,
	SQLINTEGER	*pcbValue);

SQLRETURN SQL_API SQLColAttributes(
	SQLHSTMT	hstmt,
	SQLUSMALLINT	icol,
	SQLUSMALLINT	fDescType,
	SQLPOINTER	rgbDesc,
	SQLSMALLINT	cbDescMax,
	SQLSMALLINT	*pcbDesc,
	SQLINTEGER	*pfDesc);

SQLRETURN SQL_API SQLColumnPrivileges(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szTableName,
	SQLSMALLINT	cbTableName,
	SQLCHAR		*szColumnName,
	SQLSMALLINT	cbColumnName);

SQLRETURN SQL_API SQLDescribeParam(
	SQLHSTMT	hstmt,
	SQLUSMALLINT	ipar,
	SQLSMALLINT	*pfSqlType,
	SQLUINTEGER	*pcbParamDef,
	SQLSMALLINT	*pibScale,
	SQLSMALLINT	*pfNullable);

SQLRETURN SQL_API SQLExtendedFetch(
	SQLHSTMT	hstmt,
	SQLUSMALLINT	fFetchType,
	SQLINTEGER	irow,
	SQLUINTEGER	*pcrow,
	SQLUSMALLINT	*rgfRowStatus);

SQLRETURN SQL_API SQLForeignKeys(
	SQLHSTMT	hstmt,
	SQLCHAR		*szPkCatalogName,
	SQLSMALLINT	cbPkCatalogName,
	SQLCHAR		*szPkSchemaName,
	SQLSMALLINT	cbPkSchemaName,
	SQLCHAR		*szPkTableName,
	SQLSMALLINT	cbPkTableName,
	SQLCHAR		*szFkCatalogName,
	SQLSMALLINT	cbFkCatalogName,
	SQLCHAR		*szFkSchemaName,
	SQLSMALLINT	cbFkSchemaName,
	SQLCHAR		*szFkTableName,
	SQLSMALLINT	cbFkTableName);

SQLRETURN SQL_API SQLMoreResults(
	SQLHSTMT	hstmt);

SQLRETURN SQL_API SQLNumParams(
	SQLHSTMT	hstmt,
	SQLSMALLINT	*pcpar);

SQLRETURN SQL_API SQLPrimaryKeys(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szTableName,
	SQLSMALLINT	cbTableName);

SQLRETURN SQL_API SQLProcedureColumns(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szProcName,
	SQLSMALLINT	cbProcName,
	SQLCHAR		*szColumnName,
	SQLSMALLINT	cbColumnName);

SQLRETURN SQL_API SQLProcedures(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szProcName,
	SQLSMALLINT	cbProcName);

SQLRETURN SQL_API SQLTablePrivileges(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szTableName,
	SQLSMALLINT	cbTableName);

#define SQLLEN long
typedef unsigned long   SQLULEN;

#endif	/* __ODBC_H */
