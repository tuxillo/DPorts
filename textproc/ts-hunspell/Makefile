# New ports collection makefile for:	ts-hunspell
# Date created:		2011-07-20
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/textproc/ts-hunspell/Makefile,v 1.6 2012/11/17 06:02:23 svnexp Exp $
#

PORTNAME=	hunspell
PORTVERSION=	20110323
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_MOZILLA_EXTENDED}
MASTER_SITE_SUBDIR=	addons/46611
PKGNAMEPREFIX=	ts-
DISTNAME=	tsonga_spell_checker-${PORTVERSION}-tb+sm+fx+fn
EXTRACT_SUFX=	.xpi
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Tsonga hunspell dictionaries

USE_ZIP=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/dictionaries

PLIST_FILES=	%%DATADIR%%/ts_ZA.aff \
		%%DATADIR%%/ts_ZA.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/ts-ZA.aff ${DATADIR}/ts_ZA.aff
	${INSTALL_DATA} ${WRKSRC}/ts-ZA.dic ${DATADIR}/ts_ZA.dic

.include <bsd.port.mk>
