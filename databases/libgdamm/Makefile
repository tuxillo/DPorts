# New ports collection makefile for:    libglademm
# Date created:         1 Oct 2003
# Whom:                 Alexander Nedotsukov <bland@FreeBSD.org>
#
# $FreeBSD: ports/databases/libgdamm/Makefile,v 1.39 2012/11/17 05:55:10 svnexp Exp $
#   $MCom: ports/databases/libgdamm/Makefile,v 1.21 2010/10/23 16:04:08 kwm Exp $
#

PORTNAME=	libgdamm
PORTVERSION=	3.99.21
PORTREVISION=	1
CATEGORIES=	databases gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	bland@FreeBSD.org
COMMENT=	C++ wrapper for libgda4 library

LIB_DEPENDS=	glibmm-2.4:${PORTSDIR}/devel/glibmm
BUILD_DEPENDS=	gm4:${PORTSDIR}/devel/m4

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack libgda4
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-static --disable-documentation

.include <bsd.port.mk>
