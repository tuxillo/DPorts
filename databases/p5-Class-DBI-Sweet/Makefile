# New ports collection makefile for:	Class-DBI-Sweet
# Date created:		6 Jul 2005
# Whom:			Lars Balker Rasmussen <lbr@FreeBSD.org
#
# $FreeBSD: ports/databases/p5-Class-DBI-Sweet/Makefile,v 1.16 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	Class-DBI-Sweet
PORTVERSION=	0.11
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extra sweet features for Class::DBI

BUILD_DEPENDS=	p5-Class-DBI>=3.0.12:${PORTSDIR}/databases/p5-Class-DBI \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Data-Page>=0:${PORTSDIR}/databases/p5-Data-Page \
		p5-SQL-Abstract>=1.55:${PORTSDIR}/databases/p5-SQL-Abstract
RUN_DEPENDS=	p5-Class-DBI>=3.0.12:${PORTSDIR}/databases/p5-Class-DBI \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Data-Page>=0:${PORTSDIR}/databases/p5-Data-Page \
		p5-SQL-Abstract>=1.55:${PORTSDIR}/databases/p5-SQL-Abstract

PERL_MODBUILD=	yes

MAN3=		Class::DBI::Sweet.3 Class::DBI::Sweet::Topping.3

post-patch:
	@${REINPLACE_CMD} -e '/DBD::SQLite/d' ${WRKSRC}/Build.PL

.include <bsd.port.mk>
