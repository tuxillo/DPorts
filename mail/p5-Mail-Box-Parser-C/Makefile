# New ports collection makefile for:	Mail-Box-Parser-C
# Date created:	   08 August 2003
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/mail/p5-Mail-Box-Parser-C/Makefile,v 1.10 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	Mail-Box-Parser-C
PORTVERSION=	3.006
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parsing folders for Mail::Box with C routines

BUILD_DEPENDS=	p5-Mail-Box>=0:${PORTSDIR}/mail/p5-Mail-Box
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Mail::Box::Parser::C.3

.include <bsd.port.mk>
