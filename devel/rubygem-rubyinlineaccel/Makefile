# New ports collection makefile for:	rubygem-rubyinlineaccel
# Date created:		2007-09-28
# Whom:			TAKATSU Tomonari <tota@rtfm.jp>
#
# $FreeBSD: ports/devel/rubygem-rubyinlineaccel/Makefile,v 1.8 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	rubyinlineaccel
PORTVERSION=	0.0.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
DISTNAME=	RubyInlineAcceleration-${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	An extension to RubyInline

RUN_DEPENDS=	rubygem-inline>=3.6.3:${PORTSDIR}/devel/rubygem-inline

LICENSE=	GPLv2

GEM_NAME=	${DISTNAME}

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
