# New ports collection makefile for:	www/p5-URI-Sequin
# Date created:				25 April 2001
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/www/p5-URI-Sequin/Makefile,v 1.12 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	URI-Sequin
PORTVERSION=	1.2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SARGIE
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Extract information from the URLs of Search-Engines

PERL_CONFIGURE=	yes

MAN3=		URI::Sequin.3

.ifndef (NOPORTDOCS)
post-install:
	@${MKDIR} ${PREFIX}/${SITE_PERL_REL}/URI/Sequin/examples
	@${INSTALL_DATA} ${WRKSRC}/example.pl ${WRKSRC}/ref?.log \
		${PREFIX}/${SITE_PERL_REL}/URI/Sequin/examples
.endif

.include <bsd.port.mk>
