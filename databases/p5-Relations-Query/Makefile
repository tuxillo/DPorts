# Created by: Timur I. Bakeyev <bat@cpan.org>
# $FreeBSD: ports/databases/p5-Relations-Query/Makefile,v 1.7 2012/11/17 05:55:16 svnexp Exp $

PORTNAME=	Relations-Query
PORTVERSION=	0.93
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Object for building queries with DBI/DBD::mysql

BUILD_DEPENDS=	p5-Relations>=0:${PORTSDIR}/databases/p5-Relations
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Relations::Query.3

.include <bsd.port.mk>
