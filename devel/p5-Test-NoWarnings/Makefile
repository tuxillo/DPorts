# New ports collection makefile for:    p5-Test-NoWarnings
# Date created:				May 12th 2004
# Whom:	      				Alex Kapranoff <alex@kapranoff.ru>
#
# $FreeBSD: ports/devel/p5-Test-NoWarnings/Makefile,v 1.16 2012/11/17 05:56:33 svnexp Exp $
#

PORTNAME=	Test-NoWarnings
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Hide and store warnings while running test scripts

TEST_DEPENDS=	p5-Test-Tester>=0.10.7:${PORTSDIR}/devel/p5-Test-Tester

PERL_CONFIGURE=	yes

MAN3=		Test::NoWarnings.3

OPTIONS=	DEVEL_STACKTRACE "Stack trace support" off

.include <bsd.port.pre.mk>

.if defined(WITH_DEVEL_STACKTRACE)
BUILD_DEPENDS+=	p5-Devel-StackTrace>=0:${PORTSDIR}/devel/p5-Devel-StackTrace
RUN_DEPENDS+=	p5-Devel-StackTrace>=0:${PORTSDIR}/devel/p5-Devel-StackTrace
.endif

.include <bsd.port.post.mk>
