# New ports collection makefile for:	p5-Digest-MD5-M4p
# Date created:        27 June 2004
# Whom:                Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/security/p5-Digest-MD5-M4p/Makefile,v 1.6 2012/11/17 06:01:12 svnexp Exp $
#

PORTNAME=	Digest-MD5-M4p
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Perl interface to a variant of the MD5 algorithm

PERL_CONFIGURE=	yes

MAN3=		Digest::MD5::M4p.3

post-extract:
	@${PERL} -pi -e 's/\r//g' ${WRKSRC}/M4p.xs

.include <bsd.port.mk>
