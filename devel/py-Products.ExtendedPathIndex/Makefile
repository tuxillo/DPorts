# $FreeBSD: ports/devel/py-Products.ExtendedPathIndex/Makefile,v 1.4 2012/11/17 05:56:44 svnexp Exp $

PORTNAME=	Products.ExtendedPathIndex
PORTVERSION=	3.0.1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope catalog index for paths

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}AccessControl>0:${PORTSDIR}/security/py-AccessControl \
		${PYTHON_PKGNAMEPREFIX}transaction>0:${PORTSDIR}/devel/py-transaction \
		zodb${PYTHON_PKGNAMESUFFIX}>0:${PORTSDIR}/databases/zodb3

DIST_SUBDIR=	zope
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes
USE_ZOPE=	yes

.include <bsd.port.mk>
