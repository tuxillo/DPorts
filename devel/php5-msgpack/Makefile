# New ports collection makefile for:	php5-msgpack
# Date created:				2012-01-02
# Whom:					Valery Komarov <komarov@valerka.net>
#
# $FreeBSD: ports/devel/php5-msgpack/Makefile,v 1.7 2012/11/17 05:56:41 svnexp Exp $
#

PORTNAME=	msgpack
PORTVERSION=	2012.05.05
CATEGORIES=	devel
MASTER_SITES=	http://github.com/${GITHUB_USER}/${GITHUB_REPO}/tarball/${GITVERSION}/
PKGNAMEPREFIX=	php5-
DISTNAME=	msgpack-msgpack-${GITVERSION}

MAINTAINER=	komarov@valerka.net
COMMENT=	PHP extension for interfacing with MessagePack

WRKSRC=		${WRKDIR}/msgpack-msgpack-${GITVERSION}/php

GITHUB_USER=	msgpack
GITHUB_REPO=	msgpack
GITVERSION=	980a652
FETCH_ARGS=	-pRr

USE_PHP=	session
USE_PHP_BUILD=	yes
USE_PHPIZE=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	msgpack

.include <bsd.port.mk>
