# New ports collection makefile for:	xmball
# Date created:				21 May 1998
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/games/xmball/Makefile,v 1.13 2012/11/17 05:57:57 svnexp Exp $
#

PORTNAME=	xmball
PORTVERSION=	5.5.2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games/xpuzzles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Masterball puzzle for X Window System

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_IMAKE=	yes
USE_XORG=	x11 xext xt sm ice
MAN1=		xmball.1
MANCOMPRESSED=	no
XFREE86_HTML_MAN=	no

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xmball ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/Mball.ad ${PREFIX}/lib/X11/app-defaults/Mball
	${INSTALL_MAN} ${WRKSRC}/xmball.man ${MANPREFIX}/man/man1/xmball.1

.include <bsd.port.mk>
