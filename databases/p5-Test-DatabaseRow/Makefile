# New ports collection makefile for: 	p5-Test-DatabaseRow
# Date created:				June 3 2006
# Whom:					Joshua D. Abraham <jabra@ccs.neu.edu>
#
# $FreeBSD: ports/databases/p5-Test-DatabaseRow/Makefile,v 1.10 2012/11/17 05:55:17 svnexp Exp $
#

PORTNAME=	Test-DatabaseRow
PORTVERSION=	2.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Simple database tests

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::DatabaseRow.3 \
		Test::DatabaseRow::Result.3 \
		Test::DatabaseRow::Object.3

.include <bsd.port.mk>
