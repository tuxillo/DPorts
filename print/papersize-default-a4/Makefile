# New ports collection makefile for:	papersize-default-a4
# Date created:		March 2, 2012
# Whom:			hrs
#
# $FreeBSD: ports/print/papersize-default-a4/Makefile,v 1.2 2012/11/17 06:00:53 svnexp Exp $
#

PORTNAME=	papersize-default
PORTVERSION=	0.0.20120302
CATEGORIES=	print
MASTER_SITES=	# none
PKGNAMESUFFIX=	-${DEFAULTPAPERSIZE:tl}
DISTFILES=	# none

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	A default paper size configuration file for libpaper

LIB_DEPENDS=	paper:${PORTSDIR}/print/libpaper

NO_BUILD=	yes

DEFAULTPAPERSIZE?=	a4
.for P in a4 letter
.if ${DEFAULTPAPERSIZE:L:M${P}} != ${P}
CONFLICTS+=	papersize-default-${P}-[0-9]*
.endif
.endfor

PLIST_FILES=	etc/papersize

do-install:
	${LN} -s -f papersize.${DEFAULTPAPERSIZE:tl} ${PREFIX}/etc/papersize

.include <bsd.port.mk>
