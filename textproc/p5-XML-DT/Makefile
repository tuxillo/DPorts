# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: ports/textproc/p5-XML-DT/Makefile,v 1.21 2012/11/17 06:02:11 svnexp Exp $

PORTNAME=	XML-DT
PORTVERSION=	0.62
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl module for down translation of XML to strings

BUILD_DEPENDS=	p5-XML-LibXML>=1.54:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-libwww>=1.35:${PORTSDIR}/www/p5-libwww \
		p5-XML-DTDParser>=2.00:${PORTSDIR}/textproc/p5-XML-DTDParser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		mkdtskel.1 mkdtdskel.1 mkxmltype.1
MAN3=		XML::DT.3

.include <bsd.port.mk>
