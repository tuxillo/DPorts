# Created by: Jerry A! <jerry@thehutt.org>
# $FreeBSD: ports/devel/libstroke/Makefile,v 1.22 2012/12/06 23:31:45 svnexp Exp $

PORTNAME=	libstroke
PORTVERSION=	0.5.1
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	http://etla.net/libstroke/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A stroke translation library

USE_XORG=	x11
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
WANT_GNOME=	yes
USE_LDCONFIG=	yes
USE_GCC=	any

OPTIONS_DEFINE=	GTK1
GTK1_DESC=	Build with legacy Gtk+/GNOME stroke support

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGTK1} || !empty(HAVE_GNOME:Mgtk12)
USE_GNOME+=	gtk12
PLIST_SUB+=	GS=""
.else
PLIST_SUB+=	GS="@comment "
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${CONFIG_SHELL-/bin/sh} $$ac_aux_dir|$$ac_aux_dir|' \
			${WRKSRC}/configure

.include <bsd.port.mk>
