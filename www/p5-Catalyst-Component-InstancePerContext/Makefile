# New ports collection makefile for:	p5-Catalyst-Component-InstancePerContext
# Date created:		2008-09-26
# Whom:			Charlie & <root@dev2.rambler.ru>
#
# $FreeBSD: ports/www/p5-Catalyst-Component-InstancePerContext/Makefile,v 1.3 2012/11/17 06:02:46 svnexp Exp $
#

PORTNAME=	Catalyst-Component-InstancePerContext
PORTVERSION=	0.001001
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@mamontov.net
COMMENT=	Return a new instance a component on each request

BUILD_DEPENDS=	p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime	\
		p5-Moose>=0:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Catalyst::Component::InstancePerContext.3

.include <bsd.port.mk>
