# New ports collection makefile for:	p5-News-Article-NoCeM
# Date created:				10 December 2004
# Whom:	      				Yen-Ming Lee <leeym@FreeBSD.org>
#
# $FreeBSD: ports/news/p5-News-Article-NoCeM/Makefile,v 1.10 2012/11/17 06:00:43 svnexp Exp $
#

PORTNAME=	News-Article-NoCeM
PORTVERSION=	0.08
CATEGORIES=	news perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	leeym@FreeBSD.org
COMMENT=	A module to generate accurate NoCeM notices

RUN_DEPENDS=	p5-News-Article>=0:${PORTSDIR}/news/p5-News-Article \
		p5-PGP-Sign>=0:${PORTSDIR}/security/p5-PGP-Sign
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		News::Article::NoCeM.3

.include <bsd.port.mk>
