# Ports collection makefile for:	rubygem-money
# Date created:				27 April 2011
# Whom:					Eric Freeman <freebsdports@chillibear.com>
#
# $FreeBSD: ports/finance/rubygem-money/Makefile,v 1.9 2012/11/17 05:57:26 svnexp Exp $
#

PORTNAME=	money
PORTVERSION=	5.0.0
CATEGORIES=	finance rubygems
MASTER_SITES=	RG

MAINTAINER=	freebsdports@chillibear.com
COMMENT=	Library for handling money and different currencies

RUN_DEPENDS=	rubygem-i18n>=0.4:${PORTSDIR}/devel/rubygem-i18n \
		rubygem-json>=0:${PORTSDIR}/devel/rubygem-json

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
