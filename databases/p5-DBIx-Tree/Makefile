# New ports collection makefile for:	p5-DBIx-Tree
# Date created:				January 29th 2003
# Whom:	      				Philip M. Gollucci <philip@p6m7g8.com>
#
# $FreeBSD: ports/databases/p5-DBIx-Tree/Makefile,v 1.14 2012/12/10 09:51:25 svnexp Exp $
#

PORTNAME=	DBIx-Tree
PORTVERSION=	1.96
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for generating a tree from a self-referential table

BUILD_DEPENDS=	p5-DBI>=1.622:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=1.622:${PORTSDIR}/databases/p5-DBI
TEST_DEPENDS=	p5-DBD-SQLite>=1.37:${PORTSDIR}/databases/p5-DBD-SQLite

MAKE_JOBS_SAFE=  yes

PERL_CONFIGURE=	yes

MAN3=		DBIx::Tree.3

.include <bsd.port.mk>
