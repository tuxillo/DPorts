# New ports collection makefile for:	kdebindings4-python-krosspython
# Date created:		2009-02-13
# Whom:			Max Brazhnikov <makc@FreeBSD.org>
#
# $FreeBSD: ports/devel/kdebindings4-python-krosspython/Makefile,v 1.18 2012/11/17 05:55:52 svnexp Exp $
#

PORTNAME=	krosspython
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	devel kde python
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}kdebindings-
DISTNAME=	kross-interpreters-${PORTVERSION}
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Kross Python scripting library

USE_KDE4=	kdehier kdelibs kdeprefix automoc4
USE_PYTHON=	2.5+
USE_QT4=	gui qmake_build moc_build uic_build rcc_build
USE_XZ=	yes
USE_CMAKE=	yes
CMAKE_ARGS+=	-DBUILD_falcon:BOOL=FALSE \
		-DBUILD_ruby:BOOL=FALSE \
		-DBUILD_java:BOOL=FALSE
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	lib/kde4/krosspython.so

.include <bsd.port.mk>
