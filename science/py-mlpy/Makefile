# New ports collection makefile for:	py-mlpy
# Date created:		18 April, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/science/py-mlpy/Makefile,v 1.12 2012/11/17 06:00:59 svnexp Exp $
#

PORTNAME=	mlpy
PORTVERSION=	2.2.2
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	https://mlpy.fbk.eu/download/src/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	MLPY-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	High performance Python package for predictive modeling

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/numpy:${PORTSDIR}/math/py-numpy \
		cython>0:${PORTSDIR}/lang/cython
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	gsl.16:${PORTSDIR}/math/gsl

CFLAGS+=	-I${LOCALBASE}/include -I${PYTHON_SITELIBDIR}/numpy/core
LDFLAGS+=	-L${LOCALBASE}/lib
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	MLPY

.include <bsd.port.mk>
