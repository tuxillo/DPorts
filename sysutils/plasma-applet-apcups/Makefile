# $FreeBSD: ports/sysutils/plasma-applet-apcups/Makefile,v 1.7 2012/12/11 12:44:47 svnexp Exp $

PORTNAME=	apcups
PORTVERSION=	0.2.1
CATEGORIES=	sysutils kde
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	plasma-${PORTNAME}-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Plasma applet to monitor the status of APC UPS

PROJECTHOST=	plasma-apcups

USE_CMAKE=	yes
USE_KDE4=	automoc4 kdeprefix kdelibs
USE_QT4=	qmake_build moc_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
