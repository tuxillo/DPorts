# New ports collection makefile for:	surrealtodo
# Date created:				17 January 2011
# Whom:					jamrich.majo@gmail.com
#
# $FreeBSD: ports/deskutils/surrealtodo/Makefile,v 1.6 2012/11/17 05:55:30 svnexp Exp $
#

PORTNAME=	surrealtodo
PORTVERSION=	0.6.1.2
CATEGORIES=	deskutils
MASTER_SITES=	SF/surrealtodo/Surreal%20ToDo/
DISTNAME=	surrealtodo_v${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Surreal ToDo is an AJAX enabled web 2.0 list manager

USE_ZIP=	yes
USE_PHP+=	mysql
USE_MYSQL=	yes
NO_BUILD=	yes
WWWOWN=		www
WWWGRP=		${WWWOWN}

PKGMESSAGE=	${WRKDIR}/${PORTNAME}/pkg-message
SUB_FILES=	pkg-message
PLIST_DIRSTRY=	%%WWWDIR%%

OPTIONS_DEFINE=	PGSQL APACHE LIGHTTPD
OPTIONS_DEFAULT=	APACHE
LIGHTTPD_DESC=	Use Lighttpd webserver

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPOSTGRE}
USE_PHP+=	pgsql
.endif
.if ${PORT_OPTIONS:MAPACHE}
USE_APACHE_RUN=	22
.endif
.if ${PORT_OPTIONS:MLIGHTTPD}
RUN_DEPENDS+=	lighttpd:${PORTSDIR}/www/lighttpd
.endif

do-install:
	@${MKDIR} ${WWWDIR}
	@${CP} -r ${WRKDIR}/${PORTNAME}_v${PORTVERSION}/* ${WWWDIR}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
