# Ports collection makefile for:  pear-HTTP_Header
# Date created:			  13 December 2003
# Whom:				  Alex Miller (<asm@asm.kiev.ua>)
#
# $FreeBSD: ports/www/pear-HTTP_Header/Makefile,v 1.14 2012/11/17 06:02:56 svnexp Exp $
#

PORTNAME=	HTTP_Header
PORTVERSION=	1.2.1
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR OO interface to modify and handle HTTP headers and status codes

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP
RUN_DEPENDS:=	${BUILD_DEPENDS}

PEAR_CATSRC=	yes
CATEGORY=	HTTP
FILES=		Header.php Header/Cache.php
TESTS=		response.php cacheresponse.php header.php header_cache.php \
		README.txt

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
