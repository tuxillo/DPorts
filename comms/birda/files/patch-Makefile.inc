
$FreeBSD: ports/comms/birda/files/patch-Makefile.inc,v 1.2 2012/11/17 05:54:59 svnexp Exp $

--- Makefile.inc	2002/07/16 17:28:32	1.1
+++ Makefile.inc	2002/07/16 17:28:40
@@ -1,5 +1,3 @@
-.include <bsd.own.mk>
-
 CFLAGS+=	-I${.CURDIR}/../src
 
 PREFIX?= /usr/pkg
@@ -12,8 +10,6 @@
 .endif
 
 MKLINT=no
-
-.include <bsd.obj.mk>
 
 LDADD+=         -L${.CURDIR}/../lib -lirda
 DPADD+=         ${.CURDIR}/../lib/libirda.a
