# New ports collection makefile for:	p5-Path-Resource
# Date created:		2011-04-26
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Path-Resource/Makefile,v 1.4 2012/11/17 05:56:26 svnexp Exp $
#

PORTNAME=	Path-Resource
PORTVERSION=	0.072
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RKRIMEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Perl module for combining local path manipulation and URI manipulation

BUILD_DEPENDS=	p5-Path-Abstract>0:${PORTSDIR}/devel/p5-Path-Abstract \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS=	p5-Path-Abstract>0:${PORTSDIR}/devel/p5-Path-Abstract \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
TEST_DEPENDS=	p5-Test-Most>=0:${PORTSDIR}/devel/p5-Test-Most \
		p5-Test-Lazy>=0:${PORTSDIR}/devel/p5-Test-Lazy

USE_PERL5=	yes
PERL_CONFIGURE=	yes

MAN3=	Path::Resource.3 Path::Resource::Base.3

.include <bsd.port.mk>
