# New ports collection makefile for:	ots
# Date created:		9 June 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/textproc/ots/Makefile,v 1.10 2012/11/17 06:02:03 svnexp Exp $
#

PORTNAME=	ots
PORTVERSION=	0.5.0
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF/lib${PORTNAME}/lib${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open Text Summarizer

LIB_DEPENDS=	popt.0:${PORTSDIR}/devel/popt

USE_GNOME=	glib20 libxml2
USE_LDCONFIG=	yes
USE_GETTEXT=	yes
USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-shared
MAKE_ARGS=	pkgconfigdir="${PREFIX}/libdata/pkgconfig"
MAKE_JOBS_UNSAFE=yes

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|doc||' ${WRKSRC}/Makefile.in

post-build:
	@${REINPLACE_CMD} -e '/old_library/d' ${WRKSRC}/src/libots-1.la

.include <bsd.port.mk>
