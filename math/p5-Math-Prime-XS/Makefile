# New ports collection makefile for:	p5-Math-Prime-XS
# Date created:		2011-09-23
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Prime-XS/Makefile,v 1.7 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-Prime-XS
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Detect and calculate prime numbers with deterministic tests

BUILD_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-boolean>=0:${PORTSDIR}/devel/p5-boolean
RUN_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-boolean>=0:${PORTSDIR}/devel/p5-boolean

TEST_DEPENDS=	p5-Test-Pod>=1.14:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.04:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		Math::Prime::XS.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501000
BUILD_DEPENDS+=	p5-ExtUtils-CBuilder>=0:${PORTSDIR}/devel/p5-ExtUtils-CBuilder
.endif

.include <bsd.port.post.mk>
