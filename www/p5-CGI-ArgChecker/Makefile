# New ports collection makefile for:	CGI-ArgChecker
# Date created:				Mon Jan  1 11:01:44 2001
# Whom:					will
#
# $FreeBSD: ports/www/p5-CGI-ArgChecker/Makefile,v 1.11 2012/11/17 06:02:45 svnexp Exp $
#

PORTNAME=	CGI-ArgChecker
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module implementing a cgi interface to String::Checker

BUILD_DEPENDS=	p5-String-Checker>=0:${PORTSDIR}/devel/p5-String-Checker
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		CGI::ArgChecker.3

.include <bsd.port.mk>
