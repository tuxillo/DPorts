# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/sysutils/rubygem-guard/Makefile,v 1.15 2012/12/23 20:09:39 svnexp Exp $

PORTNAME=	guard
PORTVERSION=	1.6.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line tool to easily handle events on file system modifications

RUN_DEPENDS=	rubygem-listen>=0.6.0:${PORTSDIR}/devel/rubygem-listen \
		rubygem-lumberjack>=1.0.2:${PORTSDIR}/devel/rubygem-lumberjack \
		rubygem-pry>=0.9.10:${PORTSDIR}/devel/rubygem-pry \
		rubygem-thor>=0.14.6:${PORTSDIR}/devel/rubygem-thor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/guard

.include <bsd.port.mk>
