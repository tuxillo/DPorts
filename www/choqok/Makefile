# New ports collection makefile for:	Choqok
# Date created:				15 Sep 2009
# Whom:					Alexey Dokuchaev <danfe@FreeBSD.org>
#
# $FreeBSD: ports/www/choqok/Makefile,v 1.20 2012/11/17 06:02:29 svnexp Exp $
#

PORTNAME=	choqok
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	www kde
MASTER_SITES=	SF/${PORTNAME}/Choqok/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE micro-blogging client

LICENSE=	GPLv3

LIB_DEPENDS=	qjson.0:${PORTSDIR}/devel/qjson \
		qoauth.1:${PORTSDIR}/net/qoauth

#BUILD_DEPENDS+=	${KDE4_PREFIX}/lib/kde4/kwebkitpart.so:${PORTSDIR}/www/kwebkitpart
#RUN_DEPENDS+=	${KDE4_PREFIX}/lib/kde4/kwebkitpart.so:${PORTSDIR}/www/kwebkitpart

USE_GETTEXT=	yes
USE_KDE4=	kdehier kdelibs kdeprefix automoc4
USE_QT4=	gui imageformats_run network \
		moc_build qmake_build rcc_build uic_build
USE_BZIP2=	yes
USE_CMAKE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
