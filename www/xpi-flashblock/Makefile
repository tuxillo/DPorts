# Created by:	Simon Olofsson
# $FreeBSD: ports/www/xpi-flashblock/Makefile,v 1.20 2012/12/01 14:51:43 svnexp Exp $

PORTNAME=	flashblock
PORTVERSION=	1.5.15.1
DISTVERSIONSUFFIX=	-fx
PORTREVISION=	2
CATEGORIES=	www

MAINTAINER=	bar@FreeBSD.org
COMMENT=	Replaces Flash objects with a button you can click to view them

USE_XPI=	*firefox*

XPI_ID=		{3d7eb24f-2740-49df-8937-200b1cc08f8a}
XPI_NUM=	433
XPI_FILES=	chrome/flashblock.jar chrome.manifest defaults/preferences/flashblock.js install.rdf
XPI_DIRS=	chrome defaults/preferences defaults

post-patch:
	@${REINPLACE_CMD} -e 's|<em:maxVersion>8\.0<|<em:maxVersion>99.*<|' \
	    ${WRKSRC}/install.rdf

pre-install:
	@${RM} -f ${WRKSRC}/install.rdf.bak

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
