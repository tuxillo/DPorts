# New ports collection makefile for:	xfce4-appfinder
# Date created:				12 October 2004
# Whom:					Oliver Lehmann <oliver@FreeBSD.org>
#
# $FreeBSD: ports/misc/xfce4-appfinder/Makefile,v 1.33 2012/11/17 05:59:46 svnexp Exp $
#

PORTNAME=	xfce4-appfinder
PORTVERSION=	4.10.0
PORTREVISION=	1
CATEGORIES=	misc xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Application launcher and finder

LIB_DEPENDS=	dbus-glib-1.2:${PORTSDIR}/devel/dbus-glib

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GETTEXT=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20 glib20 intltool intlhack pkgconfig desktopfileutils
USE_XFCE=	configenv garcon libmenu libutil xfconf

post-install:
	@-update-desktop-database

.include <bsd.port.mk>
