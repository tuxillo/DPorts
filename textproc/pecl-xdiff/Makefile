# Created by: Larry Rosenman <ler@lerctr.org>
# $FreeBSD: ports/textproc/pecl-xdiff/Makefile,v 1.8 2012/11/17 06:02:16 svnexp Exp $

PORTNAME=	xdiff
PORTVERSION=	1.5.2
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	A PECL extension to create/apply binary and text patches

LICENSE=	PHP301

LIB_DEPENDS=	xdiff.0:${PORTSDIR}/textproc/libxdiff

USE_PHP=	yes
USE_PHPEXT=	yes

LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
