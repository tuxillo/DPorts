# New ports collection makefile for:	qtcurve
# Date created:		2008-08-31
# Whom:			Max Brazhnikov <makc@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/qtcurve-kde4/Makefile,v 1.33 2012/11/17 06:03:33 svnexp Exp $
#

PORTNAME=	qtcurve
PORTVERSION=	1.8.13
CATEGORIES=	x11-themes
MASTER_SITES=	http://craigd.wikispaces.com/file/view/
PKGNAMEPREFIX=	kde4-style-
DISTNAME=	QtCurve-KDE4-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	QtCurve KDE4 widget style

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_QT4=	corelib qmake_build uic_build moc_build rcc_build
USE_KDE4=	kdelibs workspace kdehier kdeprefix automoc4

.include <bsd.port.mk>
