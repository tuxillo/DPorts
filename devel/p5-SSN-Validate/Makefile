# New ports collection makefile for:   p5-SSN-Validate
# Date created:        17 Jan 2006
# Whom:                tiger <tiger@whitetigersd.com>
#
# $FreeBSD: ports/devel/p5-SSN-Validate/Makefile,v 1.11 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	SSN-Validate
PORTVERSION=	0.18
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KMELTZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to do SSN Validation

PERL_CONFIGURE=	yes

MAN3=		SSN::Validate.3

test: all
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
