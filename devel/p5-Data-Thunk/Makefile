# $FreeBSD: ports/devel/p5-Data-Thunk/Makefile,v 1.1 2012/12/13 10:39:16 svnexp Exp $

PORTNAME=	Data-Thunk
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FLORA
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Lazy/deferred evaluation - a sneakier Scalar::Defer

BUILD_DEPENDS=	p5-Check-ISA>=0:${PORTSDIR}/devel/p5-Check-ISA \
		p5-Data-Swap>=0:${PORTSDIR}/devel/p5-Data-Swap \
		p5-Devel-Refcount>=0:${PORTSDIR}/devel/p5-Devel-Refcount \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter \
		p5-Try-Tiny>=0:${PORTSDIR}/lang/p5-Try-Tiny \
		p5-UNIVERSAL-ref>=0:${PORTSDIR}/devel/p5-UNIVERSAL-ref \
		p5-namespace-clean>=0:${PORTSDIR}/devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Data::Thunk.3 \
	Data::Thunk::Code.3 \
	Data::Thunk::Object.3 \
	Data::Thunk::ScalarValue.3

.include <bsd.port.mk>
