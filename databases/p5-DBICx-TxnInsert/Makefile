# New ports collection makefile for:	Log-Dispatch-Configurator-YAML
# Date created:				28 May 2008
# Whom:					Andrey Kostenko <andrey@kostenko.name>
#
# $FreeBSD: ports/databases/p5-DBICx-TxnInsert/Makefile,v 1.6 2012/11/17 05:55:14 svnexp Exp $
#

PORTNAME=	DBICx-TxnInsert
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VOVKASM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Wrap all inserts into transaction

BUILD_DEPENDS=	p5-DBIx-Class>=0:${PORTSDIR}/databases/p5-DBIx-Class \
		p5-DBD-Mock>=0:${PORTSDIR}/databases/p5-DBD-Mock
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Compile>=0.08:${PORTSDIR}/devel/p5-Test-Compile \
		p5-Test-Pod>=1.22:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		DBICx::TxnInsert.3

.include <bsd.port.mk>
