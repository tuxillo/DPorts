# New ports collection makefile for:	Apache-Profiler
# Date created:	   11 August 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/p5-Apache-Profiler/Makefile,v 1.6 2012/11/17 06:02:44 svnexp Exp $
#

PORTNAME=	Apache-Profiler
PORTVERSION=	0.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Profiles time seconds needed for every request

BUILD_DEPENDS=	mp2bug:${PORTSDIR}/www/mod_perl2
RUN_DEPENDS=	mp2bug:${PORTSDIR}/www/mod_perl2

PERL_CONFIGURE=	yes

MAN3=		Apache::Profiler.3 Apache2::Profiler.3

.include <bsd.port.mk>
