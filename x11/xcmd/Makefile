# New ports collection makefile for:   xcmd
# Date created:        30 Jul 2001
# Whom:                Oliver Breuninger <ob@breuninger.org>
#
# $FreeBSD: ports/x11/xcmd/Makefile,v 1.7 2012/11/17 06:03:20 svnexp Exp $
#

PORTNAME=	xcmd
PORTVERSION=	1.8
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_SUNSITE} \
		http://www.breuninger.org/files/distfiles/
MASTER_SITE_SUBDIR=	X11/xutils

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Xcmd is a front-end for starting programs under X11

USE_IMAKE=	yes
USE_XORG=	ice sm x11 xext xmu xt

MANCOMPRESSED=	yes
MAN1=		xcmd.1
PLIST_FILES=	bin/xcmd

.include <bsd.port.mk>
