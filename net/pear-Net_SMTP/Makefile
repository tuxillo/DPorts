# Ports collection makefile for:  pear-Net_SMTP
# Date created:			  26 November 2002
# Whom:				  Thierry Thomas (<thierry@pompo.net>)
#
# $FreeBSD: ports/net/pear-Net_SMTP/Makefile,v 1.28 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_SMTP
PORTVERSION=	1.6.1
CATEGORIES=	net mail www pear

MAINTAINER=	wen@FreeBSD.org
COMMENT=	PEAR class that provides an implementation of the SMTP protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		SMTP.php
DOCS=		guide.txt
TESTS=		auth.phpt basic.phpt config.php.dist quotedata.phpt
EXAMPLES=	basic.php

LATEST_LINK=	pear-Net_SMTP
OPTIONS=	PEAR_AUTH_SASL "PEAR::Auth_SASL support" off

.include <bsd.port.pre.mk>

.if defined(WITH_PEAR_AUTH_SASL)
BUILD_DEPENDS+=	${PEARDIR}/Auth/SASL.php:${PORTSDIR}/security/pear-Auth_SASL
.endif

.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
