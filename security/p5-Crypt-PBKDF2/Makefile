# New ports collection makefile for:	p5-Crypt-PBKDF2
# Date created:		2010-05-23
# Whom:			Victor Popov <v.a.popov@gmail.com>
#
# $FreeBSD: ports/security/p5-Crypt-PBKDF2/Makefile,v 1.8 2012/11/17 06:01:11 svnexp Exp $
#

PORTNAME=	Crypt-PBKDF2
PORTVERSION=	0.121930
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ARODLAND
PKGNAMEPREFIX=	p5-

MAINTAINER=	v.a.popov@gmail.com
COMMENT=	The PBKDF2 password hashing algorithm

RUN_DEPENDS=	p5-Digest-HMAC>=1.01:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-Moose>=1:${PORTSDIR}/devel/p5-Moose \
		p5-Method-Signatures-Simple>=0:${PORTSDIR}/devel/p5-Method-Signatures-Simple \
		p5-Try-Tiny>=0.04:${PORTSDIR}/lang/p5-Try-Tiny \
		p5-namespace-autoclean>=0:${PORTSDIR}/devel/p5-namespace-autoclean
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Crypt::PBKDF2.3 \
		Crypt::PBKDF2::Hash.3 \
		Crypt::PBKDF2::Hash::DigestHMAC.3 \
		Crypt::PBKDF2::Hash::HMACSHA1.3 \
		Crypt::PBKDF2::Hash::HMACSHA2.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501000
RUN_DEPENDS+=	p5-Digest-SHA>=0:${PORTSDIR}/security/p5-Digest-SHA
.endif

.if ${PERL_LEVEL} < 501001
RUN_DEPENDS+=	p5-Digest>=1.16:${PORTSDIR}/security/p5-Digest
.endif

.include <bsd.port.post.mk>
