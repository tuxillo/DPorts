# New ports collection makefile for: pstreams
# Date created: 	22 Jan 2007
# Whom: 		Andrew Wingorodov <mail@andr.ru>
#
# $FreeBSD: ports/devel/pstreams/Makefile,v 1.8 2012/11/17 05:56:43 svnexp Exp $

PORTNAME=	pstreams
PORTVERSION=	0.6.0
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/Release%200.6.x

MAINTAINER=	eg@fbsd.lt
COMMENT=	C++ utility for simple IOStream-based IPC

USE_GMAKE=	yes
MAKE_ENV+=	INSTALL_PREFIX=${PREFIX}
NO_BUILD=	yes

PLIST_FILES=	include/pstreams/pstream.h
PLIST_DIRS=	include/pstreams

.include <bsd.port.mk>
