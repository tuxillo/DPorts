# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/misc/p5-Geo-Coder-Googlev3/Makefile,v 1.4 2012/12/08 16:17:26 svnexp Exp $

PORTNAME=	Geo-Coder-Googlev3
PORTVERSION=	0.12
CATEGORIES=	misc geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google Maps v3 Geocoding API

BUILD_DEPENDS=	p5-JSON-XS>=0:${PORTSDIR}/converters/p5-JSON-XS \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Geo::Coder::Googlev3.3

.include <bsd.port.mk>
