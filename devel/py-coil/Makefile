# New ports collection makefile for:   py-coil
# Date created:        13 April 2010
# Whom:                ghostonthewire <ghostonthewire at gmail dot com>
#
# $FreeBSD: ports/devel/py-coil/Makefile,v 1.4 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	coil
PORTVERSION=	0.3.20
CATEGORIES=	devel python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ghostonthewire@gmail.com
COMMENT=	A powerful configuration language for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

PORTDOCS=	README.txt \
		TODO.txt

post-install:
# docs
.ifndef(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

# permission safeness
	@${CHMOD} -R ${SHAREMODE} ${PYTHONPREFIX_SITELIBDIR}/coil/*
	@${CHMOD} -R a+X ${PYTHONPREFIX_SITELIBDIR}/coil/*

.include <bsd.port.mk>
