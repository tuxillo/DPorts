# New ports collection makefile for:	CGI::Application::Plugin::ValidateRM
# Date created:				08 Nov 2005
# Whom:					Espen Tagestad <espen@tagestad.no>
#
# $FreeBSD: ports/www/p5-CGI-Application-Plugin-ValidateRM/Makefile,v 1.11 2012/11/17 06:02:45 svnexp Exp $

PORTNAME=	CGI-Application-Plugin-ValidateRM
PORTVERSION=	2.5
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Help validate forms with the CGI::Application framework

BUILD_DEPENDS=	p5-HTML-FillInForm>=0:${PORTSDIR}/www/p5-HTML-FillInForm \
		p5-Data-FormValidator>=0:${PORTSDIR}/textproc/p5-Data-FormValidator \
		p5-CGI-modules>=0:${PORTSDIR}/www/p5-CGI-modules \
		p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

MAN3=		CGI::Application::Plugin::ValidateRM.3

.include <bsd.port.mk>
