# New ports collection makefile for:	p5-mixin
# Date created:	   22 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-mixin/Makefile,v 1.10 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	mixin
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MSCHWERN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mix-in inheritance, an alternative to multiple inheritance

TEST_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

PERL_MODBUILD=	yes

MAN3=		mixin.3 mixin::with.3

.include <bsd.port.mk>
