# New ports collection makefile for:	sqlitemanager
# Date created:		2006-12-18
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/databases/sqlitemanager/Makefile,v 1.5 2012/11/17 05:55:25 svnexp Exp $
#

PORTNAME=	sqlitemanager
PORTVERSION=	1.2.3
CATEGORIES=	databases www
MASTER_SITES=	SF
DISTNAME=	SQLiteManager-${PORTVERSION}

MAINTAINER=	gslin@gslin.org
COMMENT=	A multilingual web based tool to manage SQLite database

DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5
NO_BUILD=	yes
PLIST_SUB+=	WWWDIR_REL="${WWWDIR_REL}"
USE_PHP=	sqlite

do-install:
	${MKDIR} ${WWWDIR}
	${CP} -R ${WRKSRC}/ ${WWWDIR}

.include <bsd.port.mk>
