--- odbcapi.c.orig	2009-01-26 23:29:21.000000000 +0600
+++ odbcapi.c	2009-01-26 23:30:15.000000000 +0600
@@ -1111,11 +1111,7 @@
 				 HSTMT hstmt,
 				 SQLUSMALLINT fFetchType,
 				 SQLLEN irow,
-#ifdef WITH_UNIXODBC
-				 SQLROWSETSIZE *pcrow,
-#else
 				 SQLULEN *pcrow,
-#endif /* WITH_UNIXODBC */
 				 SQLUSMALLINT *rgfRowStatus)
 {
 	RETCODE	ret;
@@ -1125,17 +1121,7 @@
 	ENTER_STMT_CS(stmt);
 	SC_clear_error(stmt);
 	StartRollbackState(stmt);
-#ifdef WITH_UNIXODBC
-	{
-		SQLULEN	retrieved;
-
-		ret = PGAPI_ExtendedFetch(hstmt, fFetchType, irow, &retrieved, rgfRowStatus, 0, SC_get_ARDF(stmt)->size_of_rowset_odbc2);
-		if (pcrow)
-			*pcrow = retrieved;
-	}
-#else
 	ret = PGAPI_ExtendedFetch(hstmt, fFetchType, irow, pcrow, rgfRowStatus, 0, SC_get_ARDF(stmt)->size_of_rowset_odbc2);
-#endif /* WITH_UNIXODBC */
 	stmt->transition_status = STMT_TRANSITION_EXTENDED_FETCH;
 	ret = DiscardStatementSvp(stmt, ret, FALSE);
 	LEAVE_STMT_CS(stmt);
