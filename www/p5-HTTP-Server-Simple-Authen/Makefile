# New ports collection makefile for:	p5-HTTP-Server-Simple-Authen
# Date created:		2011-09-13
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTTP-Server-Simple-Authen/Makefile,v 1.2 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	HTTP-Server-Simple-Authen
PORTVERSION=	0.04
CATEGORIES=	www security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Authentication plugin for HTTP::Server::Simple

BUILD_DEPENDS=	p5-Authen-Simple>=0.4:${PORTSDIR}/security/p5-Authen-Simple \
		p5-HTTP-Server-Simple>=0.16:${PORTSDIR}/www/p5-HTTP-Server-Simple
RUN_DEPENDS=	p5-Authen-Simple>=0.4:${PORTSDIR}/security/p5-Authen-Simple \
		p5-HTTP-Server-Simple>=0.16:${PORTSDIR}/www/p5-HTTP-Server-Simple

PERL_CONFIGURE=	yes

MAN3=		HTTP::Server::Simple::Authen.3

.include <bsd.port.mk>
