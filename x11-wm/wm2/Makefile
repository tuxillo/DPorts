# New ports collection makefile for:	wm2
# Date created:		16 February 1997
# Whom:			Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
#
# $FreeBSD: ports/x11-wm/wm2/Makefile,v 1.15 2012/11/17 06:03:44 svnexp Exp $
#

PORTNAME=	wm2
PORTVERSION=	4.0
PORTREVISION=	2
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.all-day-breakfast.com/wm2/
DISTNAME=	${PORTNAME}-${PORTVERSION:R}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A very simple window manager for X

BUILD_DEPENDS=	makedepend:${PORTSDIR}/devel/makedepend

USE_XORG=	x11 xext xmu
ALL_TARGET=	depend wm2

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wm2 ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
