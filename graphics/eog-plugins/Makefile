# New ports collection makefile for:	eog-plugins
# Date created:		28 August 2009
# Whom:			Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/graphics/eog-plugins/Makefile,v 1.11 2012/11/17 05:58:04 svnexp Exp $
#   $MCom: ports/graphics/eog-plugins/Makefile,v 1.14 2010/09/04 18:09:30 kwm Exp $
#

PORTNAME=	eog-plugins
PORTVERSION=	2.30.1
PORTREVISION=	3
CATEGORIES=	graphics gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Plug-ins for the Eye of GNOME image viewer application

BUILD_DEPENDS=	eog:${PORTSDIR}/graphics/eog
LIB_DEPENDS=	gdata.7:${PORTSDIR}/devel/libgdata
RUN_DEPENDS=	eog:${PORTSDIR}/graphics/eog

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomeprefix gnomehack intlhack gtk20
WANT_GNOME=	yes
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

.if !defined(WITHOUT_CHAMPLAIN) || \
    (exists(${LOCALBASE}/lib/libchamplain-0.8.so)) || defined(WITH_CHAMPLIAN)
LIB_DEPENDS+=	champlain-0.8.1:${PORTSDIR}/graphics/libchamplain
PLIST_SUB+=	CHAMPLAIN=""
.else
PLUST_SUB+=	CHAMPLAIN="@comment "
.endif

.if !defined(WITHOUT_EXIF) || (exists(${LOCALBASE}/lib/libexif.so.12) || \
	defined(WITH_EXIF))
LIB_DEPENDS+=	exif.12:${PORTSDIR}/graphics/libexif
PLIST_SUB+=	EXIF=""
.else
PLIST_SUB+=	EXIF="@comment "
.endif

.if ${HAVE_GNOME:Mpygnome2}!=""
USE_GNOME+=	pygnome2
CONFIGURE_ARGS+=--enable-python
PLIST_SUB+=	PYTHON=""
.else
CONFIGURE_ARGS+=--disable-python
PLIST_SUB+=	PYTHON="@comment "
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|champlain-0.4|champlain-0.8|g' \
		-e 's|champlain-gtk-0.4|champlain-gtk-0.8|g' \
		${WRKSRC}/configure

.include <bsd.port.post.mk>
