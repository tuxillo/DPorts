# New ports collection makefile for:	XML-TokeParser
# Date created:		10 April 2010
# Whom:			Mike Bristow <mike@urgle.com>
#
# $FreeBSD: ports/textproc/p5-XML-Descent/Makefile,v 1.3 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Descent
PORTVERSION=	1.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/XML
PKGNAMEPREFIX=	p5-

MAINTAINER=	mike@urgle.com
COMMENT=	Recursive descent XML parsing

BUILD_DEPENDS=	p5-XML-TokeParser>=0:${PORTSDIR}/textproc/p5-XML-TokeParser \
		p5-Test-Differences>=0:${PORTSDIR}/devel/p5-Test-Differences
RUN_DEPENDS=	p5-XML-TokeParser>=0:${PORTSDIR}/textproc/p5-XML-TokeParser

PERL_CONFIGURE=	yes

MAN3=		XML::Descent.3

.include <bsd.port.mk>
