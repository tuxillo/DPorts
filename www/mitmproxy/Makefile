# New ports collection makefile for:  mitmproxy
# Date created:                       08 November 2012
# Whom:                               Hung-Yi Chen <gaod@hychen.org>
#
# $FreeBSD: ports/www/mitmproxy/Makefile,v 1.1 2012/11/24 20:10:35 svnexp Exp $
#

PORTNAME=	mitmproxy
PORTVERSION=	0.8
CATEGORIES=	www python
MASTER_SITES=	http://mitmproxy.org/download/

MAINTAINER=	gaod@hychen.org
COMMENT=	An SSL-capable man-in-the-middle proxy

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}asn1>0:${PORTSDIR}/devel/py-asn1 \
		${PYTHON_PKGNAMEPREFIX}imaging>0:${PORTSDIR}/graphics/py-imaging \
		${PYTHON_PKGNAMEPREFIX}lxml>0:${PORTSDIR}/devel/py-lxml \
		${PYTHON_PKGNAMEPREFIX}openssl>0:${PORTSDIR}/security/py-openssl \
		${PYTHON_PKGNAMEPREFIX}urwid>0:${PORTSDIR}/devel/py-urwid

USE_PYDISTUTILS=easy_install
USE_PYTHON=	2.6+
PLIST_SUB+=	PORTVERSION=${PORTVERSION} PYTHONVERSION=${_PYTHON_VERSION}

.include <bsd.port.mk>
