# New ports collection makefile for:	mail/p5-URI-imap
# Date created:				30 December 2004
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/mail/p5-URI-imap/Makefile,v 1.5 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	URI-imap
PORTVERSION=	1.01
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	URI::imap - Support IMAP URI

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	URI::imap.3

.include <bsd.port.mk>
