# New ports collection makefile for:	gconf2
# Date created:				28th June 2000
# Whom:					Ade Lovett <ade@FreeBSD.org>
#
# $FreeBSD: ports/devel/gconf2/Makefile,v 1.99 2012/11/17 05:55:44 svnexp Exp $
#   $MCom: ports/devel/gconf2/Makefile,v 1.124 2010/11/15 22:14:03 kwm Exp $
#

PORTNAME=	gconf2
PORTVERSION=	2.32.0
PORTREVISION?=	3
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	sources/GConf/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
DISTNAME=	GConf-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A configuration database system for GNOME

USE_BZIP2=	yes

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

.if !defined(REFERENCE_PORT)

LIB_DEPENDS=	dbus-glib-1.2:${PORTSDIR}/devel/dbus-glib \
		polkit-gobject-1.0:${PORTSDIR}/sysutils/polkit

USE_GMAKE=	yes
USE_GETTEXT=	yes
USE_GNOME=	gnomehier gnomehack orbit2 gtk20 libxml2 ltverhack \
		referencehack intlhack dconf
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc \
		--disable-gtk-doc
#		--enable-gconf-source=${PREFIX}/etc/gconf/schemas \

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
MAN1=		gconftool-2.1 gsettings-data-convert.1 \
		gsettings-schema-convert.1

OPTIONS=	LDAP "Enable LDAP support" off

.include <bsd.port.pre.mk>

.if defined(WITH_LDAP)
USE_OPENLDAP=	yes
CONFIGURE_ARGS+=--with-openldap
PLIST_SUB+=	LDAP=""
.else
CONFIGURE_ARGS+=--without-openldap
PLIST_SUB+=	LDAP="@comment "
.endif

post-install:
	-${LOCALBASE}/bin/gio-querymodules ${PREFIX}/lib/gio/modules

.include <bsd.port.post.mk>

.endif
