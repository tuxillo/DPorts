# New ports collection makefile for:	py-fonttools
# Date created:				2 January 2001
# Whom:                 		Joseph Koshy <jkoshy@FreeBSD.org>
#
# $FreeBSD: ports/print/py-fonttools/Makefile,v 1.14 2012/11/17 06:00:54 svnexp Exp $
#

PORTNAME=	fonttools
PORTVERSION=	2.3
CATEGORIES=	print python
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An open source library for manipulating fonts, written in Python

BUILD_DEPENDS=	${PYNUMPY} ${PYXML}
RUN_DEPENDS=	${PYNUMPY} ${PYXML}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_EGGINFODIR=	${PYTHON_SITELIBDIR}/FontTools

MAN1=		ttx.1

DOCSDIR=	${PREFIX}/share/doc/py-fonttools

post-patch:
	@${REINPLACE_CMD} -e 's|share/man/man1|man/man1|g' ${WRKSRC}/setup.py

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Doc/ChangeLog ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Doc/*.html ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Doc/*.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
