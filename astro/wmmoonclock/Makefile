# New ports collection makefile for:   wmMoonClock
# Date created:        14 March 1999
# Whom:                Kris Kennaway <kkennawa@physics.adelaide.edu.au>
#
# $FreeBSD: ports/astro/wmmoonclock/Makefile,v 1.19 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	wmMoonClock
PORTVERSION=	1.27
PORTREVISION=	3
CATEGORIES=	astro windowmaker
MASTER_SITES=	http://www.dockapps.org/files/14/21/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Displays the phase of the moon, plus orbital data

# Distfile says it's a .tar.gz but is actually uncompressed
EXTRACT_CMD=	${CAT}
EXTRACT_BEFORE_ARGS=
WRKSRC=		${WRKDIR}/${DISTNAME}/Src

USE_XORG=	xpm
USE_GMAKE=	yes

MAN1=		wmmoonclock.1
PLIST_FILES=	bin/wmmoonclock

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmMoonClock ${PREFIX}/bin/wmmoonclock
	${INSTALL_MAN} ${WRKSRC}/wmMoonClock.1 ${PREFIX}/man/man1/wmmoonclock.1

.include <bsd.port.mk>
