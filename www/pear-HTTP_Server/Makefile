# Ports collection makefile for:  pear-HTTP_Server
# Date created:			  24 Octobre 2004
# Whom:				  Gerrit Beine (<tux@pinguru.net>)
#
# $FreeBSD: ports/www/pear-HTTP_Server/Makefile,v 1.7 2012/11/17 06:02:56 svnexp Exp $
#

PORTNAME=	HTTP_Server
PORTVERSION=	0.4.0
CATEGORIES=	www devel pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTTP server class

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP \
		${PEARDIR}/Net/Server.php:${PORTSDIR}/net/pear-Net_Server
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	HTTP
FILES=		Server.php Server/Request.php
EXAMPLES=	HTTP_Server_File.php www/index.html

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
