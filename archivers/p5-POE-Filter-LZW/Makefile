# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/archivers/p5-POE-Filter-LZW/Makefile,v 1.16 2012/12/18 07:13:55 svnexp Exp $

PORTNAME=	POE-Filter-LZW
PORTVERSION=	1.7.2
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::LZW

BUILD_DEPENDS=	p5-Compress-LZW>=0:${PORTSDIR}/archivers/p5-Compress-LZW \
		p5-POE>=0.38:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Filter::LZW.3

.include <bsd.port.mk>
