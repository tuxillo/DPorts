#
# New ports collection makefile for:	xrally
# Date created:				86 May 2005
# Whom:					Edwin Groothuis
#
# $FreeBSD: ports/games/xrally/Makefile,v 1.17 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xrally
PORTVERSION=	1.1.1
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/1.1
DISTNAME=	${PORTNAME}-1.1

MAINTAINER=	edwin@mavetju.org
COMMENT=	XRally is a Linux clone of the classic Rally X arcade game

WRKSRC=		${WRKDIR}/${PORTNAME}
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
USE_XORG=	x11 xi xpm
USE_BZIP2=	yes
USE_GMAKE=	yes
CFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
MAKE_ENV=	INCLUDES="-I${LOCALBASE}/include"

.include <bsd.port.mk>
