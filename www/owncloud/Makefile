# $FreeBSD: ports/www/owncloud/Makefile,v 1.13 2013/01/10 03:08:36 svnexp Exp $

PORTNAME=	owncloud
PORTVERSION=	4.5.5
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://owncloud.org/releases/

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	Personal cloud which runs on your own server

BUILD_DEPENDS=	mp3info:${PORTSDIR}/audio/mp3info
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	yes
USE_PHP=	ctype curl dom fileinfo gd hash iconv json mbstring mysql \
		pdo pdo_mysql pdo_sqlite session simplexml sqlite3 xml zip \
		zlib
WANT_PHP_WEB=	yes
DEFAULT_PHP_VER=5

WWWDOCROOT?=	www

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes
SUB_FILES=	pkg-message

do-install:
	${MKDIR} ${WWWDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}

post-install:
	@${CAT} ${PKGMESSAGE}
	@cd ${WRKSRC} && \
	    ${FIND} -s -d . -type f -print | \
		${SED} -e "s#^\.#${WWWDIR_REL}#" >> ${TMPPLIST}
	@cd ${WRKSRC} && \
	    ${FIND} -s -d . -type d  -print | \
		${SED} -e "s#^\.#@dirrm ${WWWDIR_REL}#" >> ${TMPPLIST}

.include <bsd.port.mk>
