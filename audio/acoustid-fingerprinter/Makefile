# $FreeBSD: ports/audio/acoustid-fingerprinter/Makefile,v 1.2 2012/11/17 05:54:27 svnexp Exp $

PORTNAME=	acoustid-fingerprinter
PORTVERSION=	0.6
CATEGORIES=	audio
MASTER_SITES=	http://cloud.github.com/downloads/lalinsky/${PORTNAME}/

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	AcoustID audio fingerprint submission tool

LICENSE=	GPLv2

LIB_DEPENDS=	chromaprint:${PORTSDIR}/audio/chromaprint \
		tag:${PORTSDIR}/audio/taglib \
		avcodec:${PORTSDIR}/multimedia/ffmpeg

USE_CMAKE=	yes
USE_QT4=	gui network \
		qmake_build moc_build rcc_build uic_build
INSTALLS_ICONS=	yes
MAKE_JOBS_SAFE=	yes

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
		 ${WRKSRC}/cmake/modules/*.cmake

post-install:
.for i in 16 24 32 48 128 256
	@${MKDIR} ${PREFIX}/share/icons/hicolor/${i}x${i}/apps
	${INSTALL_DATA} ${WRKSRC}/images/acoustid-fp-${i}.png ${PREFIX}/share/icons/hicolor/${i}x${i}/apps/acoustid-fingerprinter.png
.endfor
	@${MKDIR} ${PREFIX}/share/icons/hicolor/scalable/apps
	${INSTALL_DATA} ${WRKSRC}/images/acoustid-fingerprinter.svg ${PREFIX}/share/icons/hicolor/scalable/apps

.include <bsd.port.mk>
