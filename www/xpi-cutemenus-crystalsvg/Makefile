# New ports collection makefile for:	xpi-cutemenus-crystalsvg
# Date created:			4 May 2006
# Whom:				Lapo Luchini <lapo@lapo.it>
#
# $FreeBSD: ports/www/xpi-cutemenus-crystalsvg/Makefile,v 1.9 2012/11/17 06:03:11 svnexp Exp $
#

PORTNAME=	cutemenus-crystalsvg
PORTVERSION=	1.9.3
DISTVERSIONSUFFIX=	-fx+tb+sb+sm
CATEGORIES=	www

MAINTAINER=	lapo@lapo.it
COMMENT=	Adds cute icons to menus

XPI_DISTNAME=	cutemenus_-_crystal_svg
XPI_NUM=	1330
XPI_ID=		{63df8e21-711c-4074-a257-b065cadc28d8}
XPI_FILES=	chrome/cutemenus.jar chrome.manifest components/cutemenus.js\
		defaults/preferences/cutemenus.js install.js install.rdf
XPI_DIRS=	chrome components defaults/preferences defaults

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
