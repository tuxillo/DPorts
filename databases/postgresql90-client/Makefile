# New ports collection makefile for:	PostgreSQL-client
# Date created:				2009-07-08
# Whom:					Palle Girgensohn <girgen@FreeBSD.org>
#
# $FreeBSD: ports/databases/postgresql90-client/Makefile,v 1.10 2012/11/17 05:55:20 svnexp Exp $
#
# To depend on postgresql-client, set USE_PGSQL=yes.
# See Mk/bsd.databases.mk for more info

PORTNAME=	postgresql
PORTREVISION=	0
PKGNAMESUFFIX=	-client

COMMENT=	PostgreSQL database (client)

MASTERDIR=	${.CURDIR}/../postgresql90-server

BUILD_DIRS=	config src/include src/interfaces src/port \
		src/bin/pg_dump src/bin/psql src/bin/scripts src/bin/pg_config \
		doc src/makefiles
INSTALL_DIRS=	${BUILD_DIRS}
CLIENT_ONLY=	yes
USE_LDCONFIG=	yes

.include "${MASTERDIR}/Makefile"
