# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: ports/www/trac-timingandestimation/Makefile,v 1.8 2012/11/17 06:03:08 svnexp Exp $

PORTNAME=	timingandestimation
PORTVERSION=	1.0.8b
PORTREVISION=	1
CATEGORIES=	www devel python
MASTER_SITES=	http://www.sourcehosting.net/freebsd/distfiles/ \
		LOCAL/glarkin
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}
USE_ZIP=	yes

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Add estimation and time tracking functionality to Trac

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin/branches/trac0.12-Permissions
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME}plugin
PYDISTUTILS_PKGVERSION=	${PORTVERSION:S/.r/_r/}
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
