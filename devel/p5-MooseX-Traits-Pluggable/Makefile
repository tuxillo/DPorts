# New ports collection makefile for:	devel/p5-MooseX-Traits-Pluggable
# Date created:				25 July 2009
# Whom:					Bill Brinzer <bill.brinzer@gmail.com>
#
# $FreeBSD: ports/devel/p5-MooseX-Traits-Pluggable/Makefile,v 1.10 2012/11/17 05:56:23 svnexp Exp $
#

PORTNAME=	MooseX-Traits-Pluggable
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	An extension to MooseX::Traits

BUILD_DEPENDS=	\
	p5-Moose>=2:${PORTSDIR}/devel/p5-Moose \
	p5-namespace-autoclean>=0:${PORTSDIR}/devel/p5-namespace-autoclean \
	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN3=	MooseX::Traits::Pluggable.3

.include <bsd.port.mk>
