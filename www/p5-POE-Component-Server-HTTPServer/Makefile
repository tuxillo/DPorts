# New ports collection makefile for:	POE-Component-Server-HTTPServer
# Date created:		23 Feb 2005
# Whom:			Zach Thompson <lin-chi@lastamericanempire.com>
#
# $FreeBSD: ports/www/p5-POE-Component-Server-HTTPServer/Makefile,v 1.7 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	POE-Component-Server-HTTPServer
PORTVERSION=	0.9.2
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lin-chi@lastamericanempire.com
COMMENT=	POE Component to server HTTP requests

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-HTML-Template-HashWrapper>=0:${PORTSDIR}/www/p5-HTML-Template-HashWrapper \
		p5-MIME-Types>=0:${PORTSDIR}/mail/p5-MIME-Types
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Component::Server::HTTPServer.3 \
		POE::Component::Server::HTTPServer::BasicAuthenHandler.3 \
		POE::Component::Server::HTTPServer::Examples.3 \
		POE::Component::Server::HTTPServer::Handler.3 \
		POE::Component::Server::HTTPServer::NotFoundHandler.3 \
		POE::Component::Server::HTTPServer::ParameterParseHandler.3 \
		POE::Component::Server::HTTPServer::StaticHandler.3 \
		POE::Component::Server::HTTPServer::TemplateHandler.3

.include <bsd.port.mk>
