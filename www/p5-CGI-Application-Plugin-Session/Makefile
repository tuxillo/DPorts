# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: ports/www/p5-CGI-Application-Plugin-Session/Makefile,v 1.10 2012/11/17 06:02:45 svnexp Exp $

PORTNAME=	CGI-Application-Plugin-Session
PORTVERSION=	1.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin that adds session support to CGI::Application

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application \
		p5-CGI-Session>=0:${PORTSDIR}/www/p5-CGI-Session \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	CGI::Application::Plugin::Session.3

.include <bsd.port.mk>
