# New ports collection makefile for:		libgdiplus
# Date created:					20040820
# Whom:				Tom McLaughlin <tmclaugh@sdf.lonestar.org>
#
# $FreeBSD: ports/x11-toolkits/libgdiplus/Makefile,v 1.32 2012/11/17 06:03:36 svnexp Exp $
#

PORTNAME=	libgdiplus
PORTVERSION=	2.10
PORTREVISION=	2
CATEGORIES=	x11-toolkits
MASTER_SITES=	http://ftp.novell.com/pub/mono/sources/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	GDI+ API for System.Windows.Forms in Mono

LIB_DEPENDS=	tiff.4:${PORTSDIR}/graphics/tiff \
		gif.5:${PORTSDIR}/graphics/giflib \
		png15:${PORTSDIR}/graphics/png \
		cairo.2:${PORTSDIR}/graphics/cairo

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GNOME=	gnomehack glib20
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_XORG=	x11
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng15
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	lib/libgdiplus.a \
		lib/libgdiplus.la \
		lib/libgdiplus.so \
		lib/libgdiplus.so.0 \
		libdata/pkgconfig/libgdiplus.pc

.include "${.CURDIR}/../../lang/mono/bsd.mono.mk"
.include <bsd.port.mk>
