# $FreeBSD: ports/www/p5-Plack-Middleware-IEnosniff/Makefile,v 1.5 2013/01/14 22:54:02 svnexp Exp $

PORTNAME=	Plack-Middleware-IEnosniff
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BAYASHI
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to add X-Content-Type-Options:nosniff

RUN_DEPENDS=	\
	p5-Plack>0:${PORTSDIR}/www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Plack::Middleware::IEnosniff.3

.include <bsd.port.mk>
