# New ports collection makefile for:	Unicode::Japanese
# Date created:		25 August 2006
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/japanese/p5-Unicode-Japanese/Makefile,v 1.9 2012/11/17 05:58:38 svnexp Exp $
#

PORTNAME=	Unicode-Japanese
PORTVERSION=	0.49
CATEGORIES=	japanese converters perl5
MASTER_SITES=	CPAN

MAINTAINER=	knu@FreeBSD.org
COMMENT=	A Perl5 module to handle Japanese character encodings

PERL_CONFIGURE=	yes
MAN1=		ujconv.1 ujguess.1
MAN3=		Unicode::Japanese.3 Unicode::Japanese::JA.3

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

.include <bsd.port.post.mk>

CONFIGURE_ARGS:=	${CONFIGURE_ARGS:NCCFLAGS=*}
