# New ports collection makefile for:	prestashop
# Date created:				Nov 23, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/finance/prestashop/Makefile,v 1.3 2012/11/17 05:57:26 svnexp Exp $

PORTNAME=	prestashop
PORTVERSION=	1.4.9.0
CATEGORIES=	finance www
MASTER_SITES=	http://www.prestashop.com/download/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Open-Source e-Commerce Software for Web 2.0

USE_ZIP=	yes
NO_BUILD=	yes
PRESTADIR=	www/${PORTNAME}
PLIST=		${WRKDIR}/plist
SUB_FILES=	pkg-message
USE_PHP=	mysql gd
WRKSRC=		${WRKDIR}/${PORTNAME}
SUB_FILES=	pkg-message

.include <bsd.port.pre.mk>

pre-install:
	@${FIND} -s -d ${WRKSRC} -type f | ${SED} "s?${WRKSRC}?${PRESTADIR}?g" >${PLIST}
	@${FIND} -s -d ${WRKSRC} -type d  | ${SED} "s?${WRKSRC}?@dirrm ${PRESTADIR}?g" >> ${PLIST}

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}
	@${CHMOD} -R 755 ${WWWDIR}
	@${ECHO_CMD} '@exec ${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}' \
		>> ${TMPPLIST}
	@${ECHO_CMD} '@exec ${CHMOD} -R 755 ${WWWDIR}' >>${TMPPLIST}

	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
