# New ports collection makefile for:	Xfce4-parole
# Date created:		26 December 2009
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/multimedia/xfce4-parole/Makefile,v 1.22 2012/11/17 05:59:55 svnexp Exp $
#

PORTNAME=	parole
PORTVERSION=	0.3.0.3
CATEGORIES=	multimedia xfce
MASTER_SITES=	XFCE/src/apps/${PORTNAME}/0.3/
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Lightweight media player for Xfce4 based on gstreamer

LICENSE=	GPLv2

LIB_DEPENDS=	tag:${PORTSDIR}/audio/taglib \
		notify:${PORTSDIR}/devel/libnotify \
		dbus-glib-1:${PORTSDIR}/devel/dbus-glib

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USE_BZIP2=	yes
USE_GSTREAMER=	core faad flac wavpack
USE_GMAKE=	yes
CONFIGURE_ARGS=	--disable-power-manager-plugin \
		--enable-libnotify \
		--enable-taglib \
		--without-html-dir
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_GNOME=	gnomehack gtk20 glib20 intltool intlhack desktopfileutils
USE_XFCE=	configenv libmenu libutil
USE_XORG=	x11 sm
USE_LDCONFIG=	yes
USE_PKGCONFIG=	build

OPTIONS_DEFINE=	CDDA HTTP NLS
OPTIONS_DEFAULT=	CDDA HTTP NLS
CDDA_DESC=	CD audio support (cdparanoia)
HTTP_DESC=	HTTP streaming support (libsoup)

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCDDA}
USE_GSTREAMER+=	cdparanoia
.endif

.if ${PORT_OPTIONS:MHTTP}
USE_GSTREAMER+=	soup
.endif

.if ${PORT_OPTIONS:MNLS}
USE_GETTEXT=	yes
CONFIGURE_ARGS+=	--enable-nls
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

post-patch:
# Downgrade Glib version
	@${REINPLACE_CMD} -e 's|2\.32|2\.28|g' ${WRKSRC}/configure
# Fix .rc file path
	@${REINPLACE_CMD} -e 's|xfce4/src/misc|${PORTNAME}|g' \
		${WRKSRC}/src/common/parole-rc-utils.h

post-install:
	@-update-desktop-database

.include <bsd.port.mk>
