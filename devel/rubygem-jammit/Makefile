# Ports collection makefile for:	rubygem-jammit
# Date created:				2011-06-16
# Whom:					rpsfa@rit.edu
#
# $FreeBSD: ports/devel/rubygem-jammit/Makefile,v 1.5 2012/11/17 05:56:59 svnexp Exp $

PORTNAME=	jammit
PORTVERSION=	0.6.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An industrial strength asset packaging library for Rails

RUN_DEPENDS=	devel/rubygem-yui-compressor>=0.9.3:${PORTSDIR}/devel/rubygem-yui-compressor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/jammit

.include <bsd.port.mk>
