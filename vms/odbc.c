#pragma module ODBC "V1.00"

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

/*
**
**  FACILITY:
**
**      Secure Web Server
**
**  ABSTRACT:
**
**	Interface for Standard ODBC APIs
**
**  AUTHOR:
**
**      Matthew Doremus
**
**
**  CREATION DATE:   August 29, 2001
**
**  MODIFICATION HISTORY:
**
**  V1.00 	        Matthew Doremus                 29-Aug-2001
**        Initial development.
**
*/

#ifndef __NEW_STARLET
#define __NEW_STARLET
#define __NEW_STARLET_SET
#endif

#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <errno.h>
#include <stdio.h>
#include <ssdef.h>

#include "odbc.h"

#ifdef  __NEW_STARLET_SET
#undef  __NEW_STARLET_SET
#undef  __NEW_STARLET
#endif

/*
** Define the shareable image & entry points
*/
#ifndef ODBC_SQLImage
#define ODBC_SQLImage		"PHP$ODBC_SHR"
#endif
#ifndef ODBC_SQLPrefix
#define ODBC_SQLPrefix		"PHP$ODBC_PFX"
#endif
#ifndef ODBC_SQLAllocConnect
#define ODBC_SQLAllocConnect	"SQLAllocConnect"
#endif
#ifndef ODBC_SQLAllocEnv
#define ODBC_SQLAllocEnv	"SQLAllocEnv"
#endif
#ifndef ODBC_SQLAllocStmt
#define ODBC_SQLAllocStmt	"SQLAllocStmt"
#endif
#ifndef ODBC_SQLBindCol
#define ODBC_SQLBindCol		"SQLBindCol"
#endif
#ifndef ODBC_SQLBindParameter
#define ODBC_SQLBindParameter	"SQLBindParameter"
#endif
#ifndef ODBC_SQLColAttributes
#define ODBC_SQLColAttributes	"SQLColAttributes"
#endif
#ifndef ODBC_SQLColumnPrivileges
#define ODBC_SQLColumnPrivileges "SQLColumnPrivileges"
#endif
#ifndef ODBC_SQLColumns
#define ODBC_SQLColumns		"SQLColumns"
#endif
#ifndef ODBC_SQLConnect
#define ODBC_SQLConnect		"SQLConnect"
#endif
#ifndef ODBC_SQLDataSources
#define ODBC_SQLDataSources	"SQLDataSources"
#endif
#ifndef ODBC_SQLDescribeParam
#define ODBC_SQLDescribeParam	"SQLDescribeParam"
#endif
#ifndef ODBC_SQLDisconnect
#define ODBC_SQLDisconnect	"SQLDisconnect"
#endif
#ifndef ODBC_SQLError
#define ODBC_SQLError		"SQLError"
#endif
#ifndef ODBC_SQLExtendedFetch
#define ODBC_SQLExtendedFetch	"SQLExtendedFetch"
#endif
#ifndef ODBC_SQLExecDirect
#define ODBC_SQLExecDirect	"SQLExecDirect"
#endif
#ifndef ODBC_SQLExecute
#define ODBC_SQLExecute		"SQLExecute"
#endif
#ifndef ODBC_SQLFetch
#define ODBC_SQLFetch		"SQLFetch"
#endif
#ifndef ODBC_SQLForeignKeys
#define ODBC_SQLForeignKeys	"SQLForeignKeys"
#endif
#ifndef ODBC_SQLFreeConnect
#define ODBC_SQLFreeConnect	"SQLFreeConnect"
#endif
#ifndef ODBC_SQLFreeEnv
#define ODBC_SQLFreeEnv		"SQLFreeEnv"
#endif
#ifndef ODBC_SQLFreeStmt
#define ODBC_SQLFreeStmt	"SQLFreeStmt"
#endif
#ifndef ODBC_SQLGetConnectOption
#define ODBC_SQLGetConnectOption "SQLGetConnectOption"
#endif
#ifndef ODBC_SQLGetCursorName
#define ODBC_SQLGetCursorName	"SQLGetCursorName"
#endif
#ifndef ODBC_SQLGetData
#define ODBC_SQLGetData		"SQLGetData"
#endif
#ifndef ODBC_SQLGetInfo
#define ODBC_SQLGetInfo		"SQLGetInfo"
#endif
#ifndef ODBC_SQLGetTypeInfo
#define ODBC_SQLGetTypeInfo	"SQLGetTypeInfo"
#endif
#ifndef ODBC_SQLMoreResults
#define ODBC_SQLMoreResults	"SQLMoreResults"
#endif
#ifndef ODBC_SQLNumParams
#define ODBC_SQLNumParams	"SQLNumParams"
#endif
#ifndef ODBC_SQLNumResultCols
#define ODBC_SQLNumResultCols	"SQLNumResultCols"
#endif
#ifndef ODBC_SQLParamData
#define ODBC_SQLParamData	"SQLParamData"
#endif
#ifndef ODBC_SQLPrepare
#define ODBC_SQLPrepare		"SQLPrepare"
#endif
#ifndef ODBC_SQLPrimaryKeys
#define ODBC_SQLPrimaryKeys	"SQLPrimaryKeys"
#endif
#ifndef ODBC_SQLProcedureColumns
#define ODBC_SQLProcedureColumns "SQLProcedureColumns"
#endif
#ifndef ODBC_SQLProcedures
#define ODBC_SQLProcedures	"SQLProcedures"
#endif
#ifndef ODBC_SQLPutData
#define ODBC_SQLPutData		"SQLPutData"
#endif
#ifndef ODBC_SQLRowCount
#define ODBC_SQLRowCount	"SQLRowCount"
#endif
#ifndef ODBC_SQLSetConnectOption
#define ODBC_SQLSetConnectOption "SQLSetConnectOption"
#endif
#ifndef ODBC_SQLSetCursorName
#define ODBC_SQLSetCursorName	"SQLSetCursorName"
#endif
#ifndef ODBC_SQLSetStmtOption
#define ODBC_SQLSetStmtOption	"SQLSetStmtOption"
#endif
#ifndef ODBC_SQLSpecialColumns
#define ODBC_SQLSpecialColumns	"SQLSpecialColumns"
#endif
#ifndef ODBC_SQLStatistics
#define ODBC_SQLStatistics	"SQLStatistics"
#endif
#ifndef ODBC_SQLTablePrivileges
#define ODBC_SQLTablePrivileges	"SQLTablePrivileges"
#endif
#ifndef ODBC_SQLTables
#define ODBC_SQLTables		"SQLTables"
#endif
#ifndef ODBC_SQLTransact
#define ODBC_SQLTransact	"SQLTransact"
#endif

#ifndef MIN
#define MIN(a,b) (a < b ? a : b)
#endif
#ifndef MAX
#define MAX(a,b) (a > b ? a : b)
#endif

#ifndef ENOTSUP_MSG
#define ENOTSUP_MSG "unsupported operation or function"
#endif

static void *LoadSymbol (char *name);

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLAllocConnect(
	SQLHENV		EnvironmentHandle,
	SQLHDBC		*ConnectionHandle)
{
static SQLRETURN (*_SQLAllocConnect) () = (SQLRETURN (*)()) -1;

if ((int) _SQLAllocConnect < 0)
    _SQLAllocConnect = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLAllocConnect);
if (! _SQLAllocConnect)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLAllocConnect(
		EnvironmentHandle,
		ConnectionHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLAllocEnv(
	SQLHENV 	*EnvironmentHandle)
{
static SQLRETURN (*_SQLAllocEnv) () = (SQLRETURN (*)()) -1;

if ((int) _SQLAllocEnv < 0)
    _SQLAllocEnv = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLAllocEnv);
if (! _SQLAllocEnv)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLAllocEnv(
		EnvironmentHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLAllocStmt(
	SQLHDBC		ConnectionHandle,
	SQLHSTMT	*StatementHandle)
{
static SQLRETURN (*_SQLAllocStmt) () = (SQLRETURN (*)()) -1;

if ((int) _SQLAllocStmt < 0)
    _SQLAllocStmt = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLAllocStmt);
if (! _SQLAllocStmt)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLAllocStmt(
		ConnectionHandle,
		StatementHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLBindCol(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	ColumnNumber,
	SQLSMALLINT	TargetType,
	SQLPOINTER	TargetValue,
	SQLINTEGER	BufferLength,
	SQLINTEGER	*StrLen_or_Ind)
{
static SQLRETURN (*_SQLBindCol) () = (SQLRETURN (*)()) -1;

if ((int) _SQLBindCol < 0)
    _SQLBindCol = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLBindCol);
if (! _SQLBindCol)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLBindCol(
		StatementHandle,
		ColumnNumber,
		TargetType,
		TargetValue,
		BufferLength,
		StrLen_or_Ind));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLColumns(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLCHAR		*ColumnName,
	SQLSMALLINT	NameLength4)
{
static SQLRETURN (*_SQLColumns) () = (SQLRETURN (*)()) -1;

if ((int) _SQLColumns < 0)
    _SQLColumns = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLColumns);
if (! _SQLColumns)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLColumns(
		StatementHandle,
		CatalogName,
		NameLength1,
		SchemaName,
		NameLength2,
		TableName,
		NameLength3,
		ColumnName,
		NameLength4));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLConnect(
	SQLHDBC		ConnectionHandle,
	SQLCHAR		*ServerName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*UserName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*Authentication,
	SQLSMALLINT	NameLength3)
{
static SQLRETURN (*_SQLConnect) () = (SQLRETURN (*)()) -1;

if ((int) _SQLConnect < 0)
    _SQLConnect = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLConnect);
if (! _SQLConnect)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLConnect(
		ConnectionHandle,
		ServerName,
		NameLength1,
		UserName,
		NameLength2,
		Authentication,
		NameLength3));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLDataSources(
	SQLHENV		EnvironmentHandle,
        SQLUSMALLINT	Direction,
        SQLCHAR		*ServerName,
	SQLSMALLINT	BufferLength1,
	SQLSMALLINT	*NameLength1,
	SQLCHAR		*Description,
	SQLSMALLINT	BufferLength2,
	SQLSMALLINT	*NameLength2)
{
static SQLRETURN (*_SQLDataSources) () = (SQLRETURN (*)()) -1;

if ((int) _SQLDataSources < 0)
    _SQLDataSources = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLDataSources);
if (! _SQLDataSources)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLDataSources(
		EnvironmentHandle,
        	Direction,
        	ServerName,
		BufferLength1,
		NameLength1,
		Description,
		BufferLength2,
		NameLength2));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLDisconnect(
	SQLHDBC		ConnectionHandle)
{
static SQLRETURN (*_SQLDisconnect) () = (SQLRETURN (*)()) -1;

if ((int) _SQLDisconnect < 0)
    _SQLDisconnect = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLDisconnect);
if (! _SQLDisconnect)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLDisconnect(
		ConnectionHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLError(
	SQLHENV		EnvironmentHandle,
	SQLHDBC		ConnectionHandle,
	SQLHSTMT	StatementHandle,
	SQLCHAR		*Sqlstate,
	SQLINTEGER	*NativeError,
	SQLCHAR		*MessageText,
	SQLSMALLINT	BufferLength,
	SQLSMALLINT	*TextLength)
{
static SQLRETURN (*_SQLError) () = (SQLRETURN (*)()) -1;

if ((int) _SQLError < 0)
    _SQLError = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLError);
if (! _SQLError)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    strcpy (Sqlstate, "UNSUP");
    *NativeError = SS$_UNSUPPORTED;
    strncpy (MessageText, ENOTSUP_MSG, MIN (BufferLength, strlen (ENOTSUP_MSG)));
    *TextLength = MIN (BufferLength, strlen (ENOTSUP_MSG));
    return (SQL_ERROR);
    }

return (_SQLError(
		EnvironmentHandle,
		ConnectionHandle,
		StatementHandle,
		Sqlstate,
		NativeError,
		MessageText,
		BufferLength,
		TextLength));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLExecDirect(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*StatementText,
	SQLINTEGER	TextLength)
{
static SQLRETURN (*_SQLExecDirect) () = (SQLRETURN (*)()) -1;

if ((int) _SQLExecDirect < 0)
    _SQLExecDirect = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLExecDirect);
if (! _SQLExecDirect)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLExecDirect(
		StatementHandle,
		StatementText,
		TextLength));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLExecute(
	SQLHSTMT	StatementHandle)
{
static SQLRETURN (*_SQLExecute) () = (SQLRETURN (*)()) -1;

if ((int) _SQLExecute < 0)
    _SQLExecute = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLExecute);
if (! _SQLExecute)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLExecute(
		StatementHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLFetch(
	SQLHSTMT	StatementHandle)
{
static SQLRETURN (*_SQLFetch) () = (SQLRETURN (*)()) -1;

if ((int) _SQLFetch < 0)
    _SQLFetch = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLFetch);
if (! _SQLFetch)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLFetch(
		StatementHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLFreeConnect(
	SQLHDBC		ConnectionHandle)
{
static SQLRETURN (*_SQLFreeConnect) () = (SQLRETURN (*)()) -1;

if ((int) _SQLFreeConnect < 0)
    _SQLFreeConnect = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLFreeConnect);
if (! _SQLFreeConnect)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLFreeConnect(
		ConnectionHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLFreeEnv(
	SQLHENV		EnvironmentHandle)
{
static SQLRETURN (*_SQLFreeEnv) () = (SQLRETURN (*)()) -1;

if ((int) _SQLFreeEnv < 0)
    _SQLFreeEnv = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLFreeEnv);
if (! _SQLFreeEnv)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLFreeEnv(
		EnvironmentHandle));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLFreeStmt(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	Option)
{
static SQLRETURN (*_SQLFreeStmt) () = (SQLRETURN (*)()) -1;

if ((int) _SQLFreeStmt < 0)
    _SQLFreeStmt = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLFreeStmt);
if (! _SQLFreeStmt)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLFreeStmt(
		StatementHandle,
		Option));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLGetConnectOption(
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	Option,
	SQLPOINTER	Value)
{
static SQLRETURN (*_SQLGetConnectOption) () = (SQLRETURN (*)()) -1;

if ((int) _SQLGetConnectOption < 0)
    _SQLGetConnectOption = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLGetConnectOption);
if (! _SQLGetConnectOption)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLGetConnectOption(
		ConnectionHandle,
		Option,
		Value));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLGetCursorName(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CursorName,
	SQLSMALLINT	BufferLength,
	SQLSMALLINT	*NameLength)
{
static SQLRETURN (*_SQLGetCursorName) () = (SQLRETURN (*)()) -1;

if ((int) _SQLGetCursorName < 0)
    _SQLGetCursorName = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLGetCursorName);
if (! _SQLGetCursorName)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLGetCursorName(
		StatementHandle,
		CursorName,
		BufferLength,
		NameLength));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLGetData(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	ColumnNumber,
	SQLSMALLINT	TargetType,
	SQLPOINTER	TargetValue,
	SQLINTEGER	BufferLength,
	SQLINTEGER	*StrLen_or_Ind)
{
static SQLRETURN (*_SQLGetData) () = (SQLRETURN (*)()) -1;

if ((int) _SQLGetData < 0)
    _SQLGetData = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLGetData);
if (! _SQLGetData)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLGetData(
		StatementHandle,
		ColumnNumber,
		TargetType,
		TargetValue,
		BufferLength,
		StrLen_or_Ind));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLGetInfo(
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	InfoType,
	SQLPOINTER	InfoValue,
	SQLSMALLINT	BufferLength,
	SQLSMALLINT	*StringLength)
{
static SQLRETURN (*_SQLGetInfo) () = (SQLRETURN (*)()) -1;

if ((int) _SQLGetInfo < 0)
    _SQLGetInfo = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLGetInfo);
if (! _SQLGetInfo)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLGetInfo(
		ConnectionHandle,
		InfoType,
		InfoValue,
		BufferLength,
		StringLength));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLGetTypeInfo(
	SQLHSTMT	StatementHandle,
	SQLSMALLINT	DataType)
{
static SQLRETURN (*_SQLGetTypeInfo) () = (SQLRETURN (*)()) -1;

if ((int) _SQLGetTypeInfo < 0)
    _SQLGetTypeInfo = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLGetTypeInfo);
if (! _SQLGetTypeInfo)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLGetTypeInfo(
		StatementHandle,
		DataType));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLNumResultCols(
	SQLHSTMT	StatementHandle,
	SQLSMALLINT	*ColumnCount)
{
static SQLRETURN (*_SQLNumResultCols) () = (SQLRETURN (*)()) -1;

if ((int) _SQLNumResultCols < 0)
    _SQLNumResultCols = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLNumResultCols);
if (! _SQLNumResultCols)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLNumResultCols(
		StatementHandle,
		ColumnCount));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLParamData(
	SQLHSTMT	StatementHandle,
	SQLPOINTER	*Value)
{
static SQLRETURN (*_SQLParamData) () = (SQLRETURN (*)()) -1;

if ((int) _SQLParamData < 0)
    _SQLParamData = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLParamData);
if (! _SQLParamData)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLParamData(
		StatementHandle,
		Value));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLPrepare(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*StatementText,
	SQLINTEGER	TextLength)
{
static SQLRETURN (*_SQLPrepare) () = (SQLRETURN (*)()) -1;

if ((int) _SQLPrepare < 0)
    _SQLPrepare = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLPrepare);
if (! _SQLPrepare)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLPrepare(
		StatementHandle,
		StatementText,
		TextLength));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLPutData(
	SQLHSTMT	StatementHandle,
	SQLPOINTER	Data,
	SQLINTEGER	StrLen_or_Ind)
{
static SQLRETURN (*_SQLPutData) () = (SQLRETURN (*)()) -1;

if ((int) _SQLPutData < 0)
    _SQLPutData = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLPutData);
if (! _SQLPutData)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLPutData(
		StatementHandle,
		Data,
		StrLen_or_Ind));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLRowCount(
	SQLHSTMT	StatementHandle,
	SQLINTEGER	*RowCount)
{
static SQLRETURN (*_SQLRowCount) () = (SQLRETURN (*)()) -1;

if ((int) _SQLRowCount < 0)
    _SQLRowCount = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLRowCount);
if (! _SQLRowCount)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLRowCount(
		StatementHandle,
		RowCount));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLSetConnectOption(
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	Option,
	SQLUINTEGER	Value)
{
static SQLRETURN (*_SQLSetConnectOption) () = (SQLRETURN (*)()) -1;

if ((int) _SQLSetConnectOption < 0)
    _SQLSetConnectOption = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLSetConnectOption);
if (! _SQLSetConnectOption)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLSetConnectOption(
		ConnectionHandle,
		Option,
		Value));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLSetCursorName(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CursorName,
	SQLSMALLINT	NameLength)
{
static SQLRETURN (*_SQLSetCursorName) () = (SQLRETURN (*)()) -1;

if ((int) _SQLSetCursorName < 0)
    _SQLSetCursorName = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLSetCursorName);
if (! _SQLSetCursorName)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLSetCursorName(
		StatementHandle,
		CursorName,
		NameLength));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLSetStmtOption(
	SQLHSTMT	StatementHandle,
	SQLUSMALLINT	Option,
	SQLUINTEGER	Value)
{
static SQLRETURN (*_SQLSetStmtOption) () = (SQLRETURN (*)()) -1;

if ((int) _SQLSetStmtOption < 0)
    _SQLSetStmtOption = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLSetStmtOption);
if (! _SQLSetStmtOption)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLSetStmtOption(
		StatementHandle,
		Option,
		Value));


}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
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
	SQLUSMALLINT 	Nullable)
{
static SQLRETURN (*_SQLSpecialColumns) () = (SQLRETURN (*)()) -1;

if ((int) _SQLSpecialColumns < 0)
    _SQLSpecialColumns = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLSpecialColumns);
if (! _SQLSpecialColumns)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLSpecialColumns(
		StatementHandle,
		IdentifierType,
		CatalogName,
		NameLength1,
		SchemaName,
		NameLength2,
		TableName,
		NameLength3,
		Scope,
		Nullable));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLStatistics(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLUSMALLINT	Unique,
	SQLUSMALLINT	Reserved)
{
static SQLRETURN (*_SQLStatistics) () = (SQLRETURN (*)()) -1;

if ((int) _SQLStatistics < 0)
    _SQLStatistics = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLStatistics);
if (! _SQLStatistics)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLStatistics(
		StatementHandle,
		CatalogName,
		NameLength1,
		SchemaName,
		NameLength2,
		TableName,
		NameLength3,
		Unique,
		Reserved));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLTables(
	SQLHSTMT	StatementHandle,
	SQLCHAR		*CatalogName,
	SQLSMALLINT	NameLength1,
	SQLCHAR		*SchemaName,
	SQLSMALLINT	NameLength2,
	SQLCHAR		*TableName,
	SQLSMALLINT	NameLength3,
	SQLCHAR		*TableType,
	SQLSMALLINT	NameLength4)
{
static SQLRETURN (*_SQLTables) () = (SQLRETURN (*)()) -1;

if ((int) _SQLTables < 0)
    _SQLTables = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLTables);
if (! _SQLTables)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLTables(
		StatementHandle,
		CatalogName,
		NameLength1,
		SchemaName,
		NameLength2,
		TableName,
		NameLength3,
		TableType,
		NameLength4));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLTransact(
	SQLHENV		EnvironmentHandle,
	SQLHDBC		ConnectionHandle,
	SQLUSMALLINT	CompletionType)
{
static SQLRETURN (*_SQLTransact) () = (SQLRETURN (*)()) -1;

if ((int) _SQLTransact < 0)
    _SQLTransact = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLTransact);
if (! _SQLTransact)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLTransact(
		EnvironmentHandle,
		ConnectionHandle,
		CompletionType));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
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
	SQLINTEGER	*pcbValue)
{
static SQLRETURN (*_SQLBindParameter) () = (SQLRETURN (*)()) -1;

if ((int) _SQLBindParameter < 0)
    _SQLBindParameter = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLBindParameter);
if (! _SQLBindParameter)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLBindParameter(
		hstmt,
		ipar,
		fParamType,
		fCType,
		fSqlType,
		cbColDef,
		ibScale,
		rgbValue,
		cbValueMax,
		pcbValue));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLColAttributes(
	SQLHSTMT	hstmt,
	SQLUSMALLINT	icol,
	SQLUSMALLINT	fDescType,
	SQLPOINTER	rgbDesc,
	SQLSMALLINT	cbDescMax,
	SQLSMALLINT	*pcbDesc,
	SQLINTEGER	*pfDesc)
{
static SQLRETURN (*_SQLColAttributes) () = (SQLRETURN (*)()) -1;

if ((int) _SQLColAttributes < 0)
    _SQLColAttributes = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLColAttributes);
if (! _SQLColAttributes)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLColAttributes(
		hstmt,
		icol,
		fDescType,
		rgbDesc,
		cbDescMax,
		pcbDesc,
		pfDesc));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLColumnPrivileges(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szTableName,
	SQLSMALLINT	cbTableName,
	SQLCHAR		*szColumnName,
	SQLSMALLINT	cbColumnName)
{
static SQLRETURN (*_SQLColumnPrivileges) () = (SQLRETURN (*)()) -1;

if ((int) _SQLColumnPrivileges < 0)
    _SQLColumnPrivileges = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLColumnPrivileges);
if (! _SQLColumnPrivileges)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLColumnPrivileges(
		hstmt,
		szCatalogName,
		cbCatalogName,
		szSchemaName,
		cbSchemaName,
		szTableName,
		cbTableName,
		szColumnName,
		cbColumnName));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLDescribeParam(
	SQLHSTMT	hstmt,
	SQLUSMALLINT	ipar,
	SQLSMALLINT	*pfSqlType,
	SQLUINTEGER	*pcbParamDef,
	SQLSMALLINT	*pibScale,
	SQLSMALLINT	*pfNullable)
{
static SQLRETURN (*_SQLDescribeParam) () = (SQLRETURN (*)()) -1;

if ((int) _SQLDescribeParam < 0)
    _SQLDescribeParam = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLDescribeParam);
if (! _SQLDescribeParam)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLDescribeParam(
		hstmt,
		ipar,
		pfSqlType,
		pcbParamDef,
		pibScale,
		pfNullable));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLExtendedFetch(
	SQLHSTMT	hstmt,
	SQLUSMALLINT	fFetchType,
	SQLINTEGER	irow,
	SQLUINTEGER	*pcrow,
	SQLUSMALLINT	*rgfRowStatus)
{
static SQLRETURN (*_SQLExtendedFetch) () = (SQLRETURN (*)()) -1;

if ((int) _SQLExtendedFetch < 0)
    _SQLExtendedFetch = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLExtendedFetch);
if (! _SQLExtendedFetch)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLExtendedFetch(
		hstmt,
		fFetchType,
		irow,
		pcrow,
		rgfRowStatus));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
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
	SQLSMALLINT	cbFkTableName)
{
static SQLRETURN (*_SQLForeignKeys) () = (SQLRETURN (*)()) -1;

if ((int) _SQLForeignKeys < 0)
    _SQLForeignKeys = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLForeignKeys);
if (! _SQLForeignKeys)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLForeignKeys(
		hstmt,
		szPkCatalogName,
		cbPkCatalogName,
		szPkSchemaName,
		cbPkSchemaName,
		szPkTableName,
		cbPkTableName,
		szFkCatalogName,
		cbFkCatalogName,
		szFkSchemaName,
		cbFkSchemaName,
		szFkTableName,
		cbFkTableName));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLMoreResults(
	SQLHSTMT	hstmt)
{
static SQLRETURN (*_SQLMoreResults) () = (SQLRETURN (*)()) -1;

if ((int) _SQLMoreResults < 0)
    _SQLMoreResults = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLMoreResults);
if (! _SQLMoreResults)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLMoreResults(
		hstmt));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLNumParams(
	SQLHSTMT	hstmt,
	SQLSMALLINT	*pcpar)
{
static SQLRETURN (*_SQLNumParams) () = (SQLRETURN (*)()) -1;

if ((int) _SQLNumParams < 0)
    _SQLNumParams = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLNumParams);
if (! _SQLNumParams)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLNumParams(
		hstmt,
		pcpar));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLPrimaryKeys(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szTableName,
	SQLSMALLINT	cbTableName)
{
static SQLRETURN (*_SQLPrimaryKeys) () = (SQLRETURN (*)()) -1;

if ((int) _SQLPrimaryKeys < 0)
    _SQLPrimaryKeys = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLPrimaryKeys);
if (! _SQLPrimaryKeys)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLPrimaryKeys(
		hstmt,
		szCatalogName,
		cbCatalogName,
		szSchemaName,
		cbSchemaName,
		szTableName,
		cbTableName));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLProcedureColumns(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szProcName,
	SQLSMALLINT	cbProcName,
	SQLCHAR		*szColumnName,
	SQLSMALLINT	cbColumnName)
{
static SQLRETURN (*_SQLProcedureColumns) () = (SQLRETURN (*)()) -1;

if ((int) _SQLProcedureColumns < 0)
    _SQLProcedureColumns = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLProcedureColumns);
if (! _SQLProcedureColumns)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLProcedureColumns(
		hstmt,
		szCatalogName,
		cbCatalogName,
		szSchemaName,
		cbSchemaName,
		szProcName,
		cbProcName,
		szColumnName,
		cbColumnName));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLProcedures(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szProcName,
	SQLSMALLINT	cbProcName)
{
static SQLRETURN (*_SQLProcedures) () = (SQLRETURN (*)()) -1;

if ((int) _SQLProcedures < 0)
    _SQLProcedures = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLProcedures);
if (! _SQLProcedures)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLProcedures(
		hstmt,
		szCatalogName,
		cbCatalogName,
		szSchemaName,
		cbSchemaName,
		szProcName,
		cbProcName));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
SQLRETURN SQL_API SQLTablePrivileges(
	SQLHSTMT	hstmt,
	SQLCHAR		*szCatalogName,
	SQLSMALLINT	cbCatalogName,
	SQLCHAR		*szSchemaName,
	SQLSMALLINT	cbSchemaName,
	SQLCHAR		*szTableName,
	SQLSMALLINT	cbTableName)
{
static SQLRETURN (*_SQLTablePrivileges) () = (SQLRETURN (*)()) -1;

if ((int) _SQLTablePrivileges < 0)
    _SQLTablePrivileges = (SQLRETURN (*)()) LoadSymbol (ODBC_SQLTablePrivileges);
if (! _SQLTablePrivileges)
    {
    errno = ENOTSUP;
    vaxc$errno = SS$_UNSUPPORTED;
    return (SQL_ERROR);
    }

return (_SQLTablePrivileges(
		hstmt,
		szCatalogName,
		cbCatalogName,
		szSchemaName,
		cbSchemaName,
		szTableName,
		cbTableName));

}

/******************************************************************************/
/***                                                                        ***/
/******************************************************************************/
static void *LoadSymbol (char *name)
{
static void *ODBC_Shr_Handle = (void *) -1;
static char *ODBC_Sym_Prefix = (void *) -1;
static char *ODBC_Sym_Name = NULL;
static int ODBC_Sym_Size = 0;

/*
** Load the image if it hasn't been loaded already
*/
if ((int) ODBC_Shr_Handle < 0)
    ODBC_Shr_Handle = dlopen (ODBC_SQLImage, 0);
if (! ODBC_Shr_Handle)
    return (NULL);

/*
** Load the symbol prefix if it hasn't been loaded already
*/
if ((int) ODBC_Sym_Prefix < 0)
    {
    ODBC_Sym_Prefix = getenv (ODBC_SQLPrefix);
    if (! ODBC_Sym_Prefix)
	ODBC_Sym_Prefix = "";
    }

/*
** Allocate the symbol name buffer
*/
if (strlen (ODBC_Sym_Prefix) + strlen (name) > ODBC_Sym_Size)
    {
    if (ODBC_Sym_Name)
	free (ODBC_Sym_Name);
    ODBC_Sym_Size = MAX (strlen (ODBC_Sym_Prefix) + strlen (name), 32);
    ODBC_Sym_Name = malloc (ODBC_Sym_Size + 1);
    }

/*
** Construct the entry point name
*/
sprintf (ODBC_Sym_Name, "%s%s", ODBC_Sym_Prefix, name);

/*
** Return the status of the symbol lookup
*/
return (dlsym (ODBC_Shr_Handle, ODBC_Sym_Name));

}
