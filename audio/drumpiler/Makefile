# ex:ts=8
# Ports collection makefile for:	drumpiler
# Date created:			Jan 15, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/audio/drumpiler/Makefile,v 1.11 2012/11/17 05:54:30 svnexp Exp $
#

PORTNAME=	drumpiler
PORTVERSION=	0.9.0
PORTREVISION=	5
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Drum machine compiler

USE_SDL=	sdl
CFLAGS+=	`${SDL_CONFIG} --cflags`
LIBS+=		`${SDL_CONFIG} --libs`
PLIST_FILES=	bin/drumpiler

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -DUSESDL -o drumpiler drumpiler.c ${LIBS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/drumpiler ${PREFIX}/bin

.include <bsd.port.mk>
