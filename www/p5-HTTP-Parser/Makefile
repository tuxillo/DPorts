# New ports collection makefile for:	p5-HTTP-Parser
# Date created:		2008-01-30
# Whom:			Masahiro Teramoto <markun@onohara.to>
#
# $FreeBSD: ports/www/p5-HTTP-Parser/Makefile,v 1.4 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	HTTP-Parser
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Parse HTTP/1.1 request into HTTP::Request/Response object

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI

PERL_CONFIGURE=	yes

MAN3=		HTTP::Parser.3

.include <bsd.port.mk>
