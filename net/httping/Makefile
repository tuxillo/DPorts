# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/net/httping/Makefile,v 1.39 2013/01/12 00:15:43 svnexp Exp $

PORTNAME=	httping
PORTVERSION=	1.5.7
CATEGORIES=	net
MASTER_SITES=	http://www.vanheusden.com/httping/ \
		CRITICAL
EXTRACT_SUFX=	.tgz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A ping-like tool for HTTP requests

USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		httping.1
PLIST_FILES=	bin/httping

CFLAGS+=	-D_GNU_SOURCE

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MANPREFIX}/man/man1

.include <bsd.port.mk>
