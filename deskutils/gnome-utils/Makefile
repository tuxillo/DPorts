# New ports collection makefile for:	gnomeutils2
# Date created:				06 May 2002
# Whom:					Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/gnome-utils/Makefile,v 1.112 2012/11/17 05:55:27 svnexp Exp $
#   $MCom: ports/deskutils/gnome-utils/Makefile,v 1.150 2010/09/28 08:41:46 kwm Exp $
#

PORTNAME=	gnome-utils
PORTVERSION=	2.32.0
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 2 support utilities

LIB_DEPENDS=	gtop-2.0.7:${PORTSDIR}/devel/libgtop \
		canberra-gtk.0:${PORTSDIR}/audio/libcanberra

USE_BZIP2=	yes
USE_GETTEXT=	yes
INSTALLS_OMF=	yes
USE_GMAKE=	yes
GNOME_DESKTOP_VERSION=2
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	gnomeprefix gnomehack intlhack gnomepanel ltverhack
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--enable-maintainer-flags=no
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gnome-dictionary.1 gnome-screenshot.1 gnome-search-tool.1 \
		gnome-system-log.1 baobab.1
GCONF_SCHEMAS=	gnome-dictionary.schemas gnome-screenshot.schemas \
		gnome-search-tool.schemas baobab.schemas \
		gnome-system-log.schemas

post-patch:
	@${REINPLACE_CMD} -e 's|-DGTK_DISABLE_DEPRECATED||g' \
		${WRKSRC}/gsearchtool/libgnomeui-deprecated/Makefile.in

.include <bsd.port.mk>
