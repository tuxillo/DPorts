# New ports collection makefile for:	py-plone.session
# Date created:				22 December 2011
# Whom:					Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/security/py-plone.session/Makefile,v 1.3 2012/11/17 06:01:17 svnexp Exp $
#

PORTNAME=	plone.session
PORTVERSION=	3.5
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Session based authentication for Zope

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.protect>=0:${PORTSDIR}/security/py-plone.protect \
		${PYTHON_PKGNAMEPREFIX}zope.component>=0:${PORTSDIR}/devel/py-zope.component \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:${PORTSDIR}/devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}Products.PluggableAuthService>=0:${PORTSDIR}/security/py-Products.PluggableAuthService

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes
#USE_ZOPE=	yes

.include <bsd.port.mk>
