# New ports collection makefile for:	qimageblitz
# Date created:		2008-01-15
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/x11/qimageblitz/Makefile,v 1.12 2012/11/17 06:03:19 svnexp Exp $
#

PORTNAME=	qimageblitz
PORTVERSION=	0.0.6
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Graphical effects and filters library for KDE4

USE_BZIP2=	yes
USE_LDCONFIG=	yes
USE_QT4=	gui qmake_build moc_build uic_build rcc_build
USE_CMAKE=	yes

post-patch:
	${REINPLACE_CMD} -e \
		's,$${LIB_INSTALL_DIR}/pkgconfig,libdata/pkgconfig,' \
		${WRKSRC}/blitz/CMakeLists.txt

.include <bsd.port.mk>
