# Ports collection makefile for:	rubygem-ruby-debug
# Date created:				27 July 2007
# Whom:					Robert Gogolok <gogo@cs.uni-sb.de>
#
# $FreeBSD: ports/devel/rubygem-ruby-debug/Makefile,v 1.13 2012/11/17 05:57:01 svnexp Exp $

PORTNAME=	ruby-debug
PORTVERSION=	0.10.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	gogo@cs.uni-sb.de
COMMENT=	A generic command line interface for ruby-debug

RUN_DEPENDS=	rubygem-ruby-debug-base>=0.10.4.0:${PORTSDIR}/devel/rubygem-ruby-debug-base \
		rubygem-columnize>=0.1:${PORTSDIR}/devel/rubygem-columnize

PORTSCOUT=	skipv:0.10.5

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rdebug

.include <bsd.port.mk>
