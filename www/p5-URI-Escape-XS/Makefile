# New ports collection makefile for:    p5-URI-Escape-XS
# Date Created:                         10 Oct 2008
# Whom:                                 Denis Pokataev <catone@cpan.org>
#
# $FreeBSD: ports/www/p5-URI-Escape-XS/Makefile,v 1.10 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	URI-Escape-XS
PORTVERSION=	0.09
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	catone@cpan.org
COMMENT=	Drop-In replacement for URI::Escape in XS

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	URI::Escape::XS.3

.include <bsd.port.mk>
