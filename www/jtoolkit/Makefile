# New ports collection makefile for:	jtoolkit
# Date created:		30 August 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/www/jtoolkit/Makefile,v 1.6 2012/11/17 06:02:37 svnexp Exp $
#

PORTNAME=	jToolkit
PORTVERSION=	0.7.8
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Webapp framework with modpython-based and stand-alone modes

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}kid>=0.9.5:${PORTSDIR}/devel/py-kid
# Has optional dependencies on database engines
# Can optionally use py-lucene (on i386)

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYSETUP=	${PORTNAME}Setup.py

.include <bsd.port.mk>
