# New ports collection makefile for:	yajl
# Date created:		2010-03-29
# Whom:			Bapt <baptiste.daroussin@gmail.com>
#
# $FreeBSD: ports/devel/yajl/Makefile,v 1.13 2012/11/17 05:57:07 svnexp Exp $
#

PORTNAME=	yajl
PORTVERSION=	2.0.4
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	A Portable JSON parsing and serialization library in ANSI C

USE_GITHUB=	yes
GH_ACCOUNT=	lloyd
GH_COMMIT=	fee1ebe

LICENSE=	BSD

USE_LDCONFIG=	yes
USE_CMAKE=	yes

PLIST_SUB=	VERSION=${PORTVERSION}

post-patch:
	@${REINPLACE_CMD} -e "s,share/pkgconfig,libdata/pkgconfig,g" \
		${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
