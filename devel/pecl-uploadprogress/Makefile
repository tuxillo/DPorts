# New ports collection makefile for:	pecl-uploadprogress
# Date created:			2006/12/06
# Whom:				chinsan
#
# $FreeBSD: ports/devel/pecl-uploadprogress/Makefile,v 1.10 2012/11/17 05:56:41 svnexp Exp $
#

PORTNAME=	uploadprogress
PORTVERSION=	1.0.2
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Provides track progress of a file upload

USE_PHP=	yes
USE_PHPEXT=	yes
IGNORE_WITH_PHP=4
DEFAULT_PHP_VER=53

CONFIGURE_ARGS=	--enable-uploadprogress

.include <bsd.port.mk>
