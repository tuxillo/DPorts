# New ports collection makefile for:	p5-Authen-SASL
# Date created:				January 3rd 2003
# Whom:	      				Blaz Zupan <blaz@si.FreeBSD.org>
#
# $FreeBSD: ports/security/p5-Authen-SASL/Makefile,v 1.28 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Authen-SASL
PORTVERSION=	2.16
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for SASL authentication

RUN_DEPENDS=	p5-Digest-HMAC>0:${PORTSDIR}/security/p5-Digest-HMAC
BUILD_DEPENDS:=	${RUN_DEPENDS}

OPTIONS_DEFINE=	KERBEROS
OPTIONS_DEFAULT=	KERBEROS

PERL_CONFIGURE=	yes
CONFIGURE_ENV+=	AUTOMATED_TESTING=yes

MAN3=		Authen::SASL.3 \
		Authen::SASL::Perl.3 \
		Authen::SASL::Perl::ANONYMOUS.3 \
		Authen::SASL::Perl::CRAM_MD5.3 \
		Authen::SASL::Perl::DIGEST_MD5.3 \
		Authen::SASL::Perl::EXTERNAL.3 \
		Authen::SASL::Perl::GSSAPI.3 \
		Authen::SASL::Perl::LOGIN.3 \
		Authen::SASL::Perl::PLAIN.3

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MKERBEROS}
RUN_DEPENDS+=	p5-GSSAPI>0:${PORTSDIR}/security/p5-GSSAPI
.endif

.include <bsd.port.mk>
