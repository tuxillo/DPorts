# New ports collection makefile for:	PostgreSQL JDBC
# Date created:		January 14, 2002
# Whom:			Palle Girgensohn <girgen@partitur.se>
#
# $FreeBSD: ports/databases/postgresql-jdbc/Makefile,v 1.35 2012/11/17 05:55:20 svnexp Exp $
#

PORTNAME=	postgresql
PORTVERSION=	9.1.902
DISTVERSIONSUFFIX=.src
CATEGORIES=	databases java
MASTER_SITES=	http://jdbc.postgresql.org/download/
PKGNAMESUFFIX=	-jdbc
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${DISTVERSION:C/.([0-9][0-9][0-9]*)/-\1/g}${DISTVERSIONSUFFIX}

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	The Java JDBC implementation for PostgreSQL

DIST_SUBDIR=	postgresql

USE_ANT=	yes
USE_JAVA=	yes

PLIST_FILES=	%%JAVAJARDIR%%/postgresql.jar
PORTDOCS=	*
SUB_FILES=	pkg-message

post-patch:
	${REINPLACE_CMD} 's,/usr/local/pgsql/share/java,${JAVAJARDIR},' ${WRKSRC}/README

do-install:
	@ ${INSTALL_DATA} ${WRKSRC}/jars/postgresql.jar ${JAVAJARDIR}/postgresql.jar
.if !defined(NOPORTDOCS)
	@ ${MKDIR} -m 0755 ${DOCSDIR} ;\
	  ${INSTALL_DATA} ${WRKSRC}/README \
			  ${DOCSDIR}/README-jdbc
.endif

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
