# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/devel/p5-IO-Detect/Makefile,v 1.1 2012/12/04 17:31:33 svnexp Exp $

PORTNAME=	IO-Detect
PORTVERSION=	0.005
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Detect if a given scalar is a filehandle

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-IO-All>=0:${PORTSDIR}/devel/p5-IO-All \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class

PERL_CONFIGURE=	yes

MAN3=		IO::Detect.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501601
BUILD_DEPENDS+=	p5-Scalar-List-Utils>=1.24:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS+=	p5-Scalar-List-Utils>=1.24:${PORTSDIR}/lang/p5-Scalar-List-Utils
.endif

.include <bsd.port.post.mk>
