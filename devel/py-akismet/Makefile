# New ports collection makefile for: py-akismet
# Date created: Thu 29 Oct 2009
# Whom: Jacob Myers (jacob@whotookspaz.org)
#
# $FreeBSD: ports/devel/py-akismet/Makefile,v 1.3 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	akismet
PORTVERSION=	0.2.0
CATEGORIES=	devel python
MASTER_SITES=	http://www.voidspace.org.uk/downloads/ \
		http://whotookspaz.org/misc/freebsd/py-akismet/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jacob@whotookspaz.org
COMMENT=	A Python interface to the Akismet API

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	akismet

USE_ZIP=	yes

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif

.include <bsd.port.mk>
