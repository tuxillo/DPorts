# New ports collection makefile for:	XML-SAXDriver-Excel
# Date created:	   30 May 2002
# Whom:		   chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD: ports/textproc/p5-XML-SAXDriver-Excel/Makefile,v 1.6 2012/11/17 06:02:13 svnexp Exp $
#

PORTNAME=	XML-SAXDriver-Excel
PORTVERSION=	0.06
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl SAX driver for converting Excel files to XML

BUILD_DEPENDS=	\
	p5-Spreadsheet-ParseExcel>=0.2603:${PORTSDIR}/textproc/p5-Spreadsheet-ParseExcel \
	p5-XML-SAX>=0.14:${PORTSDIR}/textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
USE_DOS2UNIX=	yes

MAN3=		XML::SAXDriver::Excel.3

.include <bsd.port.mk>
