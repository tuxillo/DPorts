# $FreeBSD: ports/security/py-Products.PluggableAuthService/Makefile,v 1.6 2012/11/17 06:01:16 svnexp Exp $

PORTNAME=	Products.PluggableAuthService
PORTVERSION=	1.8.0
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Pluggable Zope2 authentication / authorization framework

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.PluginRegistry>=0:${PORTSDIR}/devel/py-Products.PluginRegistry \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=0:${PORTSDIR}/devel/py-Products.GenericSetup

DIST_SUBDIR=	zope
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
USE_ZOPE=	yes

.include <bsd.port.mk>
