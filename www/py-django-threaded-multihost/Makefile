# New ports collection makefile for:	py-django-threaded-multihost
# Date created:				8 December 2009
# Whom:					Kevin Golding <ports@caomhin.org>
#
# $FreeBSD: ports/www/py-django-threaded-multihost/Makefile,v 1.6 2012/11/17 06:02:59 svnexp Exp $
#

PORTNAME=	django-threaded-multihost
PORTVERSION=	1.4.1
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	http://www.caomhin.org/geek/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Multi-host utilities to Django

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_hg>=0.4:${PORTSDIR}/devel/py-setuptools_hg
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django

LICENSE=	BSD

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_NOEGGINFO=	yes
PYEASYINSTALL_EGG=	${PYDISTUTILS_PKGNAME:C/[^A-Za-z0-9.]+/_/g}-${PORTVERSION:C/([[:digit:]]\.[[:digit:]])\./\1_/g}-${PYTHON_VERSION:S/thon//}${PYEASYINSTALL_OSARCH}.egg
PYEASYINSTALL_UNINSTALLARGS=	-q -m -S ${PYTHON_SITELIBDIR} \
				${PYDISTUTILS_PKGNAME}==${PYDISTUTILS_PKGVERSION:C/([[:digit:]]\.[[:digit:]])\./\1_/g}

.include <bsd.port.mk>
