# New ports collection makefile for:	p5-XML-Feed-Deduper
# Date created:		2009-04-26
# Whom:			TERAMOTO Masahiro <markun@onohara.to>
#
# $FreeBSD: ports/textproc/p5-XML-Feed-Deduper/Makefile,v 1.7 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Feed-Deduper
PORTVERSION=	0.05
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Remove duplicated entries from feed

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Any-Moose>=0.1:${PORTSDIR}/devel/p5-Any-Moose \
		p5-XML-Feed>=0.41:${PORTSDIR}/textproc/p5-XML-Feed
RUN_DEPENDS=	p5-Any-Moose>=0.1:${PORTSDIR}/devel/p5-Any-Moose \
		p5-XML-Feed>=0.41:${PORTSDIR}/textproc/p5-XML-Feed

PERL_MODBUILD=	yes

MAN3=		XML::Feed::Deduper.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.98:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
