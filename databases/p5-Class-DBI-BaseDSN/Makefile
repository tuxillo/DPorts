# New ports collection makefile for:	p5-Class-DBI-BaseDSN
# Date created:	   21 july 2003
# Whom:		   mat
#
# $FreeBSD: ports/databases/p5-Class-DBI-BaseDSN/Makefile,v 1.9 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	Class-DBI-BaseDSN
PORTVERSION=	1.22
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DSN sensitive base class

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI

PERL_MODBUILD=	yes

MAN3=		Class::DBI::BaseDSN.3

.include <bsd.port.mk>
