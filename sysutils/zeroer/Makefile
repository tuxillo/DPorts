# New ports collection makefile for:	zeroer
# Date created:				2 Jan 2006
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/zeroer/Makefile,v 1.6 2012/11/17 06:01:51 svnexp Exp $
#

PORTNAME=	zeroer
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A command line utility for wiping unallocated space on a filesystem

LIB_DEPENDS=	popt:${PORTSDIR}/devel/popt

MAKE_JOBS_SAFE=	yes

MAN1=		zeroer.1
PLIST_FILES=	bin/zeroer
PORTDOCS=	README

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lpopt

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${WRKSRC}/${PORTNAME}.c \
		-o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MANPREFIX}/man/man1

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
