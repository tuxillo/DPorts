# New ports collection makefile for:	Expect-Simple
# Date created:				23 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Expect-Simple/Makefile,v 1.11 2012/11/17 05:56:15 svnexp Exp $
#

PORTNAME=	Expect-Simple
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Wrapper around the Expect module

BUILD_DEPENDS=	p5-Expect>=0:${PORTSDIR}/lang/p5-Expect
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		Expect::Simple.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
