# New ports collection makefile for:	p5-Marpa
# Date created:		2011-10-25
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/lang/p5-Marpa/Makefile,v 1.6 2012/12/16 06:16:56 svnexp Exp $
#

PORTNAME=	Marpa
PORTVERSION=	0.208
CATEGORIES=	lang textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JKEGL
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION}000

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse any Language You Can Describe in BNF

BUILD_DEPENDS=	p5-HTML-Parser>=3.64:${PORTSDIR}/www/p5-HTML-Parser \
		p5-PPI>=1.206:${PORTSDIR}/textproc/p5-PPI
RUN_DEPENDS=	p5-HTML-Parser>=3.64:${PORTSDIR}/www/p5-HTML-Parser \
		p5-PPI>=1.206:${PORTSDIR}/textproc/p5-PPI

PERL_CONFIGURE=	yes

MAN3=		Marpa::Advanced::Algorithm.3 \
		Marpa::Advanced::Bibliography.3 \
		Marpa::Advanced::Implementation.3 \
		Marpa::Advanced::Models.3 \
		Marpa::Deprecated::Bocage.3 \
		Marpa::Deprecated::Evaluator.3 \
		Marpa::Deprecated::Implementation.3 \
		Marpa::Grammar.3 \
		Marpa::Marpa.3 \
		Marpa::Parse_Terms.3 \
		Marpa::Recognizer.3 \
		Marpa::Semantics.3 \
		Marpa::Support.3 \
		Marpa::Tracing.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501200
TEST_DEPENDS+=	p5-Test-Simple>=0.94:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
