# New ports collection makefile for:	p5-CGI-Session-ExpireSessions
# Date created:		11 March 2009
# Whom:			Gerard Seibert <gerard@seibercom.net>
#
# $FreeBSD: ports/www/p5-CGI-Session-ExpireSessions/Makefile,v 1.9 2012/11/17 06:02:46 svnexp Exp $
#

PORTNAME=	CGI-Session-ExpireSessions
PORTVERSION=	1.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CGI
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	gerard@seibercom.net
COMMENT=	Perl module to delete expired CGI::Session-type sessions

RUN_DEPENDS=	p5-CGI-Session>=4.14:${PORTSDIR}/www/p5-CGI-Session

TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod

MAN3=	CGI::Session::ExpireSessions.3
MANCOMPRESSED=	no

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
