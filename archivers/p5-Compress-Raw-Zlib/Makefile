# Created by: Thomas Abthorpe <thomas@goodking.ca>
# $FreeBSD: ports/archivers/p5-Compress-Raw-Zlib/Makefile,v 1.44 2012/12/04 06:14:19 svnexp Exp $

PORTNAME=	Compress-Raw-Zlib
PORTVERSION=	2.059
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PMQS
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Low-Level Interface to zlib compression library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		Compress::Raw::Zlib.3

post-patch:
	@${REINPLACE_CMD} -e '/^BUILD_ZLIB/ s|True|False|; /^INCLUDE/ s|= .*$$|= ${INCLUDEDIR}|; /^LIB/ s|= .*$$|= ${LIBDIR}|' ${WRKSRC}/config.in

.include <bsd.port.mk>
