# New ports collection makefile for:	mail/p5-URI-imaps
# Date created:				30 December 2004
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/mail/p5-URI-imaps/Makefile,v 1.6 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	URI-imaps
PORTVERSION=	1.02
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ALEXM
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Support IMAPS URI

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	URI::imaps.3

.include <bsd.port.mk>
