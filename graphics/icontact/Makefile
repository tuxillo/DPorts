# New ports collection makefile for:	icontact
# Date created:			Apr 16, 2001
# Whom:				Mark Pulford <mark@kyne.com.au>
#
# $FreeBSD: ports/graphics/icontact/Makefile,v 1.11 2012/11/17 05:58:09 svnexp Exp $
#

PORTNAME=	icontact
PORTVERSION=	1.5
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	http://www.panix.com/~mbh/icontact/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Combines multiples images to create a single customisable image

RUN_DEPENDS=	${LOCALBASE}/bin/ppmmake:${PORTSDIR}/graphics/netpbm \
		${LOCALBASE}/bin/cjpeg:${PORTSDIR}/graphics/jpeg

MAN1=		icontact.1 xvtoppm.1

post-patch:
	${REINPLACE_CMD} "s|CC=cc|CC=${CC}|g; s|CFLAGS=-O|CFLAGS=${CFLAGS}|g" \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/icontact ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/xvtoppm ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/icontact.1 ${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/xvtoppm.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
