# New ports collection makefile for:	py-poppler
# Date created:		2008-04-14
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/graphics/py-poppler/Makefile,v 1.18 2012/11/17 05:58:20 svnexp Exp $
#

PORTNAME=	poppler
PORTVERSION=	0.12.1
CATEGORIES=	graphics python
MASTER_SITES=	https://launchpad.net/poppler-python/trunk/development/+download/ \
		http://launchpadlibrarian.net/30270080/ \
		http://romain.blogreen.org/distfiles/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Python bindings for the Poppler PDF rendering library

LIB_DEPENDS=	poppler-glib.8:${PORTSDIR}/graphics/poppler-glib

USE_PYTHON=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	pkgconfig atk pygtk2

.include <bsd.port.mk>
