# New ports collection makefile for:	p5-Convert-Cyrillic
# Date created:				07 May 2009
# Whom:					Sergey Kandaurov <pluknet@gmail.com>
#
# $FreeBSD: ports/russian/p5-Convert-Cyrillic/Makefile,v 1.5 2012/11/17 06:00:56 svnexp Exp $
#

PORTNAME=	Convert-Cyrillic
PORTVERSION=	1.05
CATEGORIES=	russian converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	cyrillic-${PORTVERSION}

MAINTAINER=	pluknet@gmail.com
COMMENT=	Routines for converting from one Cyrillic charset to another

BUILD_DEPENDS=	p5-Unicode-Map8>=0:${PORTSDIR}/converters/p5-Unicode-Map8
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Convert::Cyrillic.3 \
		Lingua::DetectCharset.3

.include <bsd.port.mk>
