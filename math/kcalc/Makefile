# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: ports/math/kcalc/Makefile,v 1.163 2013/02/04 01:04:19 svnexp Exp $

PORTNAME=	kcalc
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	math kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Scientific calculator for KDE

LIB_DEPENDS=	gmp.10:${PORTSDIR}/math/gmp

CONFLICTS_INSTALL=	kdeutils-4.[0-7].*

USE_XZ=	yes
USE_KDE4=	kdeprefix kdehier automoc4 kdelibs
KDE4_BUILDENV=	yes
USE_QT4=	qmake_build moc_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
