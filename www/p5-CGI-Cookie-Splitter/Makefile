# ex:ts=8
# Ports collection makefile for:	CGI::Cookie::Splitter
# Date created:			Nov 29, 2006
# Whom:				ijliao
#
# $FreeBSD: ports/www/p5-CGI-Cookie-Splitter/Makefile,v 1.4 2012/11/17 06:02:45 svnexp Exp $
#

PORTNAME=	CGI-Cookie-Splitter
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Split big cookies into smaller ones

BUILD_DEPENDS=	p5-CGI-Simple>=0:${PORTSDIR}/www/p5-CGI-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

PERL_CONFIGURE=	yes

MAN3=	CGI::Cookie::Splitter.3

.include <bsd.port.mk>
