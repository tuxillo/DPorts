# New ports collection makefile for:	bg-hyphen
# Date created:		2011-07-21
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/textproc/bg-hyphen/Makefile,v 1.5 2012/11/17 06:01:52 svnexp Exp $
#

PORTNAME=	hyphen
PORTVERSION=	4.3
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/bgoffice/OpenOffice.org%20Hyphenation%20BG/${PORTVERSION}/
PKGNAMEPREFIX=	bg-
DISTNAME=	OOo-hyph-bg-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Bulgarian hyphenation rules

LICENSE=	GPLv2 LGPL21 MPL
LICENSE_COMB=	dual

USE_ZIP=	yes
NO_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/hyph_bg_BG.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_bg_BG.dic ${DATADIR}/

.include <bsd.port.mk>
