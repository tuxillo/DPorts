# New ports collection makefile for:    trac-TracGoogleAnalytics
# Date created:                         14 October 2010
# Whom:                                 Douglas Thrift
#
# $FreeBSD: ports/www/trac-TracGoogleAnalytics/Makefile,v 1.5 2012/11/17 06:03:07 svnexp Exp $
#

PORTNAME=	TracGoogleAnalytics
PORTVERSION=	0.2.4
PORTREVISION=	2
CATEGORIES=	www devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	trac-

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Trac plugin to enable logging by Google Analytics

BUILD_DEPENDS=	tracd:${PORTSDIR}/www/trac \
		${PYTHON_PKGNAMEPREFIX}Genshi>=0.5:${PORTSDIR}/textproc/py-genshi

RUN_DEPENDS:=	${BUILD_DEPENDS}

LICENSE=	BSD

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
