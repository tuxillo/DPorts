# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/databases/p5-Dancer-Session-Memcached/Makefile,v 1.6 2012/11/17 05:55:16 svnexp Exp $

PORTNAME=	Dancer-Session-Memcached
PORTVERSION=	0.2.02
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XSAWYERX
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Memcached-based session backend for Dancer

BUILD_DEPENDS=	p5-Cache-Memcached>=0:${PORTSDIR}/databases/p5-Cache-Memcached \
		p5-Dancer>=0:${PORTSDIR}/www/p5-Dancer
RUN_DEPENDS=	p5-Cache-Memcached>=0:${PORTSDIR}/databases/p5-Cache-Memcached \
		p5-Dancer>=0:${PORTSDIR}/www/p5-Dancer

PERL_CONFIGURE=	yes

MAN3=		Dancer::Session::Memcached.3

.include <bsd.port.mk>
