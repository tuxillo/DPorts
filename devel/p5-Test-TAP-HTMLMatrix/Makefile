# New ports collection makefile for:	Test-TAP-HTMLMatrix
# Date created:	   08 July 2007
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Test-TAP-HTMLMatrix/Makefile,v 1.6 2012/11/17 05:56:33 svnexp Exp $
#

PORTNAME=	Test-TAP-HTMLMatrix
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Creates colorful matrix of Test::Harness test run results

BUILD_DEPENDS=	p5-Test-TAP-Model>=0:${PORTSDIR}/devel/p5-Test-TAP-Model \
		p5-Petal>=0:${PORTSDIR}/textproc/p5-Petal \
		p5-Petal-Utils>=0:${PORTSDIR}/textproc/p5-Petal-Utils \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::TAP::HTMLMatrix.3 Test::TAP::Model::Colorful.3 \
		Test::TAP::Model::File::Visual.3 \
		Test::TAP::Model::Subtest::Visual.3 Test::TAP::Model::Visual.3

post-patch:
	${RM} ${WRKSRC}/example.pl

.include <bsd.port.mk>
