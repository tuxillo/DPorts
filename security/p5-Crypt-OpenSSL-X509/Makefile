# New ports collection makefile for:    p5-Crypt-OpenSSL-X509
# Date created:				2007/06/09
# Whom:					kftseng@iyard.org
#
# $FreeBSD: ports/security/p5-Crypt-OpenSSL-X509/Makefile,v 1.10 2012/11/17 06:01:11 svnexp Exp $
#

PORTNAME=	Crypt-OpenSSL-X509
PORTVERSION=	1.8.2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}00.${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for OpenSSL X509 API

PERL_CONFIGURE=	yes

MAN3=		Crypt::OpenSSL::X509.3

post-patch:
	@${REINPLACE_CMD} -e '/^cc_optimize_flags/ s| -Werror||' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
