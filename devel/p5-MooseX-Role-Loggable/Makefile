# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: ports/devel/p5-MooseX-Role-Loggable/Makefile,v 1.5 2013/01/14 11:47:11 svnexp Exp $

PORTNAME=	MooseX-Role-Loggable
PORTVERSION=	0.112
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensive, yet simple, logging role using Log::Dispatchouli

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Log-Dispatchouli>=0:${PORTSDIR}/devel/p5-Log-Dispatchouli \
		p5-Moo>=1.000001:${PORTSDIR}/devel/p5-Moo \
		p5-MooX-Types-MooseLike>=0:${PORTSDIR}/devel/p5-MooX-Types-MooseLike \
		p5-Safe-Isa>=0:${PORTSDIR}/devel/p5-Safe-Isa \
		p5-Sys-Syslog>=0.25:${PORTSDIR}/sysutils/p5-Sys-Syslog \
		p5-namespace-sweep>=0:${PORTSDIR}/devel/p5-namespace-sweep
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal

PERL_CONFIGURE=	yes

MAN3=		MooseX::Role::Loggable.3

.include <bsd.port.mk>
