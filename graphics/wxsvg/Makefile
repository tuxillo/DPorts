# New ports collection makefile for:	wxsvg
# Date created:		2006-01-08
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/graphics/wxsvg/Makefile,v 1.35 2012/11/17 05:58:25 svnexp Exp $
#    $MCom: ports/graphics/wxsvg/Makefile,v 1.1 2006/09/22 01:48:33 ahze Exp $

PORTNAME=	wxsvg
PORTVERSION=	1.1.8
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ library to create, manipulate, and render SVG files

LIB_DEPENDS+=	avformat.1:${PORTSDIR}/multimedia/ffmpeg

USE_BZIP2=	yes
USE_AUTOTOOLS=	automake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_GNOME=	libartlgpl2
USE_GMAKE=	yes
USE_WX=		yes
USE_AUTOTOOLS=	automake
WX_CONF_ARGS=	absolute

AUTOTOOLSFILES=	aclocal.m4

post-patch:
	@${REINPLACE_CMD} -e 's|1.11.1|%%AUTOMAKE_APIVER%%|g' \
			  ${WRKSRC}/aclocal.m4
	@cd ${WRKSRC} && \
		${TOUCH} -f NEWS INSTALL
#	@${REINPLACE_CMD} -e 's|WX_CONFIG_NAME=wx-config|WX_CONFIG_NAME=${WX_CONFIG}|' \
#		${WRKSRC}/*.m4

.include <bsd.port.mk>
