# New ports collection makefile for:	p5-Graphics-ColorNames
# Date Created:				1 July 2001
# Whom:					Pete Fritchman <petef@databits.net>
#
# $FreeBSD: ports/graphics/p5-Graphics-ColorNames/Makefile,v 1.17 2012/11/17 05:58:17 svnexp Exp $
#

PORTNAME=	Graphics-ColorNames
PORTVERSION=	2.11
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A perl class that defines RGB values for common color names

BUILD_DEPENDS=	p5-Module-Load>=0.10:${PORTSDIR}/devel/p5-Module-Load \
		p5-Module-Loaded>=0:${PORTSDIR}/devel/p5-Module-Loaded
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_MODBUILD=	yes

MAN3=	Graphics::ColorNames.3 \
	Graphics::ColorNames::HTML.3 \
	Graphics::ColorNames::Netscape.3 \
	Graphics::ColorNames::Windows.3 \
	Graphics::ColorNames::X.3

.include <bsd.port.mk>
