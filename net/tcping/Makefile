# New ports collection makefile for:	tcping
# Date created:		2003-12-16
# Whom:			Dryice Liu
#
# $FreeBSD: ports/net/tcping/Makefile,v 1.10 2012/11/17 06:00:22 svnexp Exp $
#

PORTNAME=	tcping
PORTVERSION=	1.3.5
CATEGORIES=	net
MASTER_SITES=	http://www.linuxco.de/tcping/ \
		http://dryice.name/computer/FreeBSD/distfiles/

MAINTAINER=	dryice@dryice.name
COMMENT=	Do a TCP connect to the given IP/port combination

DOCS=		README

do-build:
	cd ${WRKSRC} && \
	${CC} ${CFLAGS} -DHAVE_HSTRERROR -o tcping tcping.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tcping ${PREFIX}/bin/tcping
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
