# Created by: Brooks Davis <brooks@freebsd.org>
# $FreeBSD: ports/www/trac-pydotorgtheme/Makefile,v 1.7 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	${PYDISTUTILS_PKGNAME:S;^Trac;;:tl}
PORTVERSION=	2.0
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	brooks
PKGNAMEPREFIX=	trac-

MAINTAINER=	brooks@FreeBSD.org
COMMENT=	Theme that emulates the look of python.org

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac \
		trac-themeengine>=2.0:${PORTSDIR}/www/trac-themeengine

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracPyDotOrgTheme
WRKSRC=			${WRKDIR}/${PORTNAME}
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
