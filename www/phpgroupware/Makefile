# New ports collection makefile for:	phpgroupware
# Date created:        27 March 2001
# Whom:                Jimmy Olgeni <olgeni@uli.it>
#
# $FreeBSD: ports/www/phpgroupware/Makefile,v 1.3 2012/11/17 06:02:57 svnexp Exp $

PORTNAME=	phpgroupware
PORTVERSION=	0.9.16.017
CATEGORIES=	www
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	phpgroupware/phpgroupware/${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	A web based GroupWare system

USE_BZIP2=	yes
USE_PHP=	yes
WANT_PHP_MOD=	yes

NO_BUILD=	yes

do-install:
		@${MKDIR} -p ${PREFIX}/www/data-dist/phpgroupware
		@${CP} -r ${WRKSRC}/* ${PREFIX}/www/data-dist/phpgroupware

.include <bsd.port.mk>
