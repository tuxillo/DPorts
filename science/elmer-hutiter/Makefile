# New ports collection makefile for:	hutiter
# Date created:		5 Jan 2006
# Whom:			Pedro Giffuni <giffunip@asme.org>
#
# $FreeBSD: ports/science/elmer-hutiter/Makefile,v 1.31 2012/11/17 06:00:57 svnexp Exp $
#

PORTNAME=	hutiter
PORTVERSION=	5.4.0
PORTREVISION=	4
CATEGORIES=	science
MASTER_SITES=	http://www.nic.funet.fi/index/files/index/elmer/src/old/ \
		http://www.bezopasnik.org/unix/ports/distfiles/
PKGNAMEPREFIX=	elmer-

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	HUTIter library for use in the ELMER FEM package

LIB_DEPENDS=	arpack.1:${PORTSDIR}/math/arpack

USE_FORTRAN=	yes

.include <bsd.port.pre.mk>

.if exists(${LOCALBASE}/lib/libatlas.so) && !defined(WITH_BLAS)
WITH_ATLAS=	yes
.endif
.if defined(WITH_ATLAS)
LIB_DEPENDS+=	atlas.2:${PORTSDIR}/math/atlas
BLAS=		-lf77blas
LAPACK=		-lalapack -lcblas
.else
LIB_DEPENDS+=	lapack.4:${PORTSDIR}/math/lapack
LIB_DEPENDS+=	blas.2:${PORTSDIR}/math/blas
BLAS=		-lblas
LAPACK=		-llapack
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|%%CC%%|${CC}|' -e 's|%%FC%%|${FC}|' ${WRKSRC}/configure.in

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf
ALL_TARGET=

PLIST_FILES=	include/huti_defs.h include/huti_fdefs.h lib/libhuti.a

.if ${ARCH} == "x86_64" || ${ARCH} == "ia64"
CFLAGS+=	-fPIC
FFLAGS+=	-fPIC

post-configure:
	@${REINPLACE_CMD} -e 's+-O +-O -fPIC +g;' ${WRKSRC}/src/Makefile

.endif

.include <bsd.port.post.mk>
