# New ports collection makefile for:	xf86-video-rdc
# Date created:				14 April 2010
# Whom:					stas
#
# $FreeBSD: ports/x11-drivers/xf86-video-rdc/Makefile,v 1.9 2012/11/17 06:03:25 svnexp Exp $
#

PORTNAME=	xf86-video-rdc
PORTVERSION=	0.9
CATEGORIES=	x11-drivers
MASTER_SITES=	http://www.SpringDaemons.com/stas/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X.Org RDC display driver

#USE_GL=		gl
XORG_CAT=	driver
USE_XORG=	xvmc xf86driproto xextproto x11 glproto

do-install:
	${MKDIR} ${PREFIX}/lib/xorg/modules/drivers
	${INSTALL_PROGRAM} ${WRKSRC}/src/.libs/rdc_drv.so \
	    ${PREFIX}/lib/xorg/modules/drivers/rdc_drv.so

.include <bsd.port.mk>
