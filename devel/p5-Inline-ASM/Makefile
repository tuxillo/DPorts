# New ports collection makefile for:	Inline::ASM
# Date created:		14 Dec 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Inline-ASM/Makefile,v 1.9 2012/11/17 05:56:19 svnexp Exp $
#

PORTNAME=	Inline-ASM
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Write Perl Subroutines in assembler

BUILD_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	</dev/null

MAN3=		Inline::ASM.3

.include <bsd.port.mk>
