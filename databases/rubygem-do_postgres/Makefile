# New ports collection makefile for: rubygem-do_postgres
# Date created:		28 April 2009
# Whom:		Espen Volden aka voldern <voldern@hoeggen.net>
#
# $FreeBSD: ports/databases/rubygem-do_postgres/Makefile,v 1.14 2012/11/17 05:55:24 svnexp Exp $
#

PORTNAME=	do_postgres
PORTVERSION=	0.10.8
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	voldern@hoeggen.net
COMMENT=	Ruby DataObjects driver for PostgreSQL

RUN_DEPENDS=	rubygem-data_objects>=0.10.8:${PORTSDIR}/databases/rubygem-data_objects

USE_PGSQL=	yes

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
