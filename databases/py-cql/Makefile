# New ports collection makefile for:	py-cql
# Date created:		2011-12-14
# Whom:			Radim Kolar <hsn@fbsd8.localdomain>
#
# $FreeBSD: ports/databases/py-cql/Makefile,v 1.4 2012/11/17 05:55:22 svnexp Exp $
#

PORTNAME=	cql
PORTVERSION=	1.0.10
CATEGORIES=	databases python
MASTER_SITES=	http://cassandra-dbapi2.apache-extras.org.codespot.com/files/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
#DISTNAME=	cql-${PORTVERSION}

MAINTAINER=	hsn@sendmail.cz
COMMENT=	Python DB-API 2.0 client interface for Cassandra

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/thrift/Thrift.py:${PORTSDIR}/devel/py-thrift

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	cql

.include <bsd.port.mk>
