# New ports collection makefile for:	rubygem-em-websocket
# Date created:		2011-10-20
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/www/rubygem-em-websocket/Makefile,v 1.7 2012/11/17 06:03:03 svnexp Exp $
#

PORTNAME=	em-websocket
PORTVERSION=	0.3.8
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	EventMachine based WebSocket server

RUN_DEPENDS=	rubygem-addressable>=2.1.1:${PORTSDIR}/www/rubygem-addressable \
		rubygem-eventmachine>=0.12.9:${PORTSDIR}/devel/rubygem-eventmachine

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
