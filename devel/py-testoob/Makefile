# New ports collection makefile for:	testoob
# Date created:		Sun Oct 29 18:28:14 CET 2006
# Whom:			Tobias Roth <ports@fsck.ch>
#
# $FreeBSD: ports/devel/py-testoob/Makefile,v 1.7 2012/11/17 05:56:51 svnexp Exp $
#

PORTNAME=	testoob
PORTVERSION=	1.15
CATEGORIES=	devel python
MASTER_SITES=	SF \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Testoob is an advanced unit testing framework for PyUnit

OPTIONS_DEFINE=	TWISTED HTML
TWISTED_DESC=	enable running in threads
HTML_DESC=	enable HTML output

# bypass infrastructure bug (taken from www/py-django)
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME}
PYDISTUTILS_PKGVERSION=	${PORTVERSION}
PYDISTUTILS_NOEGGINFO=	yes

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MTWISTED}
USE_TWISTED=	yes
.endif

.if ${PORT_OPTIONS:MHTML}
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/Ft/Xml/__init__.py:${PORTSDIR}/textproc/py-4suite-xml
.endif

.include <bsd.port.post.mk>
