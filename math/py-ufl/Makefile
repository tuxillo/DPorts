# New ports collection makefile for:	py-ufl
# Date created:				13 April 2012
# Whom:					Jason Bacon <jwbacon@tds.net>
#
# $FreeBSD: ports/math/py-ufl/Makefile,v 1.2 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	ufl
PORTVERSION=	1.0.0
CATEGORIES=	math python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/1.0.x/${PORTVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jwbacon@tds.net
COMMENT=	Unified Form Language for finite element discretizations

LICENSE=	LGPL3

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	UFL

FETCH_ARGS=	-F

MAN1=		form2ufl.1 \
		ufl-analyse.1 \
		ufl-convert.1 \
		ufl-version.1 \
		ufl2py.1
MANCOMPRESSED=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|\[(pjoin("share", "man", "man1"),|\[(pjoin("man", "man1"),|' \
			${WRKSRC}/setup.py

.include <bsd.port.mk>
