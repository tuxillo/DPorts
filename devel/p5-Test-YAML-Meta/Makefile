# New ports collection makefile for:	p5-Test-YAML-Meta
# Date created:		2008-02-13
# Whom:			Felippe de Meirelles Motta <lippemail@gmail.com>
#
# $FreeBSD: ports/devel/p5-Test-YAML-Meta/Makefile,v 1.14 2012/11/17 05:56:34 svnexp Exp $
#

PORTNAME=	Test-YAML-Meta
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Validation of the META.yml file in a distribution

BUILD_DEPENDS=	p5-Test-YAML-Valid>=0:${PORTSDIR}/devel/p5-Test-YAML-Valid \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-CPAN-Meta-YAML>=0.17:${PORTSDIR}/devel/p5-Test-CPAN-Meta-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::YAML::Meta.3

.include <bsd.port.mk>
