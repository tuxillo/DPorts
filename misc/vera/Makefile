# New ports collection makefile for:	V.E.R.A.
# Date created:		9 March 1999
# Whom:			Dima Sivachenko	<dima@chg.ru>
#
# $FreeBSD: ports/misc/vera/Makefile,v 1.14 2012/11/17 05:59:46 svnexp Exp $
#

PORTNAME=	vera
PORTVERSION=	1.17
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	vera

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Virtual Entity of Relevant Acronyms

INFO=		vera
LICENSE=	GFDL

do-build:
	@ cd ${WRKSRC} && makeinfo --no-split vera.texi

do-install:
	@ ${INSTALL_DATA} ${WRKSRC}/vera.info ${PREFIX}/info

.include <bsd.port.mk>
