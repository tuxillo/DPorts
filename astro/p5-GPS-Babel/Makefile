# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/astro/p5-GPS-Babel/Makefile,v 1.4 2012/11/17 05:54:25 svnexp Exp $

PORTNAME=	GPS-Babel
PORTVERSION=	0.11
CATEGORIES=	astro perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to gpsbabel

BUILD_DEPENDS=	p5-Geo-Gpx>=0.25:${PORTSDIR}/graphics/p5-Geo-Gpx \
		p5-File-Which>=0.05:${PORTSDIR}/sysutils/p5-File-Which
RUN_DEPENDS=	p5-Geo-Gpx>=0.25:${PORTSDIR}/graphics/p5-Geo-Gpx \
		p5-File-Which>=0.05:${PORTSDIR}/sysutils/p5-File-Which

PERL_CONFIGURE=	yes

MAN3=	GPS::Babel.3

.include <bsd.port.mk>
