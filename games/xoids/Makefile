# New ports collection makefile for:	xoids
# Date created:				16 March 1998
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/games/xoids/Makefile,v 1.17 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xoids
PORTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X Window Asteroids style game with full color pixmaps

USE_IMAKE=	yes
USE_XORG=	xpm
MAN6=		xoids.6

post-extract:
	@${CP} ${WRKSRC}/xoids.1x ${WRKSRC}/xoids.man

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
