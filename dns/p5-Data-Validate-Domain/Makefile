# New ports collection makefile for:	dns/p5-Data-Validate-Domain
# Date created:				30 December 2005
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/dns/p5-Data-Validate-Domain/Makefile,v 1.11 2012/11/17 05:57:10 svnexp Exp $
#

PORTNAME=	Data-Validate-Domain
PORTVERSION=	0.10
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NEELY
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Data::Validate::Domain - domain validation methods

BUILD_DEPENDS=	p5-Net-Domain-TLD>=0:${PORTSDIR}/dns/p5-Net-Domain-TLD
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Data::Validate::Domain.3

.include <bsd.port.mk>
