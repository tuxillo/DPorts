# New ports collection makefile for:	POE-Component-EasyDBI
# Date created:		31 Jan 2004
# Whom:			Zach Thompson <lin-chi@lastamericanempire.com>
#
# $FreeBSD: ports/databases/p5-POE-Component-EasyDBI/Makefile,v 1.30 2012/11/17 05:55:16 svnexp Exp $
#

PORTNAME=	POE-Component-EasyDBI
PORTVERSION=	1.23
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component for simplified DBI usage

RUN_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Error>=0:${PORTSDIR}/lang/p5-Error \
		p5-Params-Util>=0:${PORTSDIR}/devel/p5-Params-Util
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Component::EasyDBI.3 \
		POE::Component::EasyDBI::SubProcess.3

.include <bsd.port.mk>
