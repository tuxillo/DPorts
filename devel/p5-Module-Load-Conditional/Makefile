# New ports collection makefile for:	devel/p5-Module-Load-Conditional
# Date created:				15 December 2004
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Module-Load-Conditional/Makefile,v 1.32 2012/12/17 15:43:18 svnexp Exp $
#

PORTNAME=	Module-Load-Conditional
PORTVERSION=	0.54
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Looking up Perl modules information/loading at runtime

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-CoreList>=2.22:${PORTSDIR}/devel/p5-Module-CoreList
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Module::Load::Conditional.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501600
BUILD_DEPENDS+=	p5-Module-Metadata>=1.000005:${PORTSDIR}/devel/p5-Module-Metadata
RUN_DEPENDS+=	p5-Module-Metadata>=1.000005:${PORTSDIR}/devel/p5-Module-Metadata
.endif

.include <bsd.port.post.mk>
