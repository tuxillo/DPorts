# New ports collection makefile for:	ruby-inline
# Date created:		2003-01-30
# Whom:			Sean Chittenden <seanc@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-inline/Makefile,v 1.31 2012/11/17 05:56:59 svnexp Exp $
#

PORTNAME=	inline
PORTVERSION=	3.11.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
DISTNAME=	RubyInline-${PORTVERSION}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Inline::C allows you to embed C/Ruby directly in ruby scripts

RUN_DEPENDS=	sow:${PORTSDIR}/devel/rubygem-hoe \
    		zentest:${PORTSDIR}/devel/rubygem-zentest

GEM_NAME=	${DISTNAME}

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
