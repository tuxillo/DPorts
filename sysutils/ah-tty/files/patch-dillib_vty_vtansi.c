
$FreeBSD: ports/sysutils/ah-tty/files/patch-dillib_vty_vtansi.c,v 1.2 2012/11/17 06:01:24 svnexp Exp $

--- dillib/vty/vtansi.c.orig	Mon Aug  9 15:44:41 2004
+++ dillib/vty/vtansi.c	Mon Aug  9 15:44:56 2004
@@ -688,6 +688,7 @@
 #ifdef FAST_FAIL
 	    fprintf(stderr, "100 mode: %d\n", mode); //exit(-1);
 #endif
+	    break;
     }
 }
 
@@ -701,6 +702,7 @@
 #ifdef FAST_FAIL
 	    fprintf(stderr, "100 mode: %d\n", mode); //exit(-1);
 #endif
+	    break;
     }
 }
 
