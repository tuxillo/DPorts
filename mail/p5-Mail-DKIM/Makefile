# ports collection makefile for:	p5-Mail-DKIM
# Date created:				16 July 2006
# Whom:					Yoshisato YANAGISAWA
#
# $FreeBSD: ports/mail/p5-Mail-DKIM/Makefile,v 1.29 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	Mail-DKIM
PORTVERSION=	0.39
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	yanagisawa@csg.is.titech.ac.jp
COMMENT=	Perl5 module to process and/or create DKIM email

RUN_DEPENDS=	p5-Crypt-OpenSSL-RSA>=0:${PORTSDIR}/security/p5-Crypt-OpenSSL-RSA \
		p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Mail-Tools>=0:${PORTSDIR}/mail/p5-Mail-Tools
BUILD_DEPENDS:=	${RUN_DEPENDS}

MASTER_SITE_BACKUP+=	http://jason.long.name/dkimproxy/

PERL_CONFIGURE=	yes

MAN3=		Mail::DKIM.3 \
		Mail::DKIM::Algorithm::Base.3 \
		Mail::DKIM::AuthorDomainPolicy.3 \
		Mail::DKIM::Canonicalization::Base.3 \
		Mail::DKIM::Canonicalization::DkimCommon.3 \
		Mail::DKIM::DkimPolicy.3 \
		Mail::DKIM::DkPolicy.3 \
    		Mail::DKIM::DkSignature.3 \
		Mail::DKIM::Policy.3 \
		Mail::DKIM::PrivateKey.3 \
		Mail::DKIM::PublicKey.3 \
		Mail::DKIM::Signature.3 \
		Mail::DKIM::Signer.3 \
		Mail::DKIM::SignerPolicy.3 \
		Mail::DKIM::Verifier.3 \
		Mail::DKIM::TextWrap.3

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/dkim*.pl ${PREFIX}/bin

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501000
RUN_DEPENDS+=	p5-Digest-SHA>=5.47:${PORTSDIR}/security/p5-Digest-SHA
BUILD_DEPENDS+=	p5-Digest-SHA>=5.47:${PORTSDIR}/security/p5-Digest-SHA
.endif

.include <bsd.port.post.mk>
