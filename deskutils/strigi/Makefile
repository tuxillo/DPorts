# Created by: Tilman Keskinoz <arved@FreeBSD.org>
# $FreeBSD: ports/deskutils/strigi/Makefile,v 1.21 2013/01/31 14:01:26 svnexp Exp $

PORTNAME=	strigi
PORTVERSION=	0.7.7
PORTREVISION=	5
CATEGORIES=	deskutils
MASTER_SITES=	http://rdieter.fedorapeople.org/strigi/
#MASTER_SITES=	http://www.vandenoever.info/software/strigi/ \
#		SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Desktop searching program

LIB_DEPENDS=	avcodec.1:${PORTSDIR}/multimedia/ffmpeg \
		clucene-core:${PORTSDIR}/textproc/clucene \
		dbus-1:${PORTSDIR}/devel/dbus \
		exiv2.12:${PORTSDIR}/graphics/exiv2 \
		boost_thread:${PORTSDIR}/devel/boost-libs

USE_QT4=	corelib gui dbus moc_build uic_build qmake_build rcc_build
USE_BZIP2=	yes
USE_GNOME=	libxml2 pkgconfig
USE_FAM=	yes
USE_LDCONFIG=	yes
USE_CMAKE=	yes
MAKE_JOBS_UNSAFE=	yes

post-patch:
	${MKDIR} ${WRKSRC}
	${REINPLACE_CMD} -e \
		's,$${LIB_DESTINATION}/pkgconfig,libdata/pkgconfig,' \
		${WRKSRC}/libstreamanalyzer/CMakeLists.txt \
		${WRKSRC}/libstreams/CMakeLists.txt

.include <bsd.port.mk>
