# New ports collection makefile for:	p5-Geo-Coder-Bing
# Date created:		2011-10-13
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/misc/p5-Geo-Coder-Bing/Makefile,v 1.4 2012/11/17 05:59:43 svnexp Exp $
#

PORTNAME=	Geo-Coder-Bing
PORTVERSION=	0.11
CATEGORIES=	misc geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Geocode addresses with the Bing Maps API

BUILD_DEPENDS=	p5-JSON>=2:${PORTSDIR}/converters/p5-JSON \
		p5-JSON-XS>=2:${PORTSDIR}/converters/p5-JSON-XS \
		p5-LWP-Protocol-https>=6.02:${PORTSDIR}/www/p5-LWP-Protocol-https \
		p5-URI>=1.36:${PORTSDIR}/net/p5-URI \
		p5-libwww>=6.02:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-JSON>=2:${PORTSDIR}/converters/p5-JSON \
		p5-JSON-XS>=2:${PORTSDIR}/converters/p5-JSON-XS \
		p5-LWP-Protocol-https>=6.02:${PORTSDIR}/www/p5-LWP-Protocol-https \
		p5-URI>=1.36:${PORTSDIR}/net/p5-URI \
		p5-libwww>=6.02:${PORTSDIR}/www/p5-libwww

PERL_CONFIGURE=	yes

MAN3=		Geo::Coder::Bing.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
TEST_DEPENDS+=	p5-Test-Simple>=0.82:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
