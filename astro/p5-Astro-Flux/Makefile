# New ports collection makefile for:	p5-Astro-Flux
# Date created:		2012-07-01
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/astro/p5-Astro-Flux/Makefile,v 1.2 2012/11/17 05:54:25 svnexp Exp $
#

PORTNAME=	Astro-Flux
PORTVERSION=	0.01
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Class for handling astronomical flux quantities

BUILD_DEPENDS=	p5-Astro-WaveBand>=0:${PORTSDIR}/astro/p5-Astro-WaveBand \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-Misc-Quality>=0:${PORTSDIR}/astro/p5-Misc-Quality \
		p5-Number-Uncertainty>=0:${PORTSDIR}/math/p5-Number-Uncertainty
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Astro::Flux.3 \
		Astro::FluxColor.3 \
		Astro::Fluxes.3

.include <bsd.port.mk>
