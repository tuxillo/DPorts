# New ports collection makefile for:	viewres
# Date Created:				17 Feb 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11/viewres/Makefile,v 1.5 2012/11/17 06:03:20 svnexp Exp $
#

PORTNAME=	viewres
PORTVERSION=	1.0.3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Graphical class browser for Xt

XORG_CAT=	app
USE_XORG=	xt xaw

MAN1=		viewres.1

PLIST_FILES+=	bin/viewres \
		share/X11/app-defaults/Viewres \
		share/X11/app-defaults/Viewres-color
PLIST_DIRS+=	share/X11/app-defaults \
		share/X11

.include <bsd.port.mk>
