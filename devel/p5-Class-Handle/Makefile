# New ports collection makefile for:	Class-Handle
# Date created:	   12 February 2005
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Class-Handle/Makefile,v 1.9 2012/11/17 05:56:07 svnexp Exp $
#

PORTNAME=	Class-Handle
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create objects that are handles to classes

RUN_DEPENDS=	p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA \
		p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
BUILD_DEPENDS=	p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA \
		p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=		Class::Handle.3

.include <bsd.port.mk>
