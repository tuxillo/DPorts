# New ports collection makefile for:	Math-Geometry-Planar-Offset
# Date created:				21 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Geometry-Planar-Offset/Makefile,v 1.9 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-Geometry-Planar-Offset
PORTVERSION=	1.05
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Calculate offset polygons

BUILD_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::Geometry::Planar::Offset.3

PERL_MODBUILD=	yes

.include <bsd.port.mk>
