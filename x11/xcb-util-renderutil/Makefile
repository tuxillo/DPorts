# $FreeBSD: ports/x11/xcb-util-renderutil/Makefile,v 1.4 2012/11/17 06:03:20 svnexp Exp $

PORTNAME=	xcb-util-renderutil
PORTVERSION=	0.3.8
CATEGORIES=	x11
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Convenience functions for the Render extension

LIB_DEPENDS=	xcb:${PORTSDIR}/x11/libxcb \
		xcb-util:${PORTSDIR}/x11/xcb-util
#BUILD_DEPENDS=	${LOCALBASE}/bin/gperf:${PORTSDIR}/devel/gperf

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
#USE_XORG=	xau xdmcp
#USE_AUTOTOOLS=	libtool

GNU_CONFIGURE=	yes
#CONFIGURE_ENV=	GPERF="${LOCALBASE}/bin/gperf"

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${libdir}/pkgconfig|$${prefix}/libdata/pkgconfig|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
