# New ports collection makefile for:	ruby-flvtool2
# Date created:		2007-05-07
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/multimedia/ruby-flvtool2/Makefile,v 1.3 2012/11/17 05:59:53 svnexp Exp $
#

PORTNAME=	flvtool2
PORTVERSION=	1.0.6
CATEGORIES=	multimedia ruby
MASTER_SITES=	RUBYFORGE
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=	ruby-
EXTRACT_SUFX=	.tgz

MAINTAINER=	gslin@gslin.org
COMMENT=	Manipulation tool for Macromedia Flash Video files

USE_RUBY=	yes
USE_RUBY_SETUP=	yes

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not build with ruby 1.9
.endif
.include <bsd.port.post.mk>
