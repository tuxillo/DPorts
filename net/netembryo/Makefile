# New ports collection makefile for:   netembryo
# Date created:        7 November 2007
# Whom:                Emmanuel Richiardone (err@tollari.org)
#
# $FreeBSD: ports/net/netembryo/Makefile,v 1.11 2012/11/22 19:48:11 svnexp Exp $
#

PORTNAME=	netembryo
PORTVERSION=	0.1.1
CATEGORIES=	net
MASTER_SITES=	http://lscube.org/files/downloads/netembryo/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Network abstraction library used by for feng, libnemesi, felix

LICENSE=	LGPL21

OPTIONS_DEFINE=	OPENSSL
OPTIONS_DEFAULT=OPENSSL

USE_BZIP2=	yes
USE_GNOME=	glib20 gnomehack
USE_PKGCONFIG=	build
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--disable-silent-rules
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MOPENSSL}
USE_OPENSSL=	yes
CONFIGURE_ENV+=	OPENSSL_CFLAGS="-I${OPENSSLINC}" \
		OPENSSL_LIBS="-L${OPENSSLLIB}"
.else
CONFIGURE_ARGS+=--without-openssl
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CPPFLAGS=|#CPPFLAGS| ; \
		 s|freebsd[0-9]|freebsd|' ${WRKSRC}/configure

.include <bsd.port.mk>
