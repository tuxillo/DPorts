# New ports collection makefile for:	py-kaa-imlib2
# Date created:		2009 January 10
# Whom:			J.R. Oldroyd <fbsd@opal.com>
#
# $FreeBSD: ports/multimedia/py-kaa-imlib2/Makefile,v 1.9 2012/11/17 05:59:53 svnexp Exp $
#

PORTNAME=	kaa-imlib2
PORTVERSION=	0.2.3
PORTREVISION=	5
CATEGORIES=	multimedia python
MASTER_SITES=	SF/freevo/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fbsd@opal.com
COMMENT=	Kaa Media Repository - imlib2 wrapper for python

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/kaa/__init__.py:${PORTSDIR}/multimedia/py-kaa-base
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_EFL=	imlib2

.include <bsd.port.mk>
