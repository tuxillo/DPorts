# $FreeBSD: ports/www/p5-Furl/Makefile,v 1.10 2013/01/15 03:48:12 svnexp Exp $

PORTNAME=	Furl
PORTVERSION=	1.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TOKUHIROM
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of lightning-fast URL fetcher

RUN_DEPENDS=	\
	p5-HTTP-Parser-XS>=0.11:${PORTSDIR}/www/p5-HTTP-Parser-XS \
	p5-Mozilla-CA>0:${PORTSDIR}/www/p5-Mozilla-CA
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-Requires>=0:${PORTSDIR}/devel/p5-Test-Requires \
		p5-Test-TCP>=0:${PORTSDIR}/devel/p5-Test-TCP \
		p5-Plack>0:${PORTSDIR}/www/p5-Plack \
		p5-HTTP-Proxy>0:${PORTSDIR}/www/p5-HTTP-Proxy \
		p5-Plack-Middleware-Deflater>0:${PORTSDIR}/www/p5-Plack-Middleware-Deflater \
		p5-IO-Callback>0:${PORTSDIR}/devel/p5-IO-Callback \
		p5-Starlet>0:${PORTSDIR}/www/p5-Starlet \
		p5-Net-IDN-Encode>0:${PORTSDIR}/textproc/p5-Net-IDN-Encode

PERL_CONFIGURE=	yes

MAN3=	Furl.3 \
	Furl::HTTP.3 \
	Furl::Headers.3 \
	Furl::Response.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
