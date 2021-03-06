# New ports collection makefile for:	www/asterisk-stat
# Date created:				16 June 2007
# Whom:					Fumihiko Kimura <jfkimura@yahoo.com>
#
# $FreeBSD: ports/www/asterisk-stat/Makefile,v 1.18 2012/11/17 06:02:28 svnexp Exp $
#

PORTNAME=	asterisk-stat
PORTVERSION=	2.0.1
PORTREVISION=	13
CATEGORIES=	www
MASTER_SITES=	http://www.areski.net/${SITE_SUBDIR}/
DISTNAME=	${PORTNAME}-v${PORTVERSION:S/./_/g}

MAINTAINER=	jfkimura@yahoo.co.jp
COMMENT=	ASTERISK call detail records analyzer

LIB_DEPENDS=	gd.[4-9]:${PORTSDIR}/graphics/gd

NO_BUILD=	yes
USE_PHP=	session gd pcre
WANT_PHP_WEB=	yes
ASTERISKDIR?=	${WWWDIR}
SITE_SUBDIR=	asterisk-stat-v2
WRKSRC=		${WRKDIR}/${SITE_SUBDIR}
SUB_FILES=	pkg-message
SUB_LIST+=	ASTERISKDIR=${ASTERISKDIR}

OPTIONS=	PGSQL "Use PostgreSQL instead of MySQL" off

.include <bsd.port.pre.mk>

.if defined(WITH_PGSQL)
ASTERISKSTATDB=	pgsql
EXTRA_PATCHES+=	${FILESDIR}/pgsql__patch-call.log.php
.else
ASTERISKSTATDB=	mysql
.endif

USE_PHP+=	${ASTERISKSTATDB}
EXTRA_PATCHES+=	${FILESDIR}/${ASTERISKSTATDB}__patch-cdr.php \
		${FILESDIR}/${ASTERISKSTATDB}__patch-defines.php
PLIST_SUB+=	ASTERISKDIR=${ASTERISKDIR:S,^${PREFIX}/,,} \
		ASTERISKSTATDB=${ASTERISKSTATDB}

post-patch:
	@${MV} ${WRKSRC}/images/print.css ${WRKSRC}/css
	@${CP} ${WRKSRC}/images/spacer.gif ${WRKSRC}/images/clear.gif
	@${CP} ${WRKSRC}/css/images/*png ${WRKSRC}/images
	@${RM} ${WRKSRC}/about.php \
		${WRKSRC}/lib/defines.php.orig \
		${WRKSRC}/cdr.php.orig \
		${WRKSRC}/export_pdf.php.orig

do-install:
	@${MKDIR} ${ASTERISKDIR}
	@${MV} ${WRKSRC}/lib/defines.php ${WRKSRC}/lib/defines.php-dist
	(cd ${WRKSRC}/ && ${COPYTREE_SHARE} \* ${ASTERISKDIR})
	${MKDIR} ${PREFIX}/etc/asterisk
	${INSTALL_DATA} ${FILESDIR}/cdr_${ASTERISKSTATDB}.tbl ${PREFIX}/etc/asterisk
	${CHOWN} -R ${WWWOWN}:${WWWGRP} ${ASTERISKDIR}

.include <bsd.port.post.mk>
