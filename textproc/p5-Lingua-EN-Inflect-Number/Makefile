# New ports collection makefile for:	p5-Lingua-EN-Inflect-Number
# Date created:				Apr 4 2004
# Whom:					Lars Thegler <lars@thegler.dk>
#
# $FreeBSD: ports/textproc/p5-Lingua-EN-Inflect-Number/Makefile,v 1.7 2012/11/17 06:02:05 svnexp Exp $

PORTNAME=	Lingua-EN-Inflect-Number
PORTVERSION=	1.1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Force number of words to singular or plural

BUILD_DEPENDS=	p5-Lingua-EN-Inflect>=0:${PORTSDIR}/textproc/p5-Lingua-EN-Inflect
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Lingua::EN::Inflect::Number.3

.include <bsd.port.mk>
