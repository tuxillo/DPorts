# New ports collection makefile for:	py-selenium
# Date created:				6 November 2011
# Whom:					Douglas Thrift
#
# $FreeBSD: ports/www/py-selenium/Makefile,v 1.13 2012/11/28 09:39:27 svnexp Exp $
#

PORTNAME=	selenium
PORTVERSION=	2.26.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Python bindings for Selenium

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}rdflib>=3.1.0:${PORTSDIR}/textproc/py-rdflib

LATEST_LINK=	py-${PORTNAME}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

OPTIONS_DEFINE=	FIREFOX
FIREFOX_DESC=	Install Firefox

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MFIREFOX}
USE_FIREFOX=	10+
.endif

.include <bsd.port.mk>
