# ex:ts=8
# Ports collection makefile for:	DBD::AnyData
# Date created:			Jun 29, 2007
# Whom:				ijlioa
#
# $FreeBSD: ports/databases/p5-DBD-AnyData/Makefile,v 1.6 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	DBD-AnyData
PORTVERSION=	0.110
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI access to XML, CSV, and other formats

BUILD_DEPENDS=	p5-AnyData>=0.07:${PORTSDIR}/devel/p5-AnyData \
		p5-DBI>1:${PORTSDIR}/databases/p5-DBI \
		p5-SQL-Statement>1:${PORTSDIR}/databases/p5-SQL-Statement
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBD::AnyData.3

.include <bsd.port.mk>
