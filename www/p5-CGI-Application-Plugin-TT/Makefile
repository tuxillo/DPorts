# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: ports/www/p5-CGI-Application-Plugin-TT/Makefile,v 1.11 2012/11/17 06:02:45 svnexp Exp $

PORTNAME=	CGI-Application-Plugin-TT
PORTVERSION=	1.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Add Template Toolkit support to CGI::Application

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA \
		p5-CGI-Application-Plugin-DevPopup>=0:${PORTSDIR}/www/p5-CGI-Application-Plugin-DevPopup
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	CGI::Application::Plugin::TT.3

.include <bsd.port.mk>
