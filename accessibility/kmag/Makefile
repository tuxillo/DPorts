# $FreeBSD: ports/accessibility/kmag/Makefile,v 1.55 2013/02/04 01:03:19 svnexp Exp $

PORTNAME=	kmag
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	accessibility kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Screen magnifier

CONFLICTS_INSTALL=	kdeaccessibility-4.[0-7].*

USE_XZ=	yes
USE_KDE4=	kdelibs kdeprefix kdehier automoc4
KDE4_BUILDENV=	yes
USE_QT4=	qmake_build moc_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes

MAN1=	kmag.1

.include <bsd.port.mk>
