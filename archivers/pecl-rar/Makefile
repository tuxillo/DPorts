# Created by: Chin-San Huang <chinsan.tw@gmail.com>
# $FreeBSD: ports/archivers/pecl-rar/Makefile,v 1.11 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	rar
PORTVERSION=	3.0.0
CATEGORIES=	archivers pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PECL extension to create and read RAR files

LICENSE=	PHP301

USE_PHP=	spl
USE_PHPEXT=	yes
USE_PHP_BUILD=	yes
IGNORE_WITH_PHP=4

CONFIGURE_ARGS=	--enable-rar

.include <bsd.port.mk>
