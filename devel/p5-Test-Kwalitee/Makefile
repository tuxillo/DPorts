# New ports collection makefile for:	p5-Test-Kwalitee
# Date created:		2008-02-14
# Whom:			Felippe de Meirelles Motta <lippemail@gmail.com>
#
# $FreeBSD: ports/devel/p5-Test-Kwalitee/Makefile,v 1.9 2012/11/17 05:56:32 svnexp Exp $
#

PORTNAME=	Test-Kwalitee
PORTVERSION=	1.01
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Test the Kwalitee of a distribution before you release it

BUILD_DEPENDS+=	p5-Module-CPANTS-Analyse>=0:${PORTSDIR}/devel/p5-Module-CPANTS-Analyse \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature
RUN_DEPENDS+=	p5-Module-CPANTS-Analyse>=0:${PORTSDIR}/devel/p5-Module-CPANTS-Analyse \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature

PERL_CONFIGURE=	yes
PERL_MODBUILD=	yes

MAN3=		Test::Kwalitee.3

.include <bsd.port.mk>
