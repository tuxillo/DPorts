# New ports collection makefile for:	fancybox
# Date created:		2011-05-30
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/www/fancybox/Makefile,v 1.2 2012/11/17 06:02:33 svnexp Exp $
#

PORTNAME=	fancybox
PORTVERSION=	1.3.4
CATEGORIES=	www
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	jquery.${PORTNAME}-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A JavaScript library for image/html/multimedia content display

NO_BUILD=	yes
USE_ZIP=	yes

do-install:
	${MKDIR} ${WWWDIR}/
	cd ${WRKSRC}/${PORTNAME}/ && ${INSTALL_DATA} * ${WWWDIR}/
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}/

.include <bsd.port.mk>
