# New ports collection makefile for:	atr3d
# Date created:				11 Jun 2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/games/atr3d/Makefile,v 1.43 2012/11/17 05:57:32 svnexp Exp $
#

PORTNAME=	atr3d
PORTVERSION=	0.6
PORTREVISION=	14
CATEGORIES=	games
MASTER_SITES=	http://rodrigo.osorio.free.fr/freebsd/distfiles/
DISTNAME=	${PORTNAME}_source_${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	3D asteroids-like multiplayer game

OPTIONS_DEFINE=	OPENAL
OPTIONS_DEFAULT=OPENAL

SDL_CONFIG?=	${LOCALBASE}/bin/sdl-config

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_GMAKE=	yes
USE_GL=		glut glu
USE_XORG=	xmu xi x11
USE_PERL5_BUILD=yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	SDL_CONFIG="${SDL_CONFIG}"
USE_AUTOTOOLS=	automake autoconf

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib -L${LOCALBASE}/lib ${PTHREAD_LIBS}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MOPENAL}
USE_OPENAL=		alut
CONFIGURE_ARGS+=	--enable-sound
.else
CONFIGURE_ARGS+=	--disable-sound
.endif

pre-patch:
	@${PERL} -pi.orig -e 's|^aclocal|${ACLOCAL}|; \
		s|^autoconf|${AUTOCONF}|; s|^automake|${AUTOMAKE}|' \
		${WRKSRC}/autogen.sh
	@${REINPLACE_CMD} -e 's|-lopenal|& -lalut|' ${WRKSRC}/Makefile.am

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/X11R6|${LOCALBASE}|g' ${WRKSRC}/Makefile.am

pre-configure:
	cd ${WRKSRC}; ${SH} autogen.sh

post-configure:
	@${REINPLACE_CMD} -e \
		's|-lpthread|${PTHREAD_LIBS}|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
