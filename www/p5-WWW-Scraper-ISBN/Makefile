# ex:ts=8
# Ports collection makefile for:	p5-WWW-Scraper-ISBN
# Date created:			Nov 8, 2005
# Whom:				Ying-Chieh Liao <ijliao@csie.nctu.edu.tw>
#
# $FreeBSD: ports/www/p5-WWW-Scraper-ISBN/Makefile,v 1.6 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Scraper-ISBN
PORTVERSION=	0.25
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieving information about books by ISBN number

BUILD_DEPENDS=	p5-WWW-Scraper-ISBN-Record>=0:${PORTSDIR}/www/p5-WWW-Scraper-ISBN-Record
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=	WWW::Scraper::ISBN.3

.include <bsd.port.mk>
