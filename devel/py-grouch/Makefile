# New ports collection makefile for:	py-grouch
# Date created:				6 September 2001
# Whom:					Johann Visagie <wjv@FreeBSD.org>
#
# $FreeBSD: ports/devel/py-grouch/Makefile,v 1.12 2012/11/17 05:56:47 svnexp Exp $
#

PORTNAME=	grouch
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	https://www.mems-exchange.org/software/files/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Grouch-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A system for describing and enforcing a Python object schema

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	Grouch

post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
.for docfile in CHANGES LICENSE README
	@ ${INSTALL_DATA} ${WRKSRC}/${docfile}.txt ${DOCSDIR}
.endfor
	@ ${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
.endif
.if !defined(NOPORTEXAMPLES)
	@ ${MKDIR} ${EXAMPLESDIR}
	@ ${INSTALL_DATA} ${WRKSRC}/examples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
