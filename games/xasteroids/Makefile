# New ports collection makefile for:    xasteroids
# Date created:		3 Jan 1995
# Whom:			swallace
#
# $FreeBSD: ports/games/xasteroids/Makefile,v 1.28 2012/11/17 05:57:56 svnexp Exp $
#

PORTNAME=	xasteroids
PORTVERSION=	5.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.x.org/R5contrib/
DISTFILES=	xasteroids.sh.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X11 based asteroids style arcade game

USE_IMAKE=	yes
USE_XORG=	x11 xext
NO_WRKSUBDIR=	yes
EXTRACT_CMD=	( cd ${WRKDIR}; zcat | sh -s )
EXTRACT_BEFORE_ARGS=	<
EXTRACT_AFTER_ARGS=	# empty
MAN6=		xasteroids.6
PLIST_FILES=	bin/xasteroids

post-extract:
	${CP} ${FILESDIR}/Imakefile ${WRKSRC}
	${CP} ${WRKSRC}/xast.man ${WRKSRC}/xasteroids.man

.include <bsd.port.mk>
