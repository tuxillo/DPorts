# ex:ts=8
# Ports collection makefile for:	Finance::TW::EmergingQuote
# Date created:			Feb 16, 2007
# Whom:				ijliao
#
# $FreeBSD: ports/finance/p5-Finance-TW-EmergingQuote/Makefile,v 1.3 2012/11/17 05:57:26 svnexp Exp $
#

PORTNAME=	Finance-TW-EmergingQuote
PORTVERSION=	0.26
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Check stock quotes from Taiwan Emerging Stock

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Finance::TW::EmergingQuote.3

.include <bsd.port.mk>
