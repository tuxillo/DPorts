# New ports collection makefile for:	py-deliciousapi
# Date created:		2010-02-10
# Whom:			Sofian Brabez <sbrabez@gmail.com>
#
# $FreeBSD: ports/devel/py-deliciousapi/Makefile,v 1.10 2012/11/17 05:56:46 svnexp Exp $
#

PORTNAME=	deliciousapi
PORTVERSION=	1.6.7
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	DeliciousAPI-${PORTVERSION}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Unofficial Python API for retrieving data from Delicious.com

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/BeautifulSoup.py:${PORTSDIR}/www/py-beautifulsoup32 \
		${PYTHON_PKGNAMEPREFIX}simplejson>=1.7:${PORTSDIR}/devel/py-simplejson

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	DeliciousAPI

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/${PORTNAME}.py \
		%%PYTHON_SITELIBDIR%%/${PORTNAME}.pyc \
		%%PYTHON_SITELIBDIR%%/${PORTNAME}.pyo

.include <bsd.port.mk>
