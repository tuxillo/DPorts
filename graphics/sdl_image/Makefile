# New ports collection makefile for:	sdl_image
# Date created:				20 September 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/graphics/sdl_image/Makefile,v 1.48 2012/11/17 05:58:23 svnexp Exp $
#

PORTNAME=	sdl_image
PORTVERSION=	1.2.12
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	http://www.libsdl.org/projects/SDL_image/release/
DISTNAME=	SDL_image-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	A simple library to load images of various formats as SDL surfaces

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		png15:${PORTSDIR}/graphics/png \
		tiff.4:${PORTSDIR}/graphics/tiff

USE_AUTOTOOLS=	libtool
USE_SDL=	sdl
USE_GNOME=	pkgconfig gnomehack
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lm
CONFIGURE_ARGS=	--enable-tif --enable-xcf
USE_LDCONFIG=	yes

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/.libs/showimage ${PREFIX}/bin

.include <bsd.port.mk>
