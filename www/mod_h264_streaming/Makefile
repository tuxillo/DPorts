# New ports collection makefile for:	mod_h264_streaming
# Date created:				May 14, 2009
# Whom:					Li-Wen Hsu <lwhsu@FreeBSD.org>
#
# $FreeBSD: ports/www/mod_h264_streaming/Makefile,v 1.8 2012/11/17 06:02:41 svnexp Exp $
#

PORTNAME=	mod_h264_streaming
PORTVERSION=	2.2.7
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://h264.code-shop.com/download/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}
DISTNAME=	apache_${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	apache2

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Apache H264 streaming module

MAKE_JOBS_SAFE=	yes

USE_APACHE=	22+

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-apxs="${APXS}"

RESTRICTED=	no-commercial-use

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PLIST_SUB=	SED=${SED}

.include <bsd.port.mk>
