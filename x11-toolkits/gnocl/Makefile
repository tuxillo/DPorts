# Created by: Stephane Legrand <stephane@FreeBSD.org>
# $FreeBSD: ports/x11-toolkits/gnocl/Makefile,v 1.42 2012/11/26 23:01:22 svnexp Exp $

PORTNAME=	gnocl
DISTVERSION=	${BASE_VERSION}-${NIGHTLY_BUILD}
PORTREVISION=	2
CATEGORIES=	x11-toolkits devel
MASTER_SITES=	SF/${PORTNAME}/Gnocl-Nightly-Build/

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	GTK+ and Gnome extension for Tcl

LIB_DEPENDS=	canberra.0:${PORTSDIR}/audio/libcanberra \
   		notify.4:${PORTSDIR}/devel/libnotify \
		gtkimageview.0:${PORTSDIR}/x11-toolkits/gtkimageview

USE_GMAKE=	yes
USE_BZIP2=	yes
USE_GNOME=	gtk20 libglade2 pkgconfig
USE_TCL=	84+
USE_LDCONFIG=	yes
CFLAGS+=	-I${TCL_INCLUDEDIR} -L${TCL_LIBDIR} `pkg-config --cflags libglade-2.0`

BASE_VERSION=	0.9.96
NIGHTLY_BUILD=	27-06-12

WRKSRC=		${WRKDIR}/${PORTNAME}-${BASE_VERSION}
BUILD_WRKSRC=	${WRKSRC}/src
INSTALL_WRKSRC=	${BUILD_WRKSRC}

BASEDIR=	lib/${PORTNAME}${BASE_VERSION}
PLIST_FILES=	${BASEDIR}/${PORTNAME}.so \
		${BASEDIR}/pkgIndex.tcl
PLIST_DIRS=	${BASEDIR}

post-patch:
	${REINPLACE_CMD} -e 's|tclsh|${TCLSH}|;s|$$(TCL_VERSION)|${TCL_VER:S/.//}|g;/fileFilter/d' ${BUILD_WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's|\[info library\]|${PREFIX}/lib|; s|tclsh|${TCLSH}|g;' ${BUILD_WRKSRC}/install.tcl

.include <bsd.port.mk>
