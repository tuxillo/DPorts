# ex:ts=8
# Ports collection makefile for:	py-bcrypt
# Date created:			07 maerch, 2007
# Whom:				Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/security/py-bcrypt/Makefile,v 1.5 2012/11/17 06:01:16 svnexp Exp $
#

PORTNAME=	bcrypt
PORTVERSION=	0.2
CATEGORIES=	security python
MASTER_SITES=	GOOGLE_CODE \
		http://www.mindrot.org/files/py-bcrypt/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py-${PORTNAME}-${PORTVERSION}

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Python bcrypt module

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	py_${PORTNAME}
PYEASYINSTALL_ARCHDEP=	yes
PYEASYINSTALL_EGG=	${PYDISTUTILS_PKGNAME}-${PORTVERSION}-py${PYTHON_VER}${PYEASYINSTALL_OSARCH}.egg
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PROJECTHOST=	py-bcrypt

.include <bsd.port.mk>
