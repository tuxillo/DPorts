# New ports collection makefile for:	p5-WWW-Search-Google
# Date created:				8 July 2001
# Whom:					Tom Hukins <tom@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-WWW-Search-Google/Makefile,v 1.17 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Search-Google
PORTVERSION=	0.23
PORTEPOCH=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LBROCARD
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl WWW::Search class for searching Google

BUILD_DEPENDS=	p5-WWW-Search>=0:${PORTSDIR}/www/p5-WWW-Search \
		p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite \
		p5-Net-Google>=0:${PORTSDIR}/net/p5-Net-Google
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		WWW::Search::Google.3

.include <bsd.port.mk>
