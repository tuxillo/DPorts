# $FreeBSD: ports/x11/kgamma/Makefile,v 1.22 2013/02/04 01:04:52 svnexp Exp $

PORTNAME=	kgamma
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	x11 kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 monitor calibration tool

CONFLICTS=	kdegraphics-4.[0-6].*

USE_KDE4=	kdehier kdelibs kdeprefix automoc4
KDE4_BUILDENV=	yes
USE_QT4=	dbus qmake_build moc_build uic_build rcc_build
USE_XORG=	x11 xxf86vm
USE_XZ=	yes
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
