# Ports collection makefile for:	rubygem-activemodel
# Date created:				1 September 2010
# Whom:						Philip M. Gollucci <pgollucci@p6m7g8.com>
#
# $FreeBSD: ports/databases/rubygem-activemodel/Makefile,v 1.18 2013/01/09 04:43:41 svnexp Exp $

PORTNAME=	activemodel
PORTVERSION=	3.2.11
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A toolkit for building modeling frameworks

RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-builder>=3.0.0:${PORTSDIR}/devel/rubygem-builder

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
