# New ports collection makefile for:	py-plone.openid
# Date created:				22 December 2011
# Whom:					Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/security/py-plone.openid/Makefile,v 1.3 2012/11/17 06:01:17 svnexp Exp $
#

PORTNAME=	plone.openid
PORTVERSION=	2.0
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	OpenID authentication support for PAS

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openid>=0:${PORTSDIR}/security/py-openid \
		${PYTHON_PKGNAMEPREFIX}transaction>=0:${PORTSDIR}/devel/py-transaction \
		${PYTHON_PKGNAMEPREFIX}Acquisition>=0:${PORTSDIR}/devel/py-Acquisition \
		${PYTHON_PKGNAMEPREFIX}Products.PluggableAuthService>=0:${PORTSDIR}/security/py-Products.PluggableAuthService \
		zodb${PYTHON_PKGNAMESUFFIX}>=0:${PORTSDIR}/databases/zodb3

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes
#USE_ZOPE=	yes

.include <bsd.port.mk>
