# Ports collection makefile for: p5-Catalyst-Plugin-LogWarnings
# Date created:			 Apr 6, 2007
# Whom:				 lbr@freebsd.org
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-LogWarnings/Makefile,v 1.10 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-LogWarnings
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log perl warnings to your Catalyst log object

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7001:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		p5-MRO-Compat>=0.11:${PORTSDIR}/devel/p5-MRO-Compat

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Plugin::LogWarnings.3

.include <bsd.port.mk>
