# New ports collection makefile for:	p5-Pod-Site
# Date created:				25 April 2010
# Whom:					milki
#
# $FreeBSD: ports/www/p5-Pod-Site/Makefile,v 1.7 2012/11/17 06:02:53 svnexp Exp $
#

PORTNAME=	Pod-Site
PORTVERSION=	0.53
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DWHEELER
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@rescomp.berkeley.edu
COMMENT=	Build browsable HTML documentation for your app

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-Object-Tiny>=0:${PORTSDIR}/devel/p5-Object-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-File>=0:${PORTSDIR}/devel/p5-Test-File \
		p5-Test-MockModule>=0.05:${PORTSDIR}/devel/p5-Test-MockModule \
		p5-Test-XPath>=0.12:${PORTSDIR}/lang/p5-Test-XPath

OPTIONS=	PODT "Include Pod package tests" off

PERL_MODBUILD=	yes

MAN1=		podsite.1
MAN3=		Pod::Site.3

.include <bsd.port.options.mk>

.if defined(WITH_PODT)
TEST_DEPENDS+=	p5-Test-Pod>=1.41:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.06:${PORTSDIR}/devel/p5-Test-Pod-Coverage
.endif

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
BUILD_DEPENDS+=	p5-File-Path>=2.07:${PORTSDIR}/devel/p5-File-Path
RUN_DEPENDS+=	p5-File-Path>=2.07:${PORTSDIR}/devel/p5-File-Path
TEST_DEPENDS+=	p5-Test-Simple>=0.88:${PORTSDIR}/devel/p5-Test-Simple
.endif

.if ${PERL_LEVEL} < 501200
BUILD_DEPENDS+=	p5-Pod-Simple>=3.12:${PORTSDIR}/textproc/p5-Pod-Simple
RUN_DEPENDS+=	p5-Pod-Simple>=3.12:${PORTSDIR}/textproc/p5-Pod-Simple
.endif

.include <bsd.port.post.mk>
