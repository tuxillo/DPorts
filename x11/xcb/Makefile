# Created by: jkh
# $FreeBSD: ports/x11/xcb/Makefile,v 1.18 2012/11/17 06:03:20 svnexp Exp $

PORTNAME=	xcb
PORTVERSION=	2.4
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	http://oldhome.schmorp.de/marc/data/ \
		http://ftp.lyx.org/pub/pcg/marc/ \
		http://fossies.org/unix/misc/old/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for managing x11 cut-buffers

LICENSE=	MIT

USE_IMAKE=	yes
USE_XORG=	ice sm x11 xaw xext xmu xt

MAN1=		xcb.1
PLIST_FILES=	bin/xcb \
		lib/X11/app-defaults/Xcb

.include <bsd.port.mk>
