# New ports collection makefile for:	xrestop
# Date created:         25 Dec 2003
# Whom:                 Alexander Nedotsukov <bland@FreeBSD.org>
#
# $FreeBSD: ports/x11/xrestop/Makefile,v 1.12 2012/11/17 06:03:22 svnexp Exp $
#

PORTNAME=	xrestop
PORTVERSION=	0.4
PORTREVISION=	3
CATEGORIES=	x11
MASTER_SITES=	http://projects.o-hand.com/sources/${PORTNAME}/

MAINTAINER=	bland@FreeBSD.org
COMMENT=	X11 server side resource usage statistics monitor

USE_XORG=	x11 xext xrender xt xres xproto
USE_GMAKE=	yes
USE_GNOME=	pkgconfig
USE_NCURSES=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ENV=	XLIBS="-L${LOCALBASE}/lib -lX11"
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

MAN1=		xrestop.1
PLIST_FILES=	bin/xrestop

.include <bsd.port.mk>
