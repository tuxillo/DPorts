# New ports collection makefile for:	lasi
# Date created:		June 2006
# Whom:			giffunip
#
# $FreeBSD: ports/devel/lasi/Makefile,v 1.23 2012/11/17 05:55:52 svnexp Exp $
#    $MCom: ports/devel/lasi/Makefile,v 1.1 2006/10/04 20:25:40 ahze Exp $

PORTNAME=	lasi
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}%20Source
DISTNAME=	libLASi-${PORTVERSION}

MAINTAINER=	lme@FreeBSD.org
COMMENT=	C++ stream output interface for creating Postscript documents

USE_GNOME=	pango pkgconfig
USE_AUTOTOOLS=	libltdl
PKG_CONFIG_PATH=	${PREFIX}/libdata/pkgconfig
CONFIGURE_ENV+=	PKG_CONFIG_PATH=${PKG_CONFIG_PATH}

USE_LDCONFIG=	yes

USE_CMAKE=	yes
CMAKE_ARGS+=	${WRKSRC}	\
		-DCMAKE_INSTALL_PREFIX=${PREFIX}	\
		-DCMAKE_INSTALL_DATADIR:PATH=${DATADIR}

.if !defined(NOPORTDOCS)
BUILD_DEPENDS+=	${LOCALBASE}/bin/doxygen:${PORTSDIR}/devel/doxygen
.else
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-cmake+modules+lasi.cmake
.endif

pre-install:
.if defined(NOPORTEXAMPLES)
	@${REINPLACE_CMD} 's/^\(add_subdirectory(examples)\)/#\1/' ${WRKSRC}/CMakeLists.txt
.endif

post-install:
	@${MV} ${PREFIX}/lib/libLASi.so.1.0.0 ${PREFIX}/lib/libLASi.so.1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${MV} ${DATADIR}/doc/* ${DOCSDIR}/
	@${RMDIR} ${DATADIR}/doc
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@${MV} ${DATADIR}/examples/* ${EXAMPLESDIR}/
	@${RMDIR} ${DATADIR}/examples
.endif
.if !defined(NOPORTEXAMPLES) && !defined(NOPORTDOCS)
	@${RM} -rf ${DATADIR}/*
.endif
	@${TEST} -d ${DATADIR} && ${RMDIR} ${DATADIR} || ${TRUE}

.include <bsd.port.mk>
