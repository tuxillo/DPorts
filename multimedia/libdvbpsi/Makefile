# ex:ts=8
# Ports collection makefile for:	libdvbpsi
# Date created:			Aug 8, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/multimedia/libdvbpsi/Makefile,v 1.27 2012/11/17 05:59:50 svnexp Exp $
#

PORTNAME=	libdvbpsi
PORTVERSION=	0.2.2
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/libdvbpsi/%SUBDIR%/
MASTER_SITE_SUBDIR=	${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	A library for MPEG TS and DVB PSI tables decoding and generation

LICENSE=	LGPL21

USE_BZIP2=	yes
USE_GNOME=	gnomehack
USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
.if defined(WITH_DEBUG)
CONFIGURE_ARGS=		--enable-debug
.else
CONFIGURE_ARGS=		--enable-release
.endif
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-Wall|$${CFLAGS}|g ; \
		 s|-O6||g' ${WRKSRC}/configure

regression-test:
	@(cd ${WRKSRC}/misc && ./test_dr)

.include <bsd.port.mk>
