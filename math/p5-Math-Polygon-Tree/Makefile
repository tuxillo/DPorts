# New ports collection makefile for:	p5-Math-Polygon-Tree
# Date created:		03 Mar 2011
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Polygon-Tree/Makefile,v 1.4 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-Polygon-Tree
PORTVERSION=	0.041
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LIOSHA
PKGNAMEPREFIX=	p5-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Class for fast check if point is inside polygon

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple \
		p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils \
		p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-Math-Geometry-Planar-GPC-Polygon>=0:${PORTSDIR}/math/p5-Math-Geometry-Planar-GPC-Polygon
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Math::Polygon::Tree.3

.include <bsd.port.mk>
