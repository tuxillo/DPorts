# New ports collection makefile for:	Object-Accessor
# Date created:	   30 September 2005
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Object-Accessor/Makefile,v 1.12 2012/11/17 05:56:24 svnexp Exp $
#

PORTNAME=	Object-Accessor
PORTVERSION=	0.44
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to create per object accessors

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Params-Check>=0.34:${PORTSDIR}/devel/p5-Params-Check
RUN_DEPENDS=	p5-Params-Check>=0.34:${PORTSDIR}/devel/p5-Params-Check

PERL_CONFIGURE=	yes

MAN3=		Object::Accessor.3

.include <bsd.port.mk>
