# New ports collection makefile for:	www/p5-Template-Timer
# Date created:				04 May 2005
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Template-Timer/Makefile,v 1.9 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Template-Timer
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Rudimentary profiling for Template Toolkit

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Template::Timer.3

.include <bsd.port.mk>
