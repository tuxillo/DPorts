# ex:ts=8
# Ports collection makefile for:	py-cssutils
# Date created:			Aug 26, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/www/py-cssutils/Makefile,v 1.13 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	cssutils
PORTVERSION=	0.9.9
PORTEPOCH=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yzlin@FreeBSD.org
COMMENT=	CSS Cascading Style Sheets library for Python

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

.if !defined(NOPORTEXAMPLES)
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
