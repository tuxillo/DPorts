# New ports collection makefile for:	Catalyst-Plugin-Server
# Date created:	   05 August 2007
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-Server/Makefile,v 1.10 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-Server
PORTVERSION=	0.28
PORTREVISION=	1
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst Server Plugin: Base & XMLRPC

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat \
		p5-Clone-Fast>=0:${PORTSDIR}/devel/p5-Clone-Fast \
		p5-RPC-XML>=0:${PORTSDIR}/net/p5-RPC-XML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Catalyst::Plugin::Server.3 Catalyst::Plugin::Server::XMLRPC.3 \
		Catalyst::Plugin::Server::XMLRPC::DispatchType::XMLRPCPath.3 \
		Catalyst::Plugin::Server::XMLRPC::DispatchType::XMLRPCRegex.3 \
		Catalyst::Plugin::Server::XMLRPC::Tutorial.3

.include <bsd.port.mk>
