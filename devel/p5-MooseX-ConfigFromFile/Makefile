# New ports collection makefile for:	MooseX::ConfigFromFile
# Date created:		20 Jan 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-MooseX-ConfigFromFile/Makefile,v 1.6 2012/11/17 05:56:23 svnexp Exp $
#

PORTNAME=	MooseX-ConfigFromFile
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to abstract Moose role attribute setting from file

RUN_DEPENDS=	\
	p5-Moose>=0.35:${PORTSDIR}/devel/p5-Moose \
	p5-MooseX-Types-Path-Class>=0.04:${PORTSDIR}/devel/p5-MooseX-Types-Path-Class \
	p5-Try-Tiny>0:${PORTSDIR}/lang/p5-Try-Tiny \
	p5-namespace-autoclean>0:${PORTSDIR}/devel/p5-namespace-autoclean
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal

PERL_CONFIGURE=	yes

MAN3=		MooseX::ConfigFromFile.3

.include <bsd.port.mk>
