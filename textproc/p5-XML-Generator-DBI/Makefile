# New ports collection makefile for:	XML::Generator::DBI
# Date created:		28 Jan 2002
# Whom:			Sergey Skvortsov <skv@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-XML-Generator-DBI/Makefile,v 1.9 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Generator-DBI
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	textproc databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate SAX events from SQL queries

RUN_DEPENDS=	p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::Generator::DBI.3

.include <bsd.port.mk>
