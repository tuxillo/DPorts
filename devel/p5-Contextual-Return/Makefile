# New ports collection makefile for:	p5-Contextual-Return
# Date created:		2006-08-09
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Contextual-Return/Makefile,v 1.11 2012/12/17 15:02:09 svnexp Exp $
#

PORTNAME=	Contextual-Return
PORTVERSION=	0.004.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DCONWAY
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create context-sensitive return values

BUILD_DEPENDS=	p5-Want>=0:${PORTSDIR}/devel/p5-Want
RUN_DEPENDS=	p5-Want>=0:${PORTSDIR}/devel/p5-Want

PERL_CONFIGURE=	yes

MAN3=		Contextual::Return.3 Contextual::Return::Failure.3

.include <bsd.port.mk>
