# New ports collection makefile for:	XML::Directory
# Date created:		4 Sep 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/p5-XML-Directory/Makefile,v 1.14 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Directory
PORTVERSION=	1.00
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Returns a content of directory as XML

BUILD_DEPENDS=	p5-RDF-Notation3>=0:${PORTSDIR}/textproc/p5-RDF-Notation3 \
		p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::Directory.3 XML::Directory::Apache.3 \
		XML::Directory::SAX.3 XML::Directory::String.3

.include <bsd.port.mk>
