# Ports collection makefile for:  pear-HTTP_Request
# Date created:			  04 April 2004
# Whom:				  Thierry Thomas (<thierry@FreeBSD.org>)
#
# $FreeBSD: ports/www/pear-HTTP_Request/Makefile,v 1.16 2012/11/17 06:02:56 svnexp Exp $
#

PORTNAME=	HTTP_Request
PORTVERSION=	1.4.4
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR classes providing an easy way to perform HTTP requests

BUILD_DEPENDS=	${PEARDIR}/Net/URL.php:${PORTSDIR}/net/pear-Net_URL		\
		${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	HTTP
FILES=		Request.php Request/Listener.php
EXAMPLES=	example.php download-progress.php
_EXAMPLESDIR=	docs

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
