# New ports collection makefile for:	www/p5-WWW-Mechanize-CGI
# Date created:				25 November 2008
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-WWW-Mechanize-CGI/Makefile,v 1.3 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Mechanize-CGI
PORTVERSION=	0.3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Use WWW::Mechanize with CGI applications.

RUN_DEPENDS=	p5-HTTP-Request-AsCGI>=0.2:${PORTSDIR}/www/p5-HTTP-Request-AsCGI \
		p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	WWW::Mechanize::CGI.3

.include <bsd.port.mk>
