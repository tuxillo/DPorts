# New ports collection makefile for:	php-plurk-api
# Date created:		2010-02-26
# Whom:			Bo-Yi Wu <appleboy.tw@gmail.com>
#
# $FreeBSD: ports/www/php-plurk-api/Makefile,v 1.7 2012/11/17 06:02:57 svnexp Exp $
#

PORTNAME=	php-plurk-api
PORTVERSION=	1.6.4
CATEGORIES=	www
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	appleboy.tw@gmail.com
COMMENT=	A Plurk API Implementation with PHP

LICENSE=	BSD

NO_BUILD=	yes
USE_PHP=	json curl
USE_ZIP=	yes
WRKSRC=		${WRKDIR}/${PORTVERSION}

SUB_LIST=	PKGNAME=${PKGNAME}
SUB_FILES=	pkg-message

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}
	@${ECHO_CMD} '@exec ${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}' >> ${TMPPLIST}
	@${FIND} ${WWWDIR} -type f -print0 | ${XARGS} -0 ${CHMOD} 644
	@${ECHO_CMD} '@exec ${FIND} ${WWWDIR} -type f -print0 | \
		${XARGS} -0 ${CHMOD} 644' >> ${TMPPLIST}
	@${FIND} ${WWWDIR} -type d -print0 | ${XARGS} -0 ${CHMOD} 755
	@${ECHO_CMD} '@exec ${FIND} ${WWWDIR} -type d -print0 | \
		${XARGS} -0 ${CHMOD} 755' >> ${TMPPLIST}
	@${CHMOD} 755 ${WWWDIR}/example.php
	@${ECHO_CMD} '@exec ${CHMOD} 755 ${WWWDIR}/example.php' >> ${TMPPLIST}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
