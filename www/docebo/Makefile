# New ports collection makefile for:   docebo
# Date created:		6 April 2008
# Whom:			Wen heping <wenheping@gmail.com>
#
# $FreeBSD: ports/www/docebo/Makefile,v 1.5 2012/11/17 06:02:31 svnexp Exp $
#

PORTNAME=	docebo
PORTVERSION=	4.0.2
CATEGORIES=	www
MASTER_SITES=	http://www.docebo.org/doceboCms/index.php?mn=docs&op=download&pi=5_4&id=86/

MAINTAINER=	wen@FreeBSD.org
COMMENT=	An Open Source e-Learning platform (LMS and LCMS)

USE_PHP=	mysql
USE_ZIP=	yes
SUB_FILES=	pkg-message
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
DO_FILES=	config.php admin.php index.php
DO_DIRS=	doceboCms doceboCore doceboCrm doceboEcom doceboLms doceboScs \
		files install readmelicense template upgrade xml_language

.include <bsd.port.pre.mk>

do-install:
	@${INSTALL} -d ${WWWDIR}

.for i in ${DO_FILES}
	@cd ${WRKDIR} && ${CP} ${i} ${WWWDIR}/
.endfor
.for i in ${DO_DIRS}
	@cd ${WRKDIR} && ${COPYTREE_SHARE} ${i} ${WWWDIR}/
.endfor

	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}
	@${CHMOD} -R 755 ${WWWDIR}

post-install:
	@${ECHO_CMD} '@exec ${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}' \
		>> ${TMPPLIST}
	@${ECHO_CMD} '@exec ${CHMOD} -R 755 ${WWWDIR}' \
		>> ${TMPPLIST}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
