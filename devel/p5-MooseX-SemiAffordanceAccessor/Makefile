# New ports collection makefile for:	p5-MooseX-SemiAffordanceAccessor
# Date created:				Fri 14 Aug 2009
# Whom:					Alexey V. Degtyarev
#
# $FreeBSD: ports/devel/p5-MooseX-SemiAffordanceAccessor/Makefile,v 1.6 2012/11/17 05:56:23 svnexp Exp $
#

PORTNAME=	MooseX-SemiAffordanceAccessor
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Name your accessors foo() and set_foo()

BUILD_DEPENDS=	p5-Moose>=0.94:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		MooseX::SemiAffordanceAccessor.3 \
		MooseX::SemiAffordanceAccessor::Role::Attribute.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
