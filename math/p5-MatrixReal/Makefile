# Ports collection Makefile for:	Math-MatrixReal
# Date Created:				Aug 14 1997
# Whom:					Sander Vesik <sander@haldjas.folklore.ee>
#
# $FreeBSD: ports/math/p5-MatrixReal/Makefile,v 1.20 2012/11/17 05:59:27 svnexp Exp $

PORTNAME=	MatrixReal
PORTVERSION=	2.09
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Math
PKGNAMEPREFIX=	p5-
DISTNAME=	Math-${PORTNAME}-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A perl module implementing a Matrix of Reals

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Most>=0:${PORTSDIR}/devel/p5-Test-Most

PERL_CONFIGURE=	YES

MAN3=		Math::MatrixReal.3 Math::Kleene.3

.include <bsd.port.mk>
