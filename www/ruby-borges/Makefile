# New ports collection makefile for:	Ruby-Borges
# Date created:		31 January 2003
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/www/ruby-borges/Makefile,v 1.12 2012/11/17 06:03:03 svnexp Exp $
#

PORTNAME=	borges
PORTVERSION=	1.1.0
CATEGORIES=	www ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A web application framework for Ruby that allows linear programming

USE_RUBY=	yes
USE_RUBY_SETUP=	yes

DOCS=		BUGS CHANGELOG README
EXAMPLES=	data/examples/ruby/borges/*

RUBY_REQUIRE=	Ruby > 180

.include <bsd.port.pre.mk>

.if !defined(RUBY_PROVIDED)
IGNORE=		only works with Ruby 1.8.0 or later
.endif

post-extract:
# This port is not really RUBY_MODEXAMPLESDIR/RUBY_MODDOCDIR clean
.for d in doc examples
	${MV} ${WRKSRC}/data/${d}/ruby/Borges ${WRKSRC}/data/${d}/ruby/borges
	${MV} ${WRKSRC}/data/${d}/ruby ${WRKSRC}/data/${d}/${RUBY_NAME}
.if defined(NOPORTDOCS)
	${MV} ${WRKSRC}/data/${d} ${WRKSRC}/
.endif
.endfor

.include <bsd.port.post.mk>
