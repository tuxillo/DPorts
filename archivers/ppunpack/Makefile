# New ports collection makefile for:	ppunpack
# Date created:				Sat 3 June 2000
# Whom:					will
#
# $FreeBSD: ports/archivers/ppunpack/Makefile,v 1.13 2012/11/17 05:54:23 svnexp Exp $
#

PORTNAME=	ppunpack
PORTVERSION=	1.0
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	thierry
DISTNAME=	ppsmall-${PORTVERSION}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Decompresses Amiga PowerPacker files

NO_CDROM=	No commercial redistribution

WRKSRC=		${WRKDIR}/PPUnpack
MAKE_ARGS=	CC="${CC}" COPTS="${CFLAGS}"
PLIST_FILES=	bin/ppunpack
ALL_TARGET=	ppunpack

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ppunpack ${PREFIX}/bin

.include <bsd.port.mk>
