# New ports collection makefile for:	RubyNumruUnits
# Date created:		14 March 2004
# Whom:			Shin'ya Murakami <murakami@ahs.scitec.kobe-u.ac.jp>
#
# $FreeBSD: ports/math/ruby-numru_units/Makefile,v 1.9 2012/11/17 05:59:30 svnexp Exp $
#

PORTNAME=	numru_units
PORTVERSION=	1.7
CATEGORIES=	math ruby
MASTER_SITES=	http://ruby.gfd-dennou.org/products/numru-units/release/ \
		http://dennou-h.gfd-dennou.org/library/ruby/products/numru-units/release/ \
		http://dennou-q.gfd-dennou.org/library/ruby/products/numru-units/release/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	numru-units-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	murashin@gfd-dennou.org
COMMENT=	A class to handle units of physical quantities for Ruby

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_RUBY=	yes
NO_BUILD=	yes

DOCS=		ChangeLog LICENSE.txt doc/units.html doc/units.rd

do-install:
	@cd ${WRKSRC}/ && ${RUBY} ./install.rb

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}
.endfor
.endif

.include <bsd.port.mk>
