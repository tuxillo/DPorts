# New ports collection makefile for:	ve-hunspell
# Date created:		2011-07-20
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/textproc/ve-hunspell/Makefile,v 1.6 2012/11/17 06:02:24 svnexp Exp $
#

PORTNAME=	hunspell
PORTVERSION=	20110323
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_MOZILLA_EXTENDED}
MASTER_SITE_SUBDIR=	addons/46601
PKGNAMEPREFIX=	ve-
DISTNAME=	venda_spell_checker-${PORTVERSION}-tb+fn+fx+sm
EXTRACT_SUFX=	.xpi
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Venda hunspell dictionaries

USE_ZIP=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/dictionaries

PLIST_FILES=	%%DATADIR%%/ve.aff \
		%%DATADIR%%/ve.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/ve-ZA.aff ${DATADIR}/ve.aff
	${INSTALL_DATA} ${WRKSRC}/ve-ZA.dic ${DATADIR}/ve.dic

.include <bsd.port.mk>
