# New ports collection makefile for:	p5-XML-LibXML-PrettyPrint
# Date created:		2011-10-21
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-XML-LibXML-PrettyPrint/Makefile,v 1.7 2012/12/16 06:16:59 svnexp Exp $
#

PORTNAME=	XML-LibXML-PrettyPrint
PORTVERSION=	0.003
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add pleasant whitespace to a DOM tree

BUILD_DEPENDS=	p5-Pragmatic>=0:${PORTSDIR}/devel/p5-Pragmatic \
		p5-XML-LibXML>=1.62:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense
RUN_DEPENDS=	p5-Pragmatic>=0:${PORTSDIR}/devel/p5-Pragmatic \
		p5-XML-LibXML>=1.62:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense

TEST_DEPENDS=	p5-Test-Warn>=0.20:${PORTSDIR}/devel/p5-Test-Warn

PERL_CONFIGURE=	yes

MAN3=		XML::LibXML::PrettyPrint.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
BUILD_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
RUN_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
.endif

.include <bsd.port.post.mk>
