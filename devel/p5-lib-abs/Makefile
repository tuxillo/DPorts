# New ports collection makefile for:	p5-lib-abs
# Date created:		2009-07-21
# Whom:			Mons Anderson <mons@cpan.org>
#
# $FreeBSD: ports/devel/p5-lib-abs/Makefile,v 1.6 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	lib-abs
PORTVERSION=	0.92
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mons@cpan.org
COMMENT=	Relative use lib in absolute way

PERL_CONFIGURE=	yes

MAN3=		lib::abs.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500808
BUILD_DEPENDS+=	p5-PathTools>=3.12:${PORTSDIR}/devel/p5-PathTools
RUN_DEPENDS+=	p5-PathTools>=3.12:${PORTSDIR}/devel/p5-PathTools
.endif

.include <bsd.port.post.mk>
