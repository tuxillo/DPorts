# Created by:	Baptiste Daroussin <bapt@FreeBSD.org>
# $FreeBSD: ports/devel/mdds/Makefile,v 1.6 2012/11/17 05:55:59 svnexp Exp $

PORTNAME=	mdds
PORTVERSION=	0.6.1
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Multi-dimensional data index algorithm

LICENSE=	MIT

PROJECTHOST=	multidimalgorithm

USE_BZIP2=	yes
NO_BUILD=	yes

do-install:
	@${MKDIR} ${PREFIX}/include/mdds
	@${MKDIR} ${PREFIX}/include/mdds/compat
	@${MKDIR} ${PREFIX}/include/mdds/hash_container
	@${INSTALL_DATA} ${WRKSRC}/include/mdds/*.hpp ${PREFIX}/include/mdds
	@${INSTALL_DATA} ${WRKSRC}/include/mdds/*.inl ${PREFIX}/include/mdds
	@${INSTALL_DATA} ${WRKSRC}/include/mdds/compat/*.hpp ${PREFIX}/include/mdds/compat
	@${INSTALL_DATA} ${WRKSRC}/include/mdds/hash_container/*.hpp ${PREFIX}/include/mdds/hash_container

.include <bsd.port.mk>
