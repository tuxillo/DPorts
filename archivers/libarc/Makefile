# New ports collection makefile for:	libarc
# Date Created:				20 June 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/archivers/libarc/Makefile,v 1.12 2012/11/17 05:54:21 svnexp Exp $
#

PORTNAME=	libarc
PORTVERSION=	2.0.2
PORTREVISION=	1
CATEGORIES=	archivers devel
MASTER_SITES=	http://www.onicos.com/staff/iz/release/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tiny C decompression library for several popular compression formats

SOLIB=		libarc.so
SOVERSION=	1

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS} -I." LN="${LN} -sf" \
		SOLIB="${SOLIB}" SOVERSION="${SOVERSION}"

MAKE_JOBS_SAFE=	yes

USE_LDCONFIG=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/arccat ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/${SOLIB}.${SOVERSION} ${PREFIX}/lib
	${LN} -sf ${PREFIX}/lib/${SOLIB}.${SOVERSION} ${PREFIX}/lib/${SOLIB}
	@${MKDIR} ${PREFIX}/include/libarc
	${INSTALL_DATA} ${WRKSRC}/libarc/* ${PREFIX}/include/libarc
	(cd ${WRKSRC} && ${INSTALL_DATA} unlzh.h zip.h ${PREFIX}/include/libarc)

.include <bsd.port.mk>
