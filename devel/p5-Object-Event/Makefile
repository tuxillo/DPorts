# New ports collection makefile for:	p5-Object-Event
# Date created:		2009-07-15
# Whom:			Mons Anderson <mons@cpan.org>
#
# $FreeBSD: ports/devel/p5-Object-Event/Makefile,v 1.7 2012/11/17 05:56:24 svnexp Exp $
#

PORTNAME=	Object-Event
PORTVERSION=	1.220
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	mons@cpan.org
COMMENT=	A class that provides an event callback interface

RUN_DEPENDS=	p5-AnyEvent>=3.5:${PORTSDIR}/devel/p5-AnyEvent \
		p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense

PERL_CONFIGURE=	yes

MAN3=		Object::Event.3

.include <bsd.port.mk>
