# New ports collection makefile for:    tclock
# Date created:		So   7 Feb 1999 20:50:43 MET
# Whom:			Lars Koeller <lkoeller@cc.fh-lippe.de>
#
# $FreeBSD: ports/x11-clocks/tclock/Makefile,v 1.16 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	tclock
PORTVERSION=	1.0.1
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	http://www.linta.de/distfiles/ \
		ftp://ftp.uni-potsdam.de/pub/X11/tools/clocks/
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	aehlig@linta.de
COMMENT=	Transparent analog clock for x11

NO_WRKSUBDIR=	yes
USE_IMAKE=	yes
USE_XORG=	x11 xext
MAN1=		tclock.1
PLIST_FILES=	bin/tclock

LICENSE=	GPLv1
LICENSE_FILE=	${WRKSRC}/COPYING

.include <bsd.port.mk>
