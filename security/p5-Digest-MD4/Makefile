# ex:ts=8
# Ports collection makefile for:	p5-Digest-MD4
# Date created:			Feb 9, 2003
# Whom:				ijliao
#
# $FreeBSD: ports/security/p5-Digest-MD4/Makefile,v 1.11 2012/11/17 06:01:12 svnexp Exp $
#

PORTNAME=	Digest-MD4
PORTVERSION=	1.5
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the MD4 message digest algorithm

PERL_CONFIGURE=	yes

MAN3=		Digest::MD4.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes rfc1320.txt

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
