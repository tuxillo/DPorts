# New ports collection makefile for:	devel/p5-Moose-Autobox
# Date created:				25 July 2009
# Whom:					Bill Brinzer <bill.brinzer@gmail.com>
#
# $FreeBSD: ports/devel/p5-Moose-Autobox/Makefile,v 1.8 2012/11/17 05:56:22 svnexp Exp $
#

PORTNAME=	Moose-Autobox
PORTVERSION=	0.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	Autoboxed wrappers for Native Perl datatypes

BUILD_DEPENDS=	p5-autobox>=2.23:${PORTSDIR}/devel/p5-autobox \
		p5-Moose>=0.42:${PORTSDIR}/devel/p5-Moose \
		p5-Perl6-Junction>=1.40000:${PORTSDIR}/devel/p5-Perl6-Junction
RUN_DEPENDS=	p5-autobox>=2.23:${PORTSDIR}/devel/p5-autobox \
		p5-Moose>=0.42:${PORTSDIR}/devel/p5-Moose \
		p5-Perl6-Junction>=1.40000:${PORTSDIR}/devel/p5-Perl6-Junction
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN3=	Moose::Autobox.3 \
	Moose::Autobox::Array.3 \
	Moose::Autobox::Code.3 \
	Moose::Autobox::Defined.3 \
	Moose::Autobox::Hash.3 \
	Moose::Autobox::Indexed.3 \
	Moose::Autobox::Item.3 \
	Moose::Autobox::List.3 \
	Moose::Autobox::Number.3 \
	Moose::Autobox::Ref.3 \
	Moose::Autobox::Scalar.3 \
	Moose::Autobox::String.3 \
	Moose::Autobox::Undef.3 \
	Moose::Autobox::Value.3

.include <bsd.port.mk>
