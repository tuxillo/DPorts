# New ports collection makefile for:	C4
# Date created:		2 September 2001
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/devel/c4/Makefile,v 1.9 2012/11/17 05:55:36 svnexp Exp $
#

PORTNAME=	c4
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES+=	devel
MASTER_SITES=	http://public.perforce.com/public/perforce/utils/c4/

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	A CVS-like Frontend to Perforce

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
ALL_TARGET=	c4

MAN1=		c4.1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/c4 ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/c4.1 ${MAN1PREFIX}/man/man1/
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/c4.pdf ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/c4.ps ${DOCSDIR}/
.endif

.include <bsd.port.mk>
