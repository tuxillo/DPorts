# New ports collection makefile for:	TAP::Formatter::JUnit
# Date created:		10 Apr 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-TAP-Formatter-JUnit/Makefile,v 1.10 2012/11/17 05:56:31 svnexp Exp $
#

PORTNAME=	TAP-Formatter-JUnit
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Harness output delegate for JUnit output

RUN_DEPENDS=	\
	p5-Moose>0:${PORTSDIR}/devel/p5-Moose \
	p5-MooseX-NonMoose>0:${PORTSDIR}/devel/p5-MooseX-NonMoose \
	p5-File-Slurp>0:${PORTSDIR}/devel/p5-File-Slurp \
	p5-XML-Generator>0:${PORTSDIR}/textproc/p5-XML-Generator \
	p5-Test-Harness>3.12:${PORTSDIR}/devel/p5-Test-Harness
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-Differences>=0.61:${PORTSDIR}/devel/p5-Test-Differences \
		p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy

PERL_MODBUILD=	yes

MAN1=	tap2junit.1
MAN3=	TAP::Formatter::JUnit.3 \
	TAP::Formatter::JUnit::Result.3 \
	TAP::Formatter::JUnit::Session.3

.include <bsd.port.mk>
