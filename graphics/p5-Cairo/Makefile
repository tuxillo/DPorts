# New ports collection makefile for:	p5-Cairo
# Date created:		2005-08-18
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/graphics/p5-Cairo/Makefile,v 1.30 2012/11/17 05:58:16 svnexp Exp $
#    $MCom: ports/graphics/p5-Cairo/Makefile,v 1.8 2007/02/16 18:14:25 mezz Exp $
#

PORTNAME=	Cairo
PORTVERSION=	1.100
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN \
		SF/gtk2-perl/${PORTNAME}/${PORTVERSION}%20%28unstable%29
MASTER_SITE_SUBDIR=	CPAN:XAOC
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Perl bindings to the cairo graphics library

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.200:${PORTSDIR}/devel/p5-ExtUtils-Depends \
		p5-ExtUtils-PkgConfig>=1:${PORTSDIR}/devel/p5-ExtUtils-PkgConfig
LIB_DEPENDS=	cairo:${PORTSDIR}/graphics/cairo
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Font-FreeType>=0:${PORTSDIR}/print/p5-Font-FreeType \
		p5-Test-Number-Delta>=1:${PORTSDIR}/devel/p5-Test-Number-Delta

PERL_CONFIGURE=	yes

MAN3=	Cairo.3

.include <bsd.port.mk>
