# ex:ts=8
# Ports collection makefile for:	p5-HTTP-Request-AsCGI
# Date created:			Nov 16, 2005
# Whom:				Lars Balker Rasmussen <lbr@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTTP-Request-AsCGI/Makefile,v 1.14 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	HTTP-Request-AsCGI
PORTVERSION=	1.2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Setup a CGI environment from a HTTP::Request

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-libwww>=5.805:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTTP::Request::AsCGI.3

.include <bsd.port.mk>
