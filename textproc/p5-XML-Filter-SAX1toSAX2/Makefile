# New ports collection makefile for:	XML-Filter-SAX1toSAX2
# Date created:	   02 June 2002
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/p5-XML-Filter-SAX1toSAX2/Makefile,v 1.9 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Filter-SAX1toSAX2
PORTVERSION=	0.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert SAX1 events to SAX2

BUILD_DEPENDS=	p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX \
		p5-XML-SAX-Writer>=0:${PORTSDIR}/textproc/p5-XML-SAX-Writer
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::Filter::SAX1toSAX2.3 XML::Filter::SAX2toSAX1.3

.include <bsd.port.mk>
