# New ports collection makefile for:	XML-Driver-HTML
# Date created:	   22 October 2005
# Whom:		   Dmitry Morozovsky <marck@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-XML-Driver-HTML/Makefile,v 1.7 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Driver-HTML
PORTVERSION=	0.06
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl SAX Driver for non wellformed HTML

BUILD_DEPENDS=	p5-XML-TreeBuilder>=0:${PORTSDIR}/textproc/p5-XML-TreeBuilder \
		p5-XML-Handler-YAWriter>=0:${PORTSDIR}/textproc/p5-XML-Handler-YAWriter
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		html2xhtml.1
MAN3=		XML::Driver::HTML.3

.include <bsd.port.mk>
