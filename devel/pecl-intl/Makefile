# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/devel/pecl-intl/Makefile,v 1.16 2012/12/18 23:19:32 svnexp Exp $

PORTNAME=	intl
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to support Internationalization(ICU)

LICENSE=	PHP301

LIB_DEPENDS=	icui18n:${PORTSDIR}/devel/icu

USE_PHP=	yes
USE_PHPEXT=	yes
IGNORE_WITH_PHP=52

.include <bsd.port.mk>
