# New ports collection makefile for:	py-rauth
# Date created:				2012-06-17
# Whom:					koobs <koobs.freebsd@gmail.com>
#
# $FreeBSD: ports/devel/py-rauth/Makefile,v 1.5 2012/11/24 19:21:40 svnexp Exp $
#

PORTNAME=	rauth
PORTVERSION=	0.4.17
CATEGORIES=	devel www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	A Python library for OAuth 1.0/a, 2.0, and Ofly consumers

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0.12.0:${PORTSDIR}/www/py-requests

USE_GITHUB=	yes
GH_ACCOUNT=	litl
GH_COMMIT=	219d35f

OPTIONS_DEFINE=	TESTS
TESTS_DESC=	Install tools for unit testing
OPTIONSFILE?=	${PORT_DBDIR}/py-${PORTNAME}/options

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MTESTS}
BUILD_DEPENDS:=	${TEST_DEPENDS}
.endif

# Python3 ready
USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

TEST_DEPENDS:=	${RUN_DEPENDS} \
		nosetests:${PORTSDIR}/devel/py-nose \
		${PYTHON_PKGNAMEPREFIX}mock>0:${PORTSDIR}/devel/py-mock

regression-test: build
	@cd ${WRKSRC} && nosetests

.include <bsd.port.mk>
