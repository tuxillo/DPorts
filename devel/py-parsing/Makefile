# New ports collection makefile for:	py-parsing
# Date created:		1 Jul 2004
# Whom:			Hye-Shik Chang
#
# $FreeBSD: ports/devel/py-parsing/Makefile,v 1.21 2012/11/17 05:56:49 svnexp Exp $
#

PORTNAME=	parsing
PORTVERSION=	1.5.6
CATEGORIES=	devel python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/py${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyparsing-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	General parsing module for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	pyparsing

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/htmldoc/* ${DOCSDIR}
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
