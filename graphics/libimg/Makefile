# New ports collection makefile for:	img
# Date Created:		20 February 1999
# Whom:			Glenn Johnson
#
# $FreeBSD: ports/graphics/libimg/Makefile,v 1.39 2012/11/17 05:58:13 svnexp Exp $
#

PORTNAME=	libimg
PORTVERSION=	1.2.4
PORTREVISION=	9
CATEGORIES?=	graphics tk
MASTER_SITES=	SF/tkimg/tkimg/${PORTVERSION:R}
DISTNAME=	img${PORTVERSION}

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	A library of image format handlers for Tk4.1 and later

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png \
		jpeg:${PORTSDIR}/graphics/jpeg \
		tiff:${PORTSDIR}/graphics/tiff

DIR=		lib/Img1.2

SHLIB_NAME=	libimg.so.1
SHLIB_LINK=	${SHLIB_NAME:R}

PLIST_SUB+=	DIR="${DIR}" SHLIB_NAME="${SHLIB_NAME}" \
		SHLIB_LINK="${SHLIB_LINK}"

WRKSRC=		${WRKDIR}/img${PORTVERSION}
MAKEFILE=	${FILESDIR}/Makefile.bsd
USE_TK=		83+
USE_TK_BUILD=	${USE_TK}
MAKE_ENV+=	TCL_VER=${TCL_VER}
MAKE_JOBS_SAFE=	yes

# We don't need the bundled libraries:
EXTRACT_AFTER_ARGS=	| ${TAR} -xf - --exclude '*/libz/*' \
		--exclude '*/compat/*' --exclude '*/libtiff/*' \
		--exclude '*/libjpeg/*' --exclude '*/libpng/*'

MAKE_ARGS=	PORTVERSION="${PORTVERSION}" LOCALBASE="${LOCALBASE}" \
		MKDIR="${MKDIR}" INSTALL_DATA="${INSTALL_DATA}" \
		SHLIB_NAME="${SHLIB_NAME}" \
		DIR="${DIR}"

USE_LDCONFIG=	yes

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.pre.mk>

.if ${TCL_VER} == 8.3
PKGNAMESUFFIX=	-tk83
EXTRA_PATCHES=	${FILESDIR}/pre-tk84-warnings
CONFLICTS=	libimg-1.* libimg-tkstep-1.*
.elif ${TCL_VER} == 8.4
PKGNAMESUFFIX=	-tk84
EXTRA_PATCHES=	${FILESDIR}/tk84-Tk_PhotoPutBlock ${FILESDIR}/tk84-warnings
CONFLICTS=	libimg-tk83-1.* libimg-tkstep-1.*
.else
EXTRA_PATCHES=	${FILESDIR}/tk85-Tk_PhotoPutBlock ${FILESDIR}/tk84-warnings
CONFLICTS=	libimg-tk83-1.* libimg-tk84-1.* libimg-tkstep-1.*
.endif

.include <bsd.port.post.mk>
