# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: ports/net/gssdp/Makefile,v 1.11 2012/11/17 06:00:01 svnexp Exp $

PORTNAME=	gssdp
PORTVERSION=	0.13.0
CATEGORIES=	net
MASTER_SITES=	GNOME

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Framework for UPnP devices

LICENSE=	LGPL20

BUILD_DEPENDS=	gobject-introspection>=0.6.7:${PORTSDIR}/devel/gobject-introspection
LIB_DEPENDS=	soup-2.4:${PORTSDIR}/devel/libsoup

OPTIONS_DEFINE=	GTK2
OPTIONS_DEFAULT=GTK2

CONFIGURE_ARGS=	--enable-introspection=yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	glib20 gnomehack
USE_LDCONFIG=	yes
USE_XZ=		yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGTK2}
USE_GNOME+=	gtk20
PLIST_SUB=	GTK=""
.else
PLIST_SUB=	GTK="@comment "
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|__OpenBSD__|__FreeBSD__|' ${WRKSRC}/libgssdp/gssdp-socket-functions.c

.include <bsd.port.mk>
