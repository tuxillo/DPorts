# New ports collection makefile for:	gok
# Date created:			12 April 2003
# Whom:				Adam Weinberger <adamw@freebsd.org>
#
# $FreeBSD: ports/accessibility/gok/Makefile,v 1.52 2012/11/17 05:54:19 svnexp Exp $
#    $MCom: ports/accessibility/gok/Makefile,v 1.112 2010/09/29 07:37:57 kwm Exp $
#

PORTNAME=	gok
PORTVERSION=	2.30.1
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	accessibility sysutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME On-Screen Keyboard (GOK)

LIB_DEPENDS=	canberra-gtk.0:${PORTSDIR}/audio/libcanberra \
    		dbus-glib-1.2:${PORTSDIR}/devel/dbus-glib

USE_BZIP2=	yes
USE_GETTEXT=	yes
INSTALLS_OMF=	yes
USE_GNOME=	gnomehack gnomeprefix intlhack libgnomeui atspi libwnck \
		gnomespeech libxml2
USE_GMAKE=	yes
INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GCONF_SCHEMAS=	gok.schemas

.include <bsd.port.mk>
