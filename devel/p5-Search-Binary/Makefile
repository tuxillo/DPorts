# New ports collection makefile for:	devel/p5-Search-Binary
# Date created:				03 January 2001
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/devel/p5-Search-Binary/Makefile,v 1.7 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	Search-Binary
PORTVERSION=	0.95
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl module that implements a generic binary search algorithm

PERL_CONFIGURE=	yes

MAN3=		Search::Binary.3

pre-patch:
	@${PERL} -pi -e 's|Seach|Search|' ${WRKSRC}/Binary.pm

.include <bsd.port.mk>
