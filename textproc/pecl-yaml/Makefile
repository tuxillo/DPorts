# New ports collection makefile for:	pecl-yaml
# Date created:				11 Feb, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/textproc/pecl-yaml/Makefile,v 1.4 2012/11/17 06:02:16 svnexp Exp $
#

PORTNAME=	yaml
PORTVERSION=	1.1.0
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	YAML-1.1 parser and emitter

LIB_DEPENDS=	yaml:${PORTSDIR}/textproc/libyaml

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes

.include <bsd.port.mk>
