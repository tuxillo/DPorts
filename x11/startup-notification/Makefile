# New ports collection makefile for:	startup-notification
# Date created:				14 November 2002
# Whom:					Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/x11/startup-notification/Makefile,v 1.36 2012/12/10 19:12:19 svnexp Exp $
#   $MCom: ports/x11/startup-notification/Makefile,v 1.10 2010/07/21 18:04:43 mezz Exp $
#

PORTNAME=	startup-notification
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	x11 gnome
MASTER_SITES=	http://www.freedesktop.org/software/startup-notification/releases/
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library that supports startup notification spec from freedesktop.org

LIB_DEPENDS=	xcb-util:${PORTSDIR}/x11/xcb-util

USE_XORG=	x11
USE_AUTOTOOLS=	libtool
USE_GMAKE=	yes
USE_GNOME=	gnomehack pkgconfig ltasneededhack
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=ac_cv_lib_ICE_IceConnectionNumber=no

.include <bsd.port.mk>
