# New ports collection makefile for:   	fltk11
# Date created:				5 December 2011
# Whom:                			Diane Bruce db@FreeBSD.org
#
# $FreeBSD: ports/x11-toolkits/fltk11/Makefile,v 1.4 2012/11/17 06:03:34 svnexp Exp $
#

PORTNAME=	fltk11
PORTVERSION=	1.1.10
PORTREVISION=	1
CATEGORIES=	x11-toolkits
MASTER_SITES=	${MASTER_SITE_EASYSW}
MASTER_SITE_SUBDIR=	fltk/${PORTVERSION}
DISTNAME=	${OPORTNAME}-${PORTVERSION}-source

MAINTAINER=	db@FreeBSD.org
COMMENT=	Cross-platform C++ graphical user interface toolkit

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png \
		jpeg.11:${PORTSDIR}/graphics/jpeg

USE_BZIP2=	yes
USE_LDCONFIG=	yes
USE_XORG=	xft
USE_GL=		gl glu
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-threads \
		--enable-shared \
		--enable-xft \
		--libdir=${PREFIX}/lib/${PORTNAME} \
		--bindir=${PREFIX}/bin/${PORTNAME} \
		--includedir=${PREFIX}/include/${PORTNAME}
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng15
LDFLAGS+=	-L${LOCALBASE}/lib

OPORTNAME=	fltk
WRKSRC=		${WRKDIR}/${OPORTNAME}-${PORTVERSION}

DEPRECATED=	new code should use /x11-toolkits/fltk
EXPIRATION_DATE=	2012-11-28

post-patch:
	${REINPLACE_CMD} -e '30s/test //' ${WRKSRC}/Makefile

.include <bsd.port.mk>
