# New ports collection makefile for:	p5-GD-TextUtil
# Date created:				21 February 2000
# Whom:	      				Dmitry Sivachenko <dima@Chg.RU>
#
# $FreeBSD: ports/graphics/p5-GD-TextUtil/Makefile,v 1.23 2012/11/17 05:58:16 svnexp Exp $
#

PORTNAME=	GD-TextUtil
PORTVERSION=	0.86
PORTREVISION=	4
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	GDTextUtil-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Text utilities for use with GD drawing package

RUN_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD

MAKE_JOBS_SAFE=  yes

PERL_CONFIGURE=	YES

MAN3=		GD::Text.3 GD::Text::Wrap.3 GD::Text::Align.3

.include <bsd.port.mk>
