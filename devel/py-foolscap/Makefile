# New ports collection makefile for:	py-foolscap 
# Date created:		2 March 2012
# Whom:			Kevin Lo <kevlo@FreeBSD.org>
#
# $FreeBSD: ports/devel/py-foolscap/Makefile,v 1.4 2012/11/17 05:56:46 svnexp Exp $

PORTNAME=	foolscap
PORTVERSION=	0.6.4
CATEGORIES=	devel python
MASTER_SITES=	http://foolscap.lothar.com/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	RPC protocol for Twisted Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/twisted:${PORTSDIR}/devel/py-twistedCore \
		${PYTHON_PKGNAMEPREFIX}openssl>=0.13:${PORTSDIR}/security/py-openssl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
