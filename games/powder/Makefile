# New ports collection makefile for:	powder
# Date created:		29 Dec 2008
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD: ports/games/powder/Makefile,v 1.9 2012/11/17 05:57:49 svnexp Exp $
#

PORTNAME=	powder
PORTVERSION=	115
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.zincland.com/powder/release/ \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}${PORTVERSION}_src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Graphical dungeon crawling game

USE_GMAKE=	yes
USE_SDL=	sdl
MAKE_JOBS_UNSAFE=yes

BUILD_WRKSRC=	${WRKSRC}/port/linux

PLIST_FILES=	bin/powder

PORTDOCS=	README.TXT LICENSE.TXT CREDITS.TXT

post-patch:
	@${REINPLACE_CMD} -e 's|bin/bash|bin/sh|' \
		${WRKSRC}/rooms/buildrooms.bash \
		${WRKSRC}/gfx/rebuild.sh
	@${REINPLACE_CMD} -e 's|sdl-config|${SDL_CONFIG}|' \
		${BUILD_WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/powder ${PREFIX}/bin/
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
