# $FreeBSD: ports/security/py-otr/Makefile,v 1.5 2012/11/17 06:01:16 svnexp Exp $

PORTNAME=	otr
PORTVERSION=	0.2.1.1
PORTREVISION=	1
CATEGORIES=	security python
MASTER_SITES=	http://python-otr.pentabarf.de/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-otr-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A set of python bindings for libotr

BUILD_DEPENDS=	swig1.3:${PORTSDIR}/devel/swig13
# This should be updated to the newer version of libotr
LIB_DEPENDS=	otr.4:${PORTSDIR}/security/libotr3

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
USE_PKGCONFIG=	build
PYDISTUTILS_PKGNAME=	python-otr

CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib

.include <bsd.port.mk>
