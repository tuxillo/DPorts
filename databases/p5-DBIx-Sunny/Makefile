# New ports collection makefile for:	DBIx::Sunny
# Date created:				18 October 2011
# Whom:					Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-DBIx-Sunny/Makefile,v 1.11 2012/12/17 08:59:15 svnexp Exp $
#

PORTNAME=	DBIx-Sunny
PORTVERSION=	0.21
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A simple DBI wrapper supports SQLite and MySQL

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=1.615:${PORTSDIR}/databases/p5-DBI \
		p5-Class-Accessor-Lite>=0.05:${PORTSDIR}/devel/p5-Class-Accessor-Lite \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-DBIx-TransactionManager>=0:${PORTSDIR}/databases/p5-DBIx-TransactionManager \
		p5-Data-Validator>=0:${PORTSDIR}/devel/p5-Data-Validator
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=1.31:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-Test-Requires>=0:${PORTSDIR}/devel/p5-Test-Requires \
    		p5-Capture-Tiny>=0:${PORTSDIR}/devel/p5-Capture-Tiny

PERL_MODBUILD=	yes

MAN3=		DBIx::Sunny.3 \
		DBIx::Sunny::Schema.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
