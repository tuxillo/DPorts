# New ports collection makefile for:	p5-Math-Algebra-Symbols
# Date created:				25 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Algebra-Symbols/Makefile,v 1.8 2012/11/17 05:59:25 svnexp Exp $
#

PORTNAME=	Math-Algebra-Symbols
PORTVERSION=	1.21
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Symbolic Algebra in Pure Perl

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::Algebra::Symbols.3 \
	Math::Algebra::Symbols::Sum.3 \
	Math::Algebra::Symbols::Symbols.3 \
	Math::Algebra::Symbols::Term.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
