# New ports collection makefile for:	libdvdplay
# Date created:		Sat Feb 8 00:47:21 UTC 2003
# Whom:			Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
#
# $FreeBSD: ports/multimedia/libdvdplay/Makefile,v 1.19 2012/11/17 05:59:50 svnexp Exp $
#

PORTNAME=	libdvdplay
PORTVERSION=	1.0.1
PORTREVISION=	5
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/%SUBDIR%/
MASTER_SITE_SUBDIR=	${PORTNAME}/${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Portable abstraction library for DVD navigation

DEPRECATED=	No more public_distfiles
EXPIRATION_DATE=	2012-10-20

LIB_DEPENDS=	dvdread.4:${PORTSDIR}/multimedia/libdvdread

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-dvdread-tree=${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
