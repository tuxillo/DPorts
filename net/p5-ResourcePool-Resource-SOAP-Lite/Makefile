# New ports collection makefile for:	p5-ResourcePool-Resourse-SOAP-Lite
# Date created:			February 28th, 2003
# Whom:	      			Erwin Lansing <erwin@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-ResourcePool-Resource-SOAP-Lite/Makefile,v 1.11 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	ResourcePool-Resource-SOAP-Lite
PORTVERSION=	1.0103
CATEGORIES=	net perl5
MASTER_SITES=	CPAN \
		http://www.fatalmind.com/projects/ResourcePool/
MASTER_SITE_SUBDIR=	CPAN:MWS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A ResourcePool wrapper for SOAP::Lite

RUN_DEPENDS=	p5-ResourcePool>=1.0100:${PORTSDIR}/devel/p5-ResourcePool \
		p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite-060
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		ResourcePool::Command::SOAP::Lite::Call.3 \
		ResourcePool::Factory::SOAP::Lite.3

.include <bsd.port.mk>
