# New ports collection makefile for:	p5-Template-Plugin-JSON
# Date created:		Dec 26, 2006
# Whom:			kuriyama@FreeBSD.org
#
# $FreeBSD: ports/www/p5-Template-Plugin-JSON/Makefile,v 1.10 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Template-Plugin-JSON
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Adds a .json vmethod for all TT values

BUILD_DEPENDS=	p5-JSON>=2.12:${PORTSDIR}/converters/p5-JSON \
		p5-Moose>0:${PORTSDIR}/devel/p5-Moose \
		p5-Template-Toolkit>=2.20:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

PERL_CONFIGURE=	yes

MAN3=	Template::Plugin::JSON.3

.include <bsd.port.mk>
