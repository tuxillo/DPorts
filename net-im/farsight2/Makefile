# New ports collection makefile for:	farsight2
# Date created:				27 February 2009
# Whom:					Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/net-im/farsight2/Makefile,v 1.26 2012/11/17 06:00:26 svnexp Exp $
#

PORTNAME=	farsight2
PORTVERSION=	0.0.22
PORTREVISION=	1
CATEGORIES=	net-im devel
MASTER_SITES=	http://farsight.freedesktop.org/releases/farsight2/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Collection of GStreamer modules and libraries for videoconferencing

LIB_DEPENDS=	nice.0:${PORTSDIR}/net-im/libnice

USE_GMAKE=	yes
USE_GETTEXT=	yes
USE_LDCONFIG=	yes
USE_PYTHON=	yes
USE_GNOME=	gnomehack pkgconfig glib20 ltverhack \
		pygtk2
USE_GSTREAMER=	core good bad python
USE_AUTOTOOLS=	libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 702000
BROKEN=		does not build on FreeBSD 7.X prior 7.2
.endif

.include <bsd.port.post.mk>
