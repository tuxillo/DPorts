# New ports collection makefile for:    p5-Crypt-DES_EDE3
# Date created:				2002/03/14
# Whom:					jesper
#
# $FreeBSD: ports/security/p5-Crypt-DES_EDE3/Makefile,v 1.11 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Crypt-DES_EDE3
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to a implementing 3-DES EDE encryption and decryption

BUILD_DEPENDS=	p5-Crypt-DES>=0:${PORTSDIR}/security/p5-Crypt-DES
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Crypt::DES_EDE3.3

.include <bsd.port.mk>
