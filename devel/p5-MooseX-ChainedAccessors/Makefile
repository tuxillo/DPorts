# New ports collection makefile for:	MooseX-ChainedAccessors
# Date created:				2011-04-03
# Whom:					Frederic Culot <culot@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-MooseX-ChainedAccessors/Makefile,v 1.2 2012/11/17 05:56:22 svnexp Exp $
#

PORTNAME=	MooseX-ChainedAccessors
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PERLER
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Accessor class for chained accessors with Moose

RUN_DEPENDS=	p5-Moose>=0:${PORTSDIR}/devel/p5-Moose \
		p5-Try-Tiny>=0:${PORTSDIR}/lang/p5-Try-Tiny
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Moose::Meta::Attribute::Custom::Trait::Chained.3 \
		MooseX::ChainedAccessors.3 \
		MooseX::ChainedAccessors::Accessor.3 \
		MooseX::Traits::Attribute::Chained.3

.include <bsd.port.mk>
