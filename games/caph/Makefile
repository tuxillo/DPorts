# New ports collection makefile for:	caph
# Date created:		13 Sep 2010
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD: ports/games/caph/Makefile,v 1.5 2012/11/17 05:57:34 svnexp Exp $
#

PORTNAME=	caph
PORTVERSION=	1.1
CATEGORIES=	games
MASTER_SITES=	SF/caphgame/${PORTNAME}/caphgame-${PORTVERSION}/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Physics-based sandbox game

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/doc/caph/COPYING

USE_BZIP2=	yes
USE_SDL=	sdl
USE_GL=		gl
USE_ICONV=	yes

BUILD_WRKSRC=	${WRKSRC}/src

PORTDOCS=	README CHANGELOG

DESKTOP_ENTRIES="Caph" \
		"Physics-based sandbox game" \
		"${DATADIR}/brush.png" \
		"caph" \
		"Game;LogicGame;" \
		false

OPTIONS=	OPTIMIZED_CFLAGS "Use optimized compiler flags" on

.include <bsd.port.options.mk>

.if !defined(WITHOUT_OPTIMIZED_CFLAGS)
CFLAGS+=	-O3 -ffast-math
.endif

do-build:
	cd ${BUILD_WRKSRC} && ${CC} ${CFLAGS} -o caph -I../include *.c \
	   `${SDL_CONFIG} --libs --cflags` -D_OPENGL -lGL -lpng -lm -liconv

post-patch:
	@${REINPLACE_CMD} -e 's|../share/caph|${DATADIR}|' ${BUILD_WRKSRC}/caph.c

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${MKDIR} ${DATADIR}
	cd ${WRKSRC}/share/caph && ${COPYTREE_SHARE} '*' ${DATADIR}
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/doc/caph && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
