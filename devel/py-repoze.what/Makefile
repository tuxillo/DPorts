# New ports collection makefile for:	py-repoze.what
# Date created:		3rd August,2009
# Whom:	      		Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/py-repoze.what/Makefile,v 1.4 2012/11/17 05:56:50 svnexp Exp $
#

PORTNAME=	repoze.what
PORTVERSION=	1.0.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Authorization for WSGI applications

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Paste>=1.7.2:${PORTSDIR}/www/py-paste \
		${PYTHON_PKGNAMEPREFIX}repoze.who-testutil>=0:${PORTSDIR}/devel/py-repoze.who-testutil
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
