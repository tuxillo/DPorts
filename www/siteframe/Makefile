# New ports collection makefile for:	siteframe
# Date created:				9 January 2006
# Whom:					Glen Campbell
#
# $FreeBSD: ports/www/siteframe/Makefile,v 1.15 2012/11/17 06:03:06 svnexp Exp $
#

PORTNAME=	siteframe
PORTVERSION=	5.0.2
PORTREVISION=	4
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.broadpool.net/pub/siteframe/

MAINTAINER=	glen@broadpool.com
COMMENT=	A web community content management system in PHP5 and MySQL

RUN_DEPENDS=	${LOCALBASE}/share/smarty/Smarty.class.php:${PORTSDIR}/www/smarty2

USE_APACHE_RUN=	22+
USE_PHP=	mysqli simplexml xml session gd
DEFAULT_PHP_VER=	5
IGNORE_WITH_PHP=	4
USE_MYSQL=	yes
IGNORE_WITH_MYSQL=	40

# where to install
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
.ifndef SITEFRAMEDIR
.ifdef APACHE_DATADIR
SITEFRAMEDIR=	${APACHE_DATADIR}/siteframe
.else
SITEFRAMEDIR=	${WWWDIR}
.endif
.endif

SUB_FILES=	pkg-message
SUB_LIST=	DIR=${SITEFRAMEDIR}

do-install:
	${MKDIR} ${SITEFRAMEDIR}/
	${CP} -R ${WRKSRC}/* ${SITEFRAMEDIR}/
	${CHOWN} -R ${WWWOWN} ${SITEFRAMEDIR}/

post-install:
	${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
