# New ports collection makefile for:	devel/p5-Test-CheckDeps
# Date created:				2012-07-06
# Whom:					Frederic Culot <culot@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Test-CheckDeps/Makefile,v 1.2 2012/11/17 05:56:31 svnexp Exp $
#

PORTNAME=	Test-CheckDeps
PORTVERSION=	0.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Check for presence of dependencies

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CPAN-Meta-Check>0:${PORTSDIR}/devel/p5-CPAN-Meta-Check
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::CheckDeps.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
TEST_DEPENDS+=	p5-Test-Simple>=0.88:${PORTSDIR}/devel/p5-Test-Simple
.endif

.if ${PERL_LEVEL} < 501400
BUILD_DEPENDS+=	p5-CPAN-Meta>0:${PORTSDIR}/devel/p5-CPAN-Meta \
		p5-Module-Metadata>0:${PORTSDIR}/devel/p5-Module-Metadata
RUN_DEPENDS+=	p5-CPAN-Meta>0:${PORTSDIR}/devel/p5-CPAN-Meta \
		p5-Module-Metadata>0:${PORTSDIR}/devel/p5-Module-Metadata
.endif

.include <bsd.port.post.mk>
