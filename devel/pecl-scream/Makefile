# Date created:			  2011-12-28
# Whom:				  Volodymyr Kostyrko <c.kworr@gmail.com>
#
# $FreeBSD: ports/devel/pecl-scream/Makefile,v 1.2 2012/11/17 05:56:41 svnexp Exp $
#

PORTNAME=	scream
DISTVERSION=	0.1.0
CATEGORIES=	devel
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	c.kworr@gmail.com
COMMENT=	Break the silence operator

LICENSE=	PHP301

USE_PHP=	yes
USE_PHPEXT=	yes

test: build
	@(cd ${WRKSRC} && ${MAKE} test)

.include <bsd.port.mk>
