
$FreeBSD: ports/mail/exim/files/patch-src::auths::call_radius.c,v 1.2 2012/11/17 05:59:02 svnexp Exp $

--- src/auths/call_radius.c
+++ src/auths/call_radius.c
@@ -38,7 +38,11 @@
   #if !defined(RADIUS_LIB_RADIUSCLIENT) && !defined(RADIUS_LIB_RADIUSCLIENTNEW)
   #define RADIUS_LIB_RADIUSCLIENT
   #endif
+  #if !defined(RADIUS_LIB_RADIUSCLIENTNEW)
   #include <radiusclient.h>
+  #else
+  #include <radiusclient-ng.h>
+  #endif
 #endif
 
 
