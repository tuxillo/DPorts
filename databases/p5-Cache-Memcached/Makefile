# New ports collection makefile for:	p5-Cache-Memcached
# Date created:		2004-04-15
# Whom:			michael johnson <ahze@ahze.net>
#
# $FreeBSD: ports/databases/p5-Cache-Memcached/Makefile,v 1.27 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	Cache-Memcached
PORTVERSION=	1.30
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN \
		http://www.danga.com/memcached/dist/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl API for memcached, a distributed memory cache daemon

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-String-CRC32>0:${PORTSDIR}/devel/p5-String-CRC32
RUN_DEPENDS=	p5-String-CRC32>0:${PORTSDIR}/devel/p5-String-CRC32

PERL_CONFIGURE=	yes

MAN3=	Cache::Memcached.3

.include <bsd.port.mk>
