# New ports collection makefile for:	p5-Test-Classy
# Date created:		2012-03-02
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Test-Classy/Makefile,v 1.2 2012/11/17 05:56:31 svnexp Exp $
#

PORTNAME=	Test-Classy
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
#MASTER_SITE_SUBDIR=	CPAN:ISHIGAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to allow writing your unit tests in other modules than *.t

BUILD_DEPENDS=	p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector \
		p5-Data-Dump>=0:${PORTSDIR}/devel/p5-Data-Dump \
		p5-Module-Find>=0.05:${PORTSDIR}/devel/p5-Module-Find \
		p5-Sub-Install>=0.920:${PORTSDIR}/devel/p5-Sub-Install \
		p5-Term-Encoding>=0:${PORTSDIR}/devel/p5-Term-Encoding \
		p5-Test-UseAllModules>=0:${PORTSDIR}/devel/p5-Test-UseAllModules
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Test::Classy.3 Test::Classy::Base.3 Test::Classy::Util.3

.include <bsd.port.mk>
