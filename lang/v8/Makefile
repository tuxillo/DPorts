# Created by: siasia
# $FreeBSD: ports/lang/v8/Makefile,v 1.24 2012/12/14 13:43:59 svnexp Exp $

PORTNAME=	v8
PORTVERSION=	3.15.10
PORTREVISION=	0
CATEGORIES=	lang
MASTER_SITES=	LOCAL/vanilla

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Google\'s open source JavaScript engine

LIB_DEPENDS=	execinfo:${PORTSDIR}/devel/libexecinfo

USE_GMAKE=	yes
USE_PYTHON=	2.7+
USE_XZ=		yes
USE_LDCONFIG=	yes
ALL_TARGET=	native

MAKE_ENV+=	GYPFLAGS=-DOS=freebsd
MAKE_ENV+=	library=shared
USE_GCC=	4.7

.include <bsd.port.pre.mk>
ONLY_FOR_ARCHS=	i386 amd64

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/out/native/d8 ${PREFIX}/bin/d8
	${INSTALL_LIB} -m 755 ${WRKSRC}/out/native/lib.target/libv8.so ${PREFIX}/lib/libv8.so.1
	${LN} -sf ${PREFIX}/lib/libv8.so.1 ${PREFIX}/lib/libv8.so
	${INSTALL_DATA} ${WRKSRC}/include/v8.h ${PREFIX}/include/
	${INSTALL_DATA} ${WRKSRC}/include/v8-debug.h ${PREFIX}/include/
	${INSTALL_DATA} ${WRKSRC}/include/v8-preparser.h ${PREFIX}/include/
	${INSTALL_DATA} ${WRKSRC}/include/v8-profiler.h ${PREFIX}/include/
	${INSTALL_DATA} ${WRKSRC}/include/v8-testing.h ${PREFIX}/include/
	${INSTALL_DATA} ${WRKSRC}/include/v8stdint.h ${PREFIX}/include/

.include <bsd.port.post.mk>
