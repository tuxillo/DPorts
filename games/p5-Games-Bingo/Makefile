# New ports collection makefile for:	p5-Games-Bingo
# Date created:				14. August 2003
# Whom:					Lars Thegler <lars@thegler.dk>
#
# $FreeBSD: ports/games/p5-Games-Bingo/Makefile,v 1.10 2012/11/17 05:57:48 svnexp Exp $
#

PORTNAME=	Games-Bingo
PORTVERSION=	0.15
CATEGORIES=	games perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A bingo game Perl implementation

PERL_MODBUILD=	yes

MAN1=		bingo.pl.1
MAN3=		Games::Bingo.3 \
		Games::Bingo::Card.3 \
		Games::Bingo::Column.3 \
		Games::Bingo::ColumnCollection.3 \
		Games::Bingo::Constants.3

.include <bsd.port.pre.mk>

post-patch:
	@${PERL} -pi -e '$$_="" if m|Test::|' ${WRKSRC}/Build.PL

.include <bsd.port.post.mk>
