# New ports collection makefile for:	libkgeomap
# Date created:				2012-05-12
# Whom:					Jason E. Hale <bsdkaffee@gmail.com>
#
# $FreeBSD: ports/astro/libkgeomap/Makefile,v 1.4 2012/11/17 05:54:25 svnexp Exp $
#

PORTNAME=	libkgeomap
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	astro kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for browsing photos on a map

.include "${.CURDIR}/../../graphics/digikam-kde4/Makefile.common"

USE_KDE4+=	libkexiv2 marble

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.else
CMAKE_ARGS+=	-DWITH_NLS:BOOL=OFF
PLIST_SUB+=	NLS="@comment "
.endif

post-patch:
	${REINPLACE_CMD} -e '/pkgconfig/s|$${LIB_INSTALL_DIR}|libdata|' \
		${WRKSRC}/CMakeLists.txt
	${LN} -s ../../po ${WRKSRC}/po
	${RM} ${WRKSRC}/po/*/digikam.po ${WRKSRC}/po/*/kipi*

.include <bsd.port.mk>
