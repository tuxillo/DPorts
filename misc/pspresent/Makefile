# New ports collection makefile for:   pspresent
# Date created:        25 Jul 2007
# Whom:                Timothy Bourke <timbob@bigpond.com>
#
# $FreeBSD: ports/misc/pspresent/Makefile,v 1.8 2012/11/17 05:59:44 svnexp Exp $
#

PORTNAME=	pspresent
PORTVERSION=	1.3
PORTREVISION=	4
CATEGORIES=	misc
MASTER_SITES=	http://www.zmatt.net/pspresent/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Full-screen slide shows of postscript files

LICENSE=	GPLv2

USE_XORG=	x11 xext xinerama
USE_GHOSTSCRIPT_RUN=	yes
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" LDLIBS="${LDFLAGS}"
ALL_TARGET=	pspresent
MAKE_JOBS_SAFE=	yes

MAN1=		pspresent.1
PLIST_FILES=	bin/pspresent

CFLAGS+=	-I${LOCALBASE}/include -DHAVE_LIBXINERAMA
LDFLAGS+=	-L${LOCALBASE}/lib -lX11 -lXext -lXinerama

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pspresent ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pspresent.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
