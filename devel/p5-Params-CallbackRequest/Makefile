# New ports collection makefile for:	Params::CallbackRequest
# Date created:				21 May 2004
# Whom:					Rod Taylor <ports@rbt.ca>
#
# $FreeBSD: ports/devel/p5-Params-CallbackRequest/Makefile,v 1.13 2012/11/17 05:56:25 svnexp Exp $
#

PORTNAME=	Params-CallbackRequest
PORTVERSION=	1.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provide callbacks to method and function parameters

RUN_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Params::Callback.3 Params::CallbackRequest.3 \
		Params::CallbackRequest::Exceptions.3

.include <bsd.port.mk>
