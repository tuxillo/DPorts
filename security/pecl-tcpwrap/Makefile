# New ports collection makefile for:	pecl-tcpwrap
# Date created:			2006/08/01
# Whom:				chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD: ports/security/pecl-tcpwrap/Makefile,v 1.8 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	tcpwrap
PORTVERSION=	1.1.3
CATEGORIES=	security pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension which provides tcpwrappers binding

USE_PHP=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

post-patch:
	@${REINPLACE_CMD} -e 's, -ldl,,' ${WRKSRC}/config.m4

.include <bsd.port.mk>
