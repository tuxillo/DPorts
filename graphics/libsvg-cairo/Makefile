# New ports collection makefile for:	libsvg-cairo
# Date created:		2004-10-06
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/graphics/libsvg-cairo/Makefile,v 1.18 2012/11/17 05:58:13 svnexp Exp $
#   $MCom: ports/graphics/libsvg-cairo/Makefile,v 1.5 2005/08/09 04:49:38 ahze Exp $
#

PORTNAME=	libsvg-cairo
PORTVERSION=	0.1.6
PORTREVISION=	7
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/snapshots/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	SVG rendering library

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		svg.1:${PORTSDIR}/graphics/libsvg \
		cairo.2:${PORTSDIR}/graphics/cairo

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GNOME=	pkgconfig gnomehack
USE_LDCONFIG=	yes
PLIST_FILES=	include/svg-cairo.h \
		lib/libsvg-cairo.a \
		lib/libsvg-cairo.la \
		lib/libsvg-cairo.so \
		lib/libsvg-cairo.so.1 \
		libdata/pkgconfig/libsvg-cairo.pc

.include <bsd.port.mk>
