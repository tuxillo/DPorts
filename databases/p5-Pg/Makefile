# New ports collection makefile for:	p5-Pg
# Date created:				October 19th 1996
# Whom:	      				James FitzGibbon <jfitz@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-Pg/Makefile,v 1.47 2012/11/17 05:55:16 svnexp Exp $
#

PORTNAME=	Pg
PORTVERSION=	2.1.1
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_PGSQL}
MASTER_SITE_SUBDIR=	projects/gborg/pgperl/stable
PKGNAMEPREFIX=	p5-
DIST_SUBDIR=	postgresql

MAINTAINER=	perl@FreeBSD.org
COMMENT=	An interface for using perl5 to access PostgreSQL databases

USE_PGSQL=	yes
PERL_CONFIGURE=	yes

MAN3=		Pg.3

CONFIGURE_ENV=	POSTGRES_INCLUDE=${LOCALBASE}/include POSTGRES_LIB=${LOCALBASE}/lib

.include <bsd.port.mk>
