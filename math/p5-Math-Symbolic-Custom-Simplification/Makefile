# New ports collection makefile for:	Math-Symbolic-Custom-Simplification
# Date created:				15 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Symbolic-Custom-Simplification/Makefile,v 1.7 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-Symbolic-Custom-Simplification
PORTVERSION=	1.01
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	User defined simplification routines

BUILD_DEPENDS=	p5-Math-Symbolic>=0:${PORTSDIR}/math/p5-Math-Symbolic
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::Symbolic::Custom::Simplification.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
