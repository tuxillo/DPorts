# New ports collection makefile for:	gedit-plugins
# Date created:				19 September 2003
# Whom:					Adam Weinberger <adamw@FreeBSD.org>
#
# $FreeBSD: ports/editors/gedit-plugins/Makefile,v 1.43 2012/11/17 05:57:13 svnexp Exp $
#   $MCom: ports/editors/gedit-plugins/Makefile,v 1.48 2010/10/29 14:47:24 kwm Exp $
#

PORTNAME=	gedit-plugins
PORTVERSION=	2.32.0
PORTREVISION=	2
CATEGORIES=	editors gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Plugins for GEdit 2

BUILD_DEPENDS=	gedit:${PORTSDIR}/editors/gedit \
		gucharmap:${PORTSDIR}/deskutils/gucharmap
RUN_DEPENDS=	gedit:${PORTSDIR}/editors/gedit \
		gucharmap:${PORTSDIR}/deskutils/gucharmap

USE_LDCONFIG=	yes
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes
USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack gnomeprefix intlhack gnomevfs2
WANT_GNOME=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GCONF_SCHEMAS=	gedit-show-tabbar-plugin.schemas \
		gedit-drawspaces.schemas

OPTIONS=	PYTHON "Build plugins that depend on python" off

.if defined(PACKAGE_BUILDING)
.undef WITHOUT_GNOME
WITH_GNOME=	yes
.endif

.include <bsd.port.pre.mk>

.if ${HAVE_GNOME:Mpygtksourceview}!="" && ${ARCH}!="sparc64" || defined(WITH_PYTHON)
USE_PYTHON=	yes
.include "${PORTSDIR}/Mk/bsd.python.mk"
USE_GNOME+=	pygtksourceview
BUILD_DEPENDS+=	${PYTHON_SITELIBDIR}/gtk-2.0/vtemodule.so:${PORTSDIR}/x11-toolkits/py-vte \
		${PYTHON_SITELIBDIR}/dbus/bus.py:${PORTSDIR}/devel/py-dbus \
		${PYTHON_SITELIBDIR}/gtksourceview2.so:${PORTSDIR}/x11-toolkits/py-gtksourceview
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/gtk-2.0/vtemodule.so:${PORTSDIR}/x11-toolkits/py-vte \
		${PYTHON_SITELIBDIR}/dbus/bus.py:${PORTSDIR}/devel/py-dbus \
		${PYTHON_SITELIBDIR}/gtksourceview2.so:${PORTSDIR}/x11-toolkits/py-gtksourceview
CONFIGURE_ARGS+=--enable-python
PLIST_SUB+=	PYTHON=""
.else
CONFIGURE_ARGS+=--disable-python
PLIST_SUB+=	PYTHON="@comment "
.endif

post-patch:
	@${REINPLACE_CMD} -e 's| \\t\\r\\n\\f|[:space:]|g' \
	    	${WRKSRC}/configure

.include <bsd.port.post.mk>
