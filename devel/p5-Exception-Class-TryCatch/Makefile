# New ports collection makefile for:	p5-Exception-Class-TryCatch
# Date created:		2008-02-14
# Whom:			Felippe de Meirelles Motta <lippemail@gmail.com>
#
# $FreeBSD: ports/devel/p5-Exception-Class-TryCatch/Makefile,v 1.5 2012/11/17 05:56:15 svnexp Exp $
#

PORTNAME=	Exception-Class-TryCatch
PORTVERSION=	1.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Syntactic try/catch sugar for use with Exception::Class

BUILD_DEPENDS+=	p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS+=	p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=		Exception::Class::TryCatch.3

.include <bsd.port.mk>
