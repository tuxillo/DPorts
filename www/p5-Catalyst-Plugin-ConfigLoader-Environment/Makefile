# Ports collection makefile for: p5-Catalyst-Plugin-ConfigLoader-Environment
# Date created:			 Apr 6, 2007
# Whom:				 lbr@freebsd.org
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-ConfigLoader-Environment/Makefile,v 1.10 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-ConfigLoader-Environment
PORTVERSION=	0.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Configure your application with environment variables

RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-JSON-Any>=0:${PORTSDIR}/converters/p5-JSON-Any \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Plugin::ConfigLoader::Environment.3

.include <bsd.port.mk>
