# New ports collection makefile for:	xcoloredit
# Date created:		6 Jun 1997
# Whom:			Satoshi TAOKA
#
# $FreeBSD: ports/x11/xcoloredit/Makefile,v 1.13 2012/11/17 06:03:20 svnexp Exp $
#

PORTNAME=	xcoloredit
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	ftp://ftp.x.org/R5contrib/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Find colour values by graphical colour mixing

USE_IMAKE=	yes
USE_XORG=	ice sm x11 xaw xext xmu xpm xt
MAN1=		xcoloredit.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/xcoloredit

.include <bsd.port.mk>
