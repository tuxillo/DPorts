# New ports collection makefile for:	shared-desktop-ontologies
# Date created:		2009-11-27
# Whom:			Thomas Abthorpe <tabthorpe@FreeBSD.org>
#
# $FreeBSD: ports/x11-toolkits/shared-desktop-ontologies/Makefile,v 1.9 2012/11/17 06:03:39 svnexp Exp $
#

PORTNAME=	shared-desktop-ontologies
PORTVERSION=	0.10.0
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/oscaf/${PORTNAME}/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Interoperability between desktops and collaborative environments

CMAKE_ARGS+=	-DPKGCONFIG_INSTALL_DIR:PATH="libdata/pkgconfig/"
INSTALL_TARGET=	install

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_GNOME=	pkgconfig

post-patch:
	@${REINPLACE_CMD} -e 's|share/cmake/SharedDesktopOntologies|lib/cmake/SharedDesktopOntologies|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
