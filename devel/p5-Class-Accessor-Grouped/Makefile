# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Class-Accessor-Grouped/Makefile,v 1.29 2012/12/17 15:43:18 svnexp Exp $

PORTNAME=	Class-Accessor-Grouped
PORTVERSION=	0.10009
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RIBASUSHI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Lets you build groups of accessors

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Runtime>=0.012:${PORTSDIR}/devel/p5-Module-Runtime \
		p5-Class-XSAccessor>=1.15:${PORTSDIR}/devel/p5-Class-XSAccessor \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat \
		p5-Sub-Name>=0.05:${PORTSDIR}/devel/p5-Sub-Name
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN3=		Class::Accessor::Grouped.3

.include <bsd.port.mk>
