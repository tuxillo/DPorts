# New ports collection makefile for:  	openmortal
# Date created:       		20 Apr 2004
# Whom:  			krion@FreeBSD.org
#
# $FreeBSD: ports/games/openmortal/Makefile,v 1.23 2012/11/17 05:57:48 svnexp Exp $
#

PORTNAME=	openmortal
PORTVERSION=	0.7
PORTREVISION=	9
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A parody of the once popular coin-up fighting game, Mortal Kombat

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

USE_BZIP2=	yes
USE_PERL5=	yes
USE_SDL=	mixer image sdl net

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
