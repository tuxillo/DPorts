# New ports collection makefile for:	p5-IO-TieCombine
# Date created:		2008-11-23
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-IO-TieCombine/Makefile,v 1.5 2012/11/17 05:56:19 svnexp Exp $
#

PORTNAME=	IO-TieCombine
PORTVERSION=	1.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Perl 5 module to produce tied separate but combined variables

PERL_CONFIGURE=	yes

MAN3=	IO::TieCombine.3 \
	IO::TieCombine::Handle.3 \
	IO::TieCombine::Scalar.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
