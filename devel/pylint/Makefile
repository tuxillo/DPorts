# Created by: Hye-Shik Chang
# $FreeBSD: ports/devel/pylint/Makefile,v 1.38 2012/11/17 05:56:54 svnexp Exp $

PORTNAME=	pylint
PORTVERSION=	0.26.0
CATEGORIES=	devel python
MASTER_SITES=	LOGILAB
PKGNAMESUFFIX=	${PYTHON_PKGNAMESUFFIX}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	Analyzes python source code looking for bugs and signs of poor quality

LICENSE=	LGPL21

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/logilab/astng/__init__.py:${PORTSDIR}/devel/py-astng

MAKE_ENV=	NO_SETUPTOOLS=1
USE_PYTHON=	yes
USE_PYDISTUTILS=yes

OPTIONS_DEFINE=	GUI
OPTIONS_DEFAULTS=

.include <bsd.port.options.mk>

post-extract:
	${RM} -fr ${WRKSRC}/test

.if ${PORT_OPTIONS:MGUI}
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/_tkinter.so:${PORTSDIR}/x11-toolkits/py-tkinter
.endif

.include <bsd.port.mk>
