# New ports collection makefile for:	p5-Encode-IMAPUTF7
# Date created:				Dec 18, 2009
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/converters/p5-Encode-IMAPUTF7/Makefile,v 1.5 2012/11/17 05:55:03 svnexp Exp $
#

PORTNAME=	Encode-IMAPUTF7
PORTVERSION=	1.05
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Modification of UTF-7 encoding for IMAP

BUILD_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Encode::IMAPUTF7.3

.include <bsd.port.mk>
