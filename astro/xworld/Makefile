# Ports collection makefile for:  xworld
# Date created:			  24 Aug 2001
# Whom:				  Kris Kennaway <kris@FreeBSD.org
#
# $FreeBSD: ports/astro/xworld/Makefile,v 1.12 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	xworld
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	astro geography
MASTER_SITES=	ftp://gutemine.geo.uni-koeln.de/pub/xworld/ \
		ftp://ftp.Uni-Koeln.DE/misc/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Earth as seen from the direction of the sun

USE_XORG=	x11

HAS_CONFIGURE=	yes
CONFIGURE_ENV=	CAT=${CAT} \
		STRIP=/usr/bin/strip \
		INCLUDES="-I${LOCALBASE}/include" \
		LDLIBS="-lm -L${LOCALBASE}/lib -lX11" \
		MORELIBS=""
MAKE_JOBS_SAFE=	yes
PLIST_FILES=	bin/xworld
STRIP=		#don't strip out image data on install

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xworld ${PREFIX}/bin

.include <bsd.port.mk>
