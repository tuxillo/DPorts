# New ports collection makefile for:	www/p5-Catalyst-Plugin-Session-Store-DBI
# Date created:				2 Jan 2006
# Whom:					Lars Balker Rasmussen <lbr@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-Session-Store-DBI/Makefile,v 1.17 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-Session-Store-DBI
PORTVERSION=	0.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store your sessions in a database

BUILD_DEPENDS=	p5-Catalyst-Plugin-Session>=0:${PORTSDIR}/www/p5-Catalyst-Plugin-Session \
		p5-Catalyst-Runtime>=5.49:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat
RUN_DEPENDS=	p5-Catalyst-Plugin-Session>=0:${PORTSDIR}/www/p5-Catalyst-Plugin-Session \
		p5-Catalyst-Runtime>=5.49:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Plugin::Session::Store::DBI.3

.include <bsd.port.mk>
