# New ports collection makefile for:	timer plugin for xfce4
# Date created:				23 Januar 2007
# Whom:					Martin Wilke (miwi@FreeBSD.org)
#
# $FreeBSD: ports/x11-clocks/xfce4-timer-out-plugin/Makefile,v 1.19 2012/11/17 06:03:25 svnexp Exp $
#

PORTNAME=	xfce4-time-out-plugin
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	A timer out plugin for Xfce

USE_BZIP2=	yes
USE_GMAKE=	yes
INSTALLS_ICONS=	yes
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack gtk20 intltool intlhack pkgconfig
USE_XFCE=	configenv libmenu libutil panel

.include <bsd.port.mk>
