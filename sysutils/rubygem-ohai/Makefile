# Ports collection makefile for:	rubygem-ohai
# Date created:				18 Mar 2010
# Whom:					Renaud Chaput <renchap@cocoa-x.com>
#
# $FreeBSD: ports/sysutils/rubygem-ohai/Makefile,v 1.16 2012/11/17 06:01:44 svnexp Exp $
#

PORTNAME=	ohai
PORTVERSION=	6.14.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	renchap@cocoa-x.com
COMMENT=	Ohai profiles your system and emits JSON

RUN_DEPENDS=	rubygem-ipaddress>=0:${PORTSDIR}/net/rubygem-ipaddress \
		rubygem-mixlib-log>=0:${PORTSDIR}/devel/rubygem-mixlib-log \
		rubygem-mixlib-config>=0:${PORTSDIR}/devel/rubygem-mixlib-config \
		rubygem-mixlib-cli>=0:${PORTSDIR}/devel/rubygem-mixlib-cli \
		rubygem-systemu>=0:${PORTSDIR}/devel/rubygem-systemu \
		rubygem-yajl-ruby>=0:${PORTSDIR}/devel/rubygem-yajl-ruby

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/ohai

.include <bsd.port.mk>
