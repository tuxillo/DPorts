# New ports collection makefile for:	RubyNumruMisc
# Date created:		14 March 2004
# Whom:			Shin'ya Murakami <murakami@ahs.scitec.kobe-u.ac.jp>
#
# $FreeBSD: ports/math/ruby-numru_misc/Makefile,v 1.7 2012/11/17 05:59:30 svnexp Exp $
#

PORTNAME=	numru_misc
PORTVERSION=	0.1.1
CATEGORIES=	math ruby
MASTER_SITES=	http://ruby.gfd-dennou.org/products/numru-misc/release/ \
		http://dennou-h.gfd-dennou.org/library/ruby/products/numru-misc/release/ \
		http://dennou-q.gfd-dennou.org/library/ruby/products/numru-misc/release/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	numru-misc-${PORTVERSION}
DIST_SUBDIR=	ruby

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

MAINTAINER=	murashin@gfd-dennou.org
COMMENT=	Collection of misc functions and classes to facilitate programming

RUN_DEPENDS=	${RUBY_SITEARCHLIBDIR}/narray.so:${PORTSDIR}/math/ruby-narray \
		${RUBY_SITELIBDIR}/narray_miss.rb:${PORTSDIR}/math/ruby-narray_miss

USE_RUBY=	yes
NO_BUILD=	yes

DOCS=		ChangeLog LICENSE.txt doc/*

do-install:
	@cd ${WRKSRC}/ && ${RUBY} ./install.rb

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}/
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.mk>
