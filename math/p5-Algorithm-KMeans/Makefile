# New ports collection makefile for:	p5-Algorithm-KMeans
# Date created:				30 June, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Algorithm-KMeans/Makefile,v 1.7 2012/11/17 05:59:25 svnexp Exp $
#

PORTNAME=	Algorithm-KMeans
PORTVERSION=	1.40
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AVIKAK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Clustering multi-dimensional data with a pure-Perl implementation

BUILD_DEPENDS=	p5-Graphics-GnuplotIF>=1.4:${PORTSDIR}/graphics/p5-Graphics-GnuplotIF \
		p5-Math-GSL>=0.26:${PORTSDIR}/math/p5-Math-GSL \
		p5-Math-Random>=0.71:${PORTSDIR}/math/p5-Math-Random
RUN_DEPENDS=	p5-Graphics-GnuplotIF>=1.4:${PORTSDIR}/graphics/p5-Graphics-GnuplotIF \
		p5-Math-GSL>=0.26:${PORTSDIR}/math/p5-Math-GSL \
		p5-Math-Random>=0.71:${PORTSDIR}/math/p5-Math-Random

PERL_CONFIGURE=	yes

MAN3=		Algorithm::KMeans.3

.include <bsd.port.mk>
