# New ports collection makefile for:	ruby-xmpp4r
# Date created:				21 Nov 2005
# Whom:					Stephan Maka <stephan@spaceboyz.net>
#
# $FreeBSD: ports/net-im/rubygem-xmpp4r/Makefile,v 1.14 2012/11/17 06:00:29 svnexp Exp $
#

PORTNAME=	xmpp4r
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	net-im ruby rubygems
MASTER_SITES=	RG

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	XMPP/Jabber library for Ruby

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
