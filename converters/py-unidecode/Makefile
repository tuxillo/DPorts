# Created by: Douglas Thrift
# $FreeBSD: ports/converters/py-unidecode/Makefile,v 1.10 2012/12/02 05:44:02 svnexp Exp $

PORTNAME=	unidecode
PORTVERSION=	0.04.10
CATEGORIES=	converters python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Unidecode-${PORTVERSION}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	ASCII transliterations of Unicode text

LICENSE=	GPLv2

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	Unidecode

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
