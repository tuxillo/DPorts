# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/www/p5-Router-Simple/Makefile,v 1.6 2012/12/08 11:19:43 svnexp Exp $

PORTNAME=	Router-Simple
PORTVERSION=	0.14
CATEGORIES=	www net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TOKUHIROM
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple HTTP Router

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Accessor-Lite>=0.05:${PORTSDIR}/devel/p5-Class-Accessor-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Router::Simple.3 \
		Router::Simple::Cookbook.3 \
		Router::Simple::Declare.3 \
		Router::Simple::Route.3 \
		Router::Simple::SubMapper.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
BUILD_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
RUN_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
.endif

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.98:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
