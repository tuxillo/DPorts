# New ports collection makefile for:	bclock
# Date created:		13 May 1997
# Whom:			Brian Handy <handy@physics.montana.edu>
#
# $FreeBSD: ports/x11-clocks/bclock/Makefile,v 1.18 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	bclock
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	X11/clocks

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Round, analog X11 clock with Bezier curve hands

USE_IMAKE=	yes
USE_XORG=	ice sm x11 xext xmu xt
MAN1=		bclock.1

PLIST_FILES=	bin/bclock \
		lib/X11/app-defaults/Clock-color

.include <bsd.port.mk>
