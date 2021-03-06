# New ports collection makefile for:	libnids
# Date created:		08 Jan 2000
# Whom:			kris@FreeBSD.org
#
# $FreeBSD: ports/net/libnids/Makefile,v 1.29 2012/11/19 18:33:13 svnexp Exp $
#

PORTNAME=	libnids
PORTVERSION=	1.24
CATEGORIES=	net security
MASTER_SITES=	SF

MAINTAINER=	wxs@FreeBSD.org
COMMENT=	Network monitoring library with TCP/IP reassembly

LICENSE=	GPLv2

OPTIONS_DEFINE=	LIBNET GLIB2
LIBNET_DESC=	Use libnet 1.1.x
GLIB2_DESC=	Use GLIB2 for multiprocessing support
OPTIONS_DEFAULT=	LIBNET GLIB2

WANT_GNOME=	yes
GNU_CONFIGURE=	yes

MAN3=		libnids.3

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
PLIST_SUB+= PORTDOCS=""
.else
PLIST_SUB+= PORTDOCS="@comment "
.endif

.if ${PORT_OPTIONS:MLIBNET}
BUILD_DEPENDS+=	${LIBNET_CONFIG}:${PORTSDIR}/net/libnet
LIBNET_CONFIG?=	${LOCALBASE}/bin/libnet11-config
.else
CONFIGURE_ARGS+=	--disable-libnet
.endif

.if ${PORT_OPTIONS:MGLIB2}
USE_GNOME+=	glib20
.else
CONFIGURE_ARGS+=	--disable-libglib
.endif

post-patch:
	@${REINPLACE_CMD} -Ee \
		's|(LNET_CFLAGS=).*|\1"`${LIBNET_CONFIG} --defines` `${LIBNET_CONFIG} --cflags`"|; \
		 s|(LNETLIB=).*|\1"`${LIBNET_CONFIG} --libs`"|' \
		 ${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}

do-install:
		${INSTALL_DATA} ${WRKSRC}/src/nids.h ${PREFIX}/include
		${INSTALL_DATA} ${WRKSRC}/src/libnids.a ${PREFIX}/lib
		${INSTALL_MAN} ${WRKSRC}/src/libnids.3 ${PREFIX}/man/man3

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
.for i in README doc/*
	${INSTALL_DATA} ${WRKSRC}/$i ${DOCSDIR}/
.endfor
.endif

.include <bsd.port.mk>
