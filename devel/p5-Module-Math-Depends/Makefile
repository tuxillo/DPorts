# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/devel/p5-Module-Math-Depends/Makefile,v 1.6 2012/11/17 05:56:22 svnexp Exp $

PORTNAME=	Module-Math-Depends
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convenience object for manipulating module dependencies

BUILD_DEPENDS=	p5-Params-Util>=0:${PORTSDIR}/devel/p5-Params-Util \
		p5-version>=0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Module::Math::Depends.3

.include <bsd.port.mk>
