# New ports collection Makefile for:		tapioca-qt
# Date created:					2008-02-10
# Whom:						arved
#
# $FreeBSD: ports/net-im/tapioca-qt/Makefile,v 1.16 2012/11/17 06:00:29 svnexp Exp $

PORTNAME=	tapioca-qt
PORTVERSION=	0.14.1
PORTREVISION=	5
CATEGORIES=	net-im
MASTER_SITES=	SF/tapioca-voip/${PORTNAME}/${PORTVERSION}

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Framework for VoIP and IP applications

LIB_DEPENDS=	QtTelepathyCore.0:${PORTSDIR}/net-im/telepathy-qt

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/../COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/build

USE_CMAKE=	yes
CMAKE_SOURCE_PATH=	..
USE_QT4=	corelib qmake_build uic_build moc_build rcc_build
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

post-extract:
	${MKDIR} ${WRKSRC}

post-patch:
	${REINPLACE_CMD} -e \
		"s,$${LIB_INSTALL_DIR}/pkgconfig,data/pkgconfig,g"\
		${WRKSRC}/../CMakeLists.txt

.include <bsd.port.post.mk>
