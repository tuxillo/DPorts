# New ports collection makefile for:	xtrlock
# Date created:		18 May 2004
# Whom:			Alexey Mikhailov <karma@ez.pereslavl.ru>
#
# $FreeBSD: ports/x11/xtrlock/Makefile,v 1.8 2012/11/17 06:03:23 svnexp Exp $
#

PORTNAME=	xtrlock
PORTVERSION=	2.0.14
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_DEBIAN}
MASTER_SITE_SUBDIR=	pool/main/x/xtrlock/
DISTNAME=	${PORTNAME}_2.0-${PORTVERSION:E}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X Transparent Lock

LICENSE=	GPLv2 # or higher
LICENSE_FILE=	${WRKSRC}/debian/copyright

USE_XORG=	x11

WRKSRC=		${WRKDIR}/${PORTNAME}-2.0
MAKEFILE=	${FILESDIR}/Makefile

MAN1=		xtrlock.1
PLIST_FILES=	bin/xtrlock

.include <bsd.port.mk>
