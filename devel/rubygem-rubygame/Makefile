# New ports collection makefile for:   rubygem-rubygame
# Date created:    28 April 2010
# Whom:	ws	Christoph Kick
#
# $FreeBSD: ports/devel/rubygem-rubygame/Makefile,v 1.26 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	rubygame
PORTVERSION=	2.6.4
PORTREVISION=	3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A game-development extension and library for the ruby language

RUN_DEPENDS=	rubygem-ruby-sdl-ffi>=0.1.0:${PORTSDIR}/devel/rubygem-ruby-sdl-ffi

USE_SDL=		gfx image mixer ttf
USE_RUBY=		yes
USE_RAKE=		yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
