# New ports collection makefile for:	fluxbb
# Date created:		19 May 2008
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/www/fluxbb/Makefile,v 1.6 2012/11/17 06:02:33 svnexp Exp $
#

PORTNAME=	fluxbb
PORTVERSION=	1.4.4
CATEGORIES=	www
MASTER_SITES=	http://fluxbb.org/download/releases/${PORTVERSION}/

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A fast and lightweight PHP-powered discussion board

SUB_FILES=	pkg-message
NO_BUILD=	yes
USE_PHP=	yes

OPTIONS=	MYSQL   "Add support for a MySQL database server" On \
		PGSQL   "Add support for a PostgreSQL database server" Off \
		SQLITE  "Add support for a SQLite database server" Off

.include <bsd.port.pre.mk>

.if defined(WITH_MYSQL)
USE_PHP+=	mysql
.endif

.if defined(WITH_PGSQL)
USE_PHP+=	pgsql
.endif

.if defined(WITH_SQLITE)
USE_PHP+=	sqlite
.endif

do-extract:
	@${MKDIR} ${WRKSRC}
	@${TAR} -yxf ${DISTDIR}/${DISTFILES} -C ${WRKSRC}

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}
	@${ECHO_CMD} '@exec ${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}' >> ${TMPPLIST}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
