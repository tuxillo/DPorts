# New ports collection makefile for:	Devel::StackTrace::WithLexicals
# Date created:		13 Oct 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Devel-StackTrace-WithLexicals/Makefile,v 1.8 2012/11/17 05:56:14 svnexp Exp $
#

PORTNAME=	Devel-StackTrace-WithLexicals
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Devel::StackTrace + PadWalker

RUN_DEPENDS=	\
	p5-Devel-StackTrace>=1.25:${PORTSDIR}/devel/p5-Devel-StackTrace \
	p5-PadWalker>=1.92:${PORTSDIR}/devel/p5-PadWalker
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Devel::StackTrace::WithLexicals.3

.include <bsd.port.mk>
