# New ports collection makefile for:	devel/json_pure
# Date created:		Oct 7, 2008
# Whom:			Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-json_pure/Makefile,v 1.24 2012/11/17 05:56:59 svnexp Exp $
#

PORTNAME=	json_pure
PORTVERSION=	1.7.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Parse JSON texts and generate them from ruby data structures in Ruby

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} < 1.9
RUN_DEPENDS+=           ${DEPEND_RUBY_ICONV}
.endif

.include <bsd.port.post.mk>
