# $FreeBSD: ports/deskutils/plasma-applet-qstardict/Makefile,v 1.2 2012/11/17 05:55:30 svnexp Exp $

PORTNAME=	qstardict
PORTVERSION=	1.0.1
CATEGORIES=	deskutils textproc kde
MASTER_SITES=	http://qstardict.ylsoftware.com/files/
PKGNAMEPREFIX=	plasma-applet-

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Dictionary plasma applet for KDE

RUN_DEPENDS=	${QSTARDICT_PLUGIN_PATH}/libstardict.so:${PORTSDIR}/textproc/qstardict

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_QT4=	qmake_build uic_build moc_build rcc_build
USE_KDE4=	automoc4 kdeprefix kdelibs
CMAKE_SOURCE_PATH=	${WRKSRC}/kdeplasma
MAKE_JOBS_SAFE=	yes

QSTARDICT_PLUGIN_PATH=	${LOCALBASE}/lib/qstardict/plugins

post-patch:
	${REINPLACE_CMD} -e 's|/usr/lib/qstardict/plugins|${QSTARDICT_PLUGIN_PATH}|g' \
		${WRKSRC}/kdeplasma/dataengine/config.h.cmake

.include <bsd.port.mk>
