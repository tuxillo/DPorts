# New ports collection makefile for:	gnome-settings-daemon
# Date created:				14 Jan 2008
# Whom:					Koop Mast <kwm@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/gnome-settings-daemon/Makefile,v 1.26 2012/11/17 06:01:33 svnexp Exp $
#   $MCom: ports/sysutils/gnome-settings-daemon/Makefile,v 1.75 2011/04/25 19:56:57 mezz Exp $
#

PORTNAME=	gnome-settings-daemon
PORTVERSION=	2.32.1
PORTREVISION=	4
CATEGORIES=	sysutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 2 settings daemon

LIB_DEPENDS=	canberra-gtk.0:${PORTSDIR}/audio/libcanberra \
		notify.4:${PORTSDIR}/devel/libnotify \
		gdbm.4:${PORTSDIR}/databases/gdbm \
		nss3.1:${PORTSDIR}/security/nss
RUN_DEPENDS=	xrdb:${PORTSDIR}/x11/xrdb

CONFLICTS=	gnome-settings-daemon-3.[0-9]*

USE_XORG=	xxf86misc
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomeprefix intlhack gnomehack gnomedesktop libgnomekbd
USE_GETTEXT=	yes
USE_GSTREAMER=	good
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS=	PULSEAUDIO "Enable Pulseaudio support" On

GCONF_SCHEMAS=	apps_gnome_settings_daemon_housekeeping.schemas \
		apps_gnome_settings_daemon_keybindings.schemas \
		apps_gnome_settings_daemon_xrandr.schemas \
		desktop_gnome_font_rendering.schemas \
		desktop_gnome_keybindings.schemas \
		desktop_gnome_peripherals_smartcard.schemas \
		desktop_gnome_peripherals_touchpad.schemas \
		gnome-settings-daemon.schemas

.include <bsd.port.pre.mk>

.if defined(WITHOUT_PULSEAUDIO)
CONFIGURE_ARGS+=--disable-pulse
PLIST_SUB+=	PULSEAUDIO="@comment "
.else
LIB_DEPENDS+=	pulse.0:${PORTSDIR}/audio/pulseaudio
CONFIGURE_ARGS+=--enable-pulse
PLIST_SUB+=	PULSEAUDIO=""
.endif

.include <bsd.port.post.mk>
