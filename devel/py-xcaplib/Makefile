# New ports collection makefile for:	py-application
# Date created:		14 July 2011
# Whom:			Eugene Grosbein <ports@grosbein.net>
#
# $FreeBSD: ports/devel/py-xcaplib/Makefile,v 1.2 2012/11/17 05:56:52 svnexp Exp $
#

PORTNAME=	xcaplib
PORTVERSION=	1.0.16
CATEGORIES=	devel python
MASTER_SITES=	http://download.ag-projects.com/XCAP/ \
		http://grosbein.net/python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@grosbein.net
COMMENT=	Python XCAP client library

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twistedCore>=8.1.0:${PORTSDIR}/devel/py-twistedCore \
		${PYTHON_PKGNAMEPREFIX}lxml>=2.1.2:${PORTSDIR}/devel/py-lxml \
		${PYTHON_PKGNAMEPREFIX}application>=1.1.5:${PORTSDIR}/devel/py-application

RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=python_${PORTNAME}

.include <bsd.port.mk>
