# New ports collection makefile for:	py-argparse
# Date created:		Jan. 05, 2007
# Whom:			Li-Wen Hsu <lwhsu@lwhsu.org>
#
# $FreeBSD: ports/devel/py-argparse/Makefile,v 1.15 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	argparse
PORTVERSION=	1.1
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	An optparse-inspired command-line parsing library

USE_ZIP=	yes

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/argparse.py \
		%%PYTHON_SITELIBDIR%%/argparse.pyc \
		%%PYTHON_SITELIBDIR%%/argparse.pyo

.include <bsd.port.mk>
