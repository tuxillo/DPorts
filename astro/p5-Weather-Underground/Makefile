# New ports collection makefile for:	p5-Weather-Underground
# Date created:		2006-05-16
# Whom:			Simon Olofsson <simon@olofsson.de>
#
# $FreeBSD: ports/astro/p5-Weather-Underground/Makefile,v 1.7 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	Weather-Underground
PORTVERSION=	3.03
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Weather
PKGNAMEPREFIX=	p5-

MAINTAINER=	simon@olofsson.de
COMMENT=	Retrieve weather information from wunderground.com

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Weather::Underground.3

.include <bsd.port.mk>
