# New ports collection makefile for:	tablelog
# Date created:				11 July 2007
# Whom:					Robert Gogolok <gogo@cs.uni-sb.de>
#
# $FreeBSD: ports/databases/tablelog/Makefile,v 1.3 2012/11/17 05:55:25 svnexp Exp $
#

PORTNAME=	tablelog
PORTVERSION=	0.4.4
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://pgfoundry.org/frs/download.php/1387/

MAINTAINER=	gogo@cs.uni-sb.de
COMMENT=	Logs changes on a table in PostgreSQL

WRKSRC=		${WRKDIR}/table_log-${DISTVERSION}

USE_GMAKE=	yes
USE_PGSQL=	yes

IGNORE_WITH_PGSQL=	73

MAKE_ARGS=	USE_PGXS=1

PORTDOCS=	README.table_log table_log.sql

do-install:
	@${MKDIR} ${PREFIX}/lib/postgresql/
	@${INSTALL_PROGRAM} ${WRKSRC}/table_log.so ${PREFIX}/lib/postgresql/
	@${MKDIR} ${PREFIX}/share/postgresql/contrib/
	@${INSTALL_DATA} ${WRKSRC}/table_log_init.sql \
		${PREFIX}/share/postgresql/contrib/
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
