# New ports collection makefile for:	xtrojka
# Date created:				22 march 2000
# Whom:					Edwin Mons
#
# $FreeBSD: ports/games/xtrojka/Makefile,v 1.8 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xtrojka
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.funet.fi/pub/unix/games/
DISTNAME=	${PORTNAME}

MAINTAINER=	e@ik.nu
COMMENT=	Game of skill similar to T*tris

USE_XORG=	x11 xt xproto xaw
WRKSRC=		${WRKDIR}
MAN6=		xtrojka.6
MANCOMPRESSED=	yes

pre-install:
	${MKDIR} ${PREFIX}/share/xtrojka

post-install:
	${STRIP_CMD} ${PREFIX}/bin/xtrojka

.include <bsd.port.mk>
