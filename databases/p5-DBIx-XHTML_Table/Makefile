# New ports collection makefile for:	DBIx::XHTML_Table
# Date created:				31 Dec 2001
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/databases/p5-DBIx-XHTML_Table/Makefile,v 1.16 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-XHTML_Table
PORTVERSION=	1.36
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create XHTML tables from SQL queries

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

PERL_CONFIGURE=	yes

MAN3=		DBIx::XHTML_Table.3

.include <bsd.port.mk>
