# New ports collection makefile for:	mp-player
# Date created:				26 Aug 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/audio/mp-player/Makefile,v 1.9 2012/11/17 05:54:38 svnexp Exp $
#

PORTNAME=	mp-player
PORTVERSION=	0.6
CATEGORIES=	audio
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A curses based module tracker using libmikmod

LICENSE=	GPLv2

LIB_DEPENDS=	mikmod.2:${PORTSDIR}/audio/libmikmod

MAKE_JOBS_SAFE=	yes

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lmikmod ${PTHREAD_LIBS} -lncurses -lpanel
DEFINES=	-D_REENTRANT

PLIST_FILES=	bin/mp-player

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} ${DEFINES} ${WRKSRC}/mp.c \
		-o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
