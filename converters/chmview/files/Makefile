# $FreeBSD: ports/converters/chmview/files/Makefile,v 1.5 2012/11/17 05:55:02 svnexp Exp $

BINDIR?=	${PREFIX}/bin

CFLAGS+=	-DUNIX -I${LOCALBASE}/include
LDADD+=		-L${LOCALBASE}/lib -lchm

WARNS?=		6

NO_MAN=		yes

PROG=		chmview

SRCS=		chmview.c utf8.h utf8.c

.include <bsd.prog.mk>
