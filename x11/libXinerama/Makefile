# New ports collection makefile for:   libXinerama
# Date Created:			7 May, 2004
# Whom:				Eric Anholt <anholt@FreeBSD.org>
#
# $FreeBSD: ports/x11/libXinerama/Makefile,v 1.19 2012/11/17 06:03:17 svnexp Exp $
#

PORTNAME=	libXinerama
PORTVERSION=	1.1.1
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X11 Xinerama library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	x11 xext xextproto xineramaproto:both
USE_AUTOTOOLS=	libtool

MAN3=		Xinerama.3 \
		XineramaQueryExtension.3 \
		XineramaQueryVersion.3 \
		XineramaIsActive.3 \
		XineramaQueryScreens.3

.include <bsd.port.mk>
