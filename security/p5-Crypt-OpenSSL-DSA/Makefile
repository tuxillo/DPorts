# Created by: nork@FreeBSD.org
# $FreeBSD: ports/security/p5-Crypt-OpenSSL-DSA/Makefile,v 1.14 2012/11/19 10:40:52 svnexp Exp $

PORTNAME=	Crypt-OpenSSL-DSA
PORTVERSION=	0.14
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to DSA signature verification using OpenSSL

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		Crypt::OpenSSL::DSA.3 Crypt::OpenSSL::DSA::Signature.3

post-patch:
	@${RM} ${WRKSRC}/lib/Crypt/OpenSSL/DSA.pm.orig

.include <bsd.port.mk>
