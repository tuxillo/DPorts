# New ports collection makefile for:	www/p5-Catalyst-Plugin-Session-Store-Cache
# Date created:				21 Jul 2007
# Whom:					lbr@FreeBSD.org
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-Session-Store-Cache/Makefile,v 1.5 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-Session-Store-Cache
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store sessions using a Catalyst::Plugin::Cache

BUILD_DEPENDS=	p5-Catalyst-Plugin-Session>=0.06:${PORTSDIR}/www/p5-Catalyst-Plugin-Session
RUN_DEPENDS=	p5-Catalyst-Plugin-Session>=0.06:${PORTSDIR}/www/p5-Catalyst-Plugin-Session

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Plugin::Session::Store::Cache.3

.include <bsd.port.mk>
