# New ports collection makefile for:	aolserver-nsmysql
# Date created:		12 Oct 2006
# Whom:			Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/databases/aolserver-nsmysql/Makefile,v 1.8 2012/11/17 05:55:05 svnexp Exp $
#

PORTNAME=	nsmysql
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	databases www
MASTER_SITES=	SF/aolserver/${PORTNAME}/${PORTNAME}_v1
PKGNAMEPREFIX=	aolserver-
DISTNAME=	nsmysql_v1
DIST_SUBDIR=	aolserver

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Internal MySQL database driver for AOLserver

AOLSERVERBASE?=	aolserver
BUILD_DEPENDS+=	${LOCALBASE}/${AOLSERVERBASE}/bin/nsd:${PORTSDIR}/www/aolserver
RUN_DEPENDS+=	${LOCALBASE}/${AOLSERVERBASE}/bin/nsd:${PORTSDIR}/www/aolserver

USE_MYSQL=	yes
USE_GMAKE=	yes

MAKE_ARGS=	AOLSERVER="${LOCALBASE}/${AOLSERVERBASE}" \
		MYSQL_PREFIX="${LOCALBASE}" \
		MODLIBS="-L${LOCALBASE}/lib/mysql -lmysqlclient_r" \
		DLLLIBS="-L${LOCALBASE}/lib/mysql -lmysqlclient_r" \
		NO_LDOVERRIDE=1

PLIST_FILES=	${AOLSERVERBASE}/bin/nsmysql.so \
		${AOLSERVERBASE}/lib/libnsmysql.a \
		${AOLSERVERBASE}/lib/libnsmysql.so

.if !defined(NOPORTDOCS)
PORTDOCS=	ChangeLog README INSTALL
.endif

post-patch:
	@${REINPLACE_CMD} -e 's/^MODLIBS  =/MODLIBS +=/g' \
		-e '/^OBJS      =.*/{n;s/.*/MODOBJS  = $$(OBJS)/g;G;}' \
		${WRKSRC}/Makefile

post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
.for FILE in ${PORTDOCS}
	@ ${INSTALL_DATA} ${WRKSRC}/${FILE} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
