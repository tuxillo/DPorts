# New ports collection makefile for:   gtk13
# Date Created:			28 Sep 1997
# Whom:				Vanilla I. Shu <vanilla@MinJe.com.TW>
#
# $FreeBSD: ports/x11-toolkits/gtk20/Makefile,v 1.257 2012/11/17 06:03:35 svnexp Exp $
#   $MCom: ports/x11-toolkits/gtk20/Makefile,v 1.224 2011/06/16 17:36:39 kwm Exp $
#
# Remember to update graphics/gtk-update-icon-cache too.

PORTNAME=	gtk
PORTVERSION=	2.24.6
PORTREVISION?=	2
CATEGORIES=	x11-toolkits
MASTER_SITES=	${MASTER_SITE_GNOME:S,%SUBDIR%,sources/gtk+/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}/,} \
		ftp://ftp.gtk.org/pub/gtk/%SUBDIR%/ \
		ftp://ftp.gimp.org/pub/%SUBDIR%/ \
		ftp://ftp.cs.umn.edu/pub/gimp/%SUBDIR%/ \
		http://www.ameth.org/gimp/%SUBDIR%/ \
		ftp://ftp.mirror.ac.uk/sites/ftp.gimp.org/pub/%SUBDIR%/ \
		${MASTER_SITE_RINGSERVER:S,%SUBDIR%,graphics/gimp/%SUBDIR%,}
MASTER_SITE_SUBDIR=	gtk/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
DISTNAME=	gtk+-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Gimp Toolkit for X11 GUI (previous stable version)

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING
USE_XZ=		yes
LATEST_LINK=	gtk20

.if !defined(REFERENCE_PORT)

BUILD_DEPENDS+=	g-ir-scanner:${PORTSDIR}/devel/gobject-introspection
RUN_DEPENDS+=	${LOCALBASE}/share/mime/magic:${PORTSDIR}/misc/shared-mime-info \
		${LOCALBASE}/share/icons/hicolor/index.theme:${PORTSDIR}/misc/hicolor-icon-theme

USE_GMAKE=	yes
USE_PERL5_BUILD=yes
MAKE_JOBS_SAFE=	yes
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack atk pango gdkpixbuf2 ltverhack gtk-update-icon-cache
USE_GETTEXT=	yes
USE_XORG=	xext xrender x11 xinerama xi xrandr xcursor xfixes xdamage \
		xcomposite
CONFIGURE_ARGS=	--enable-static --with-xinput=yes
CPPFLAGS+=	-I${LOCALBASE}/include/freetype2 \
		-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gtk-query-immodules-2.0.1

.if defined(WITH_DEBUG)
CONFIGURE_ARGS+=	--enable-debug=yes
.endif

OPTIONS=	CUPS "Enable cups printing support" on

.include <bsd.port.options.mk>

.if defined(WITH_CUPS)
LIB_DEPENDS+=	cups.2:${PORTSDIR}/print/cups-client
CONFIGURE_ARGS+=--enable-cups=auto
PLIST_SUB+=	CUPS:=""
.else
CONFIGURE_ARGS+=--disable-cups
PLIST_SUB+=	CUPS:="@comment "
.endif

post-patch:
	@${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${GREP} -l lgmodule | \
		${XARGS} ${REINPLACE_CMD} -e 's|-lgmodule|@GMODULE_LIBS@|g'
	@${REINPLACE_CMD} -e 's|[{]libdir[}]/locale|{datadir}/locale|g' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|@LN_S@|${LN} -sf|' ${WRKSRC}/gtk/Makefile.in
	@${REINPLACE_CMD} -e 's|file,cups|file,cups,lpr|' \
		${WRKSRC}/gtk/Makefile.in

pre-configure:
.if !exists(${LOCALBASE}/libdata/pkgconfig/cairo-xlib.pc)
	@${ECHO_CMD} "${PKGNAME}: Needs cairo build with X11 support."
	@${FALSE}
.endif

pre-build:
	@${RM} -rf ${WRKSRC}/docs/gtk.info*

post-install:
	-@${FIND} ${LOCALBASE}/share/icons -type d -depth 1 -exec \
		${PREFIX}/bin/gtk-update-icon-cache -q -f {} \; 2>/dev/null
	@${MKDIR} ${PREFIX}/lib/gtk-2.0/modules
	@${MKDIR} ${PREFIX}/lib/gtk-2.0/${GTK2_VERSION}/engines
	@${MKDIR} ${PREFIX}/lib/gtk-2.0/${GTK2_VERSION}/loaders
	${INSTALL_MAN} ${MAN1:S|^|${WRKSRC}/docs/reference/gtk/|} \
		${PREFIX}/man/man1

.include <bsd.port.mk>

.endif
