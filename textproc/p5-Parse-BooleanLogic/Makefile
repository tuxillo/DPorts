# New ports collection makefile for:	p5-Parse-BooleanLogic
# Date created:		2009-11-23
# Whom:			Steven Kreuzer <skreuzer@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Parse-BooleanLogic/Makefile,v 1.4 2012/11/17 06:02:06 svnexp Exp $
#

PORTNAME=	Parse-BooleanLogic
PORTVERSION=	0.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Parser of boolean expressions

BUILD_DEPENDS=	p5-Regexp-Common>=2.122:${PORTSDIR}/textproc/p5-Regexp-Common \
		p5-Module-Install>=0.91_1:${PORTSDIR}/devel/p5-Module-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

PERL_CONFIGURE=	yes

MAN3=	Parse::BooleanLogic.3

.include <bsd.port.mk>
