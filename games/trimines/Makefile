# New ports collection makefile for:	trimines
# Date created:		02 May 2006
# Whom:			Dmitry Marakasov <amdmi3@amdmi3.ru>
#
# $FreeBSD: ports/games/trimines/Makefile,v 1.13 2012/11/17 05:57:54 svnexp Exp $
#

PORTNAME=	trimines
PORTVERSION=	1.3.0
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	http://www.freewebs.com/trimines/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Mine sweeper game that uses triangles instead of squares

USE_SDL=	sdl

post-patch:
	@${REINPLACE_CMD} -e 's|data/|${DATADIR}/|' ${WRKSRC}/src/gfx.c

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} src/main.c -o ./trimines \
		`${SDL_CONFIG} --cflags --libs`

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/trimines ${PREFIX}/bin
.for dir in counter menu misc triangles
	${MKDIR} ${DATADIR}/${dir}
	${INSTALL_DATA} ${WRKSRC}/data/${dir}/* ${DATADIR}/${dir}
.endfor

.include <bsd.port.mk>
