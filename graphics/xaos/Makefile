# New ports collection makefile for:	XaoS
# Date created:				24 February 1996
# Whom:					Joseph Koshy <koshy@india.hp.com>
#
# $FreeBSD: ports/graphics/xaos/Makefile,v 1.43 2012/11/17 05:58:25 svnexp Exp $
#

PORTNAME=	xaos
PORTVERSION=	3.5
PORTREVISION=	3
CATEGORIES=	graphics math
MASTER_SITES=	SF/${PORTNAME}/XaoS/${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	A real-time fractal browser for X11 and ASCII terminals

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

USE_XORG=	x11 xext
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

OPTIONS_DEFINE=	GTK2 PTHREAD
GTK2_DESC=	GTK+ User Interface (experimental)
PTHREAD_DESC=	Enable SMP support (experimental)

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng15
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--with-aa-driver=no --with-dga-driver=no \
		--with-ggi-driver=no --with-svga-driver=no \
		--with-sffe=no

MAN6=		xaos.6
INFO=		xaos

PLIST_SUB+=	XAOSDIR="share/XaoS"

DESKTOP_ENTRIES=	"XaoS" "Fractal zoomer" "" "xaos" "" false

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPTHREAD}
CONFIGURE_ARGS+=	--with-pthread=yes
CONFIGURE_ENV+=		LIBS="${PTHREAD_LIBS}"
CFLAGS+=		${PTHREAD_CFLAGS}
.else
CONFIGURE_ARGS+=	--with-pthread=no
.endif

.if ${PORT_OPTIONS:MGTK2}
USE_GNOME=	gtk20
CONFIGURE_ARGS+=	--with-gtk-driver=yes --with-x11-driver=no
.endif

.if ${PORT_OPTIONS:MNLS}
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

pre-configure:
	${REINPLACE_CMD} -e 's,/usr\(/share/locale\),${PREFIX}\1,g' \
		${WRKSRC}/configure \
		${WRKSRC}/src/ui/ui.c

.include <bsd.port.mk>
