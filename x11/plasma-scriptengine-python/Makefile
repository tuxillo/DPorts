# New ports collection makefile for:	plasma-scriptengine-python
# Date created:		2010-03-14
# Whom:			Max Brazhnikov <makc@FreeBSD.org>
#
# $FreeBSD: ports/x11/plasma-scriptengine-python/Makefile,v 1.13 2012/11/17 06:03:19 svnexp Exp $
#

PORTNAME=	plasma-scriptengine-python
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11 kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DISTNAME=	kde-workspace-${PORTVERSION}
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma scriptengine for Python

USE_KDE4=	kdehier kdelibs kdeprefix pykde4 automoc4
USE_QT4=	qmake_build moc_build uic_build rcc_build
USE_PYTHON=	2.5+
DISTINFO_FILE=	${PORTSDIR}/x11/kde4-workspace/distinfo
USE_XZ=	yes
USE_CMAKE=	yes
MAKE_JOBS_SAFE=	yes

CMAKE_SOURCE_PATH=	${WRKSRC}/plasma/generic/scriptengines/python
CMAKE_OUTSOURCE=	yes

pre-configure:
	${REINPLACE_CMD} -e 's,$${PYTHON_SITE_PACKAGES_DIR},${PYTHONPREFIX_SITELIBDIR},g' \
		${CMAKE_SOURCE_PATH}/CMakeLists.txt

.include <bsd.port.mk>
