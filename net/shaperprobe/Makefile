# New ports collection makefile for:	shaperprobe
# Date created:		2011-06-11
# Whom:			Josh Carroll <josh.carroll@gmail.com>
#
# $FreeBSD: ports/net/shaperprobe/Makefile,v 1.4 2012/11/17 06:00:20 svnexp Exp $
#

PORTNAME=	shaperprobe
PORTVERSION=	0.2
CATEGORIES=	net
MASTER_SITES=	http://www.cc.gatech.edu/~partha/diffprobe/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tgz

MAINTAINER=	josh.carroll@gmail.com
COMMENT=	Utility to check for traffic shapers

LICENSE=	GPLv2

MAKEFILE=	Makefile.osx
PLIST_FILES=	bin/prober

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/prober ${PREFIX}/bin/

.include <bsd.port.mk>
