# $FreeBSD: ports/www/p5-Twiggy/Makefile,v 1.10 2012/11/17 06:02:54 svnexp Exp $

PORTNAME=	Twiggy
PORTVERSION=	0.1021
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of AnyEvent HTTP server for PSGI (like Thin)

RUN_DEPENDS=	\
	p5-AnyEvent>0:${PORTSDIR}/devel/p5-AnyEvent \
	p5-libwww>0:${PORTSDIR}/www/p5-libwww \
	p5-Plack>=0.99:${PORTSDIR}/www/p5-Plack \
	p5-Try-Tiny>0:${PORTSDIR}/lang/p5-Try-Tiny
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	\
	p5-Test-Requires>0:${PORTSDIR}/devel/p5-Test-Requires \
	p5-Test-TCP>0:${PORTSDIR}/devel/p5-Test-TCP

PERL_CONFIGURE=	yes

MAN1=	twiggy.1
MAN3=	Plack::Handler::Twiggy.3 \
	Twiggy.3

.include <bsd.port.mk>
