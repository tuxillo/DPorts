# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/devel/p5-DateTime-Format-Flexible/Makefile,v 1.9 2012/11/28 17:07:42 svnexp Exp $

PORTNAME=	DateTime-Format-Flexible
PORTVERSION=	0.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Flexibly parse strings and turn them into DateTime objects

RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0.74:${PORTSDIR}/devel/p5-DateTime-Format-Builder \
		p5-DateTime-TimeZone>=0:${PORTSDIR}/devel/p5-DateTime-TimeZone \
		p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-MockTime>=0:${PORTSDIR}/devel/p5-Test-MockTime

PERL_CONFIGURE=	yes

MAN3=	DateTime::Format::Flexible.3 \
	DateTime::Format::Flexible::lang.3 \
	DateTime::Format::Flexible::lang::de.3 \
	DateTime::Format::Flexible::lang::en.3 \
	DateTime::Format::Flexible::lang::es.3

.include <bsd.port.mk>
