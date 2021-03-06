# New ports collection makefile for:	gtkhtml3
# Date created:				12 March 2003
# Whom:					Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/www/gtkhtml3/Makefile,v 1.125 2012/11/17 06:02:34 svnexp Exp $
#   $MCom: ports/www/gtkhtml3/Makefile,v 1.180 2011/03/19 17:33:16 mezz Exp $
#

PORTNAME=	gtkhtml3
PORTVERSION=	3.32.1
PORTREVISION=	2
CATEGORIES=	www gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	sources/${PORTNAME:S/3$//}/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
DISTNAME=	${PORTNAME:S/3$//}-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Lightweight HTML rendering/printing/editing engine

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/iso-codes.pc:${PORTSDIR}/misc/iso-codes \
		${LOCALBASE}/libdata/pkgconfig/gnome-icon-theme.pc:${PORTSDIR}/misc/gnome-icon-theme
LIB_DEPENDS=	soup-2.4.1:${PORTSDIR}/devel/libsoup \
		enchant.1:${PORTSDIR}/textproc/enchant
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/iso-codes.pc:${PORTSDIR}/misc/iso-codes \
		${LOCALBASE}/libdata/pkgconfig/gnome-icon-theme.pc:${PORTSDIR}/misc/gnome-icon-theme

USE_GETTEXT=	yes
USE_BZIP2=	yes
USE_XORG=	xinerama xi xrandr xcursor xcomposite xdamage
USE_GMAKE=	yes
USE_GNOME=	gnomeprefix gnomehack intlhack gconf2 ltverhack
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_SUB=	VERSION="3.14"

post-patch:
	@${REINPLACE_CMD} -e 's|@INTLTOOL_LIBDIR@|${LOCALBASE}/libdata|' \
	    	${WRKSRC}/intltool-merge.in
	@${REINPLACE_CMD} -e 's|-Wmissing-include-dirs||g ; \
		s|-DGTK_DISABLE_DEPRECATED||g ; \
	    	s|-DGDK_DISABLE_DEPRECATED||g' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|gtkhtml-editor-test[$$]|gtkhtml3-editor-test$$|' \
	    	${WRKSRC}/components/editor/Makefile.in

.include <bsd.port.mk>
