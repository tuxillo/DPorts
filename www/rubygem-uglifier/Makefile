# New ports collection makefile for:	rubygem-uglifier
# Date created:		2011-09-12
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/www/rubygem-uglifier/Makefile,v 1.13 2013/01/09 04:43:48 svnexp Exp $
#

PORTNAME=	uglifier
PORTVERSION=	1.3.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby wrapper for UglifyJS JavaScript compressor

RUN_DEPENDS=	rubygem-execjs>=0.3.0:${PORTSDIR}/devel/rubygem-execjs \
		rubygem-multi_json>=1.3:${PORTSDIR}/devel/rubygem-multi_json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
