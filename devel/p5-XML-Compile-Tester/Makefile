# New ports collection makefile for:	p5-XML-Compile-Tester
# Date created:		2009-01-11
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/p5-XML-Compile-Tester/Makefile,v 1.7 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	XML-Compile-Tester
PORTVERSION=	0.90
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Support XML::Compile Related Regression Testing

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Log-Report>=0.17:${PORTSDIR}/devel/p5-Log-Report \
		p5-Test-Deep>=0.095:${PORTSDIR}/devel/p5-Test-Deep
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	XML::Compile::Tester.3

.include <bsd.port.mk>
