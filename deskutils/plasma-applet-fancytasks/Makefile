# New ports collection makefile for:	plasma-applet-fancytasks
# Date created:		2009-12-06
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/deskutils/plasma-applet-fancytasks/Makefile,v 1.12 2012/11/17 05:55:30 svnexp Exp $
#

PORTNAME=	fancytasks
PORTVERSION=	1.1.0
PORTREVISION=	2
CATEGORIES=	deskutils
MASTER_SITES=	http://kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	99737-${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Plasmoid fancy representation of your tasks and launchers

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_KDE4=	automoc4 kdeprefix kdelibs workspace qimageblitz
USE_QT4=	qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
