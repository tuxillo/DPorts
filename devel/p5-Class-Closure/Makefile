# New ports collection makefile for:	devel/p5-Class-Closure
# Date created:				22 April 2007
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Class-Closure/Makefile,v 1.8 2012/11/17 05:56:07 svnexp Exp $
#

PORTNAME=	Class-Closure
PORTVERSION=	0.30
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Encapsulated, declarative classes in Perl

BUILD_DEPENDS=	p5-PadWalker>=0:${PORTSDIR}/devel/p5-PadWalker \
		p5-Devel-Caller>=0:${PORTSDIR}/devel/p5-Devel-Caller
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Class::Closure.3

.include <bsd.port.mk>
