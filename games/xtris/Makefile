# New ports collection makefile for:    xtris
# Date created:         24. Sep 97
# Whom:                 sec@42.org
#
# $FreeBSD: ports/games/xtris/Makefile,v 1.17 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xtris
PORTVERSION=	1.15
PORTREVISION=	2
CATEGORIES=	games ipv6
MASTER_SITES=	http://www.iagora.com/~espel/xtris/ \
		ftp://quatramaran.ens.fr/pub/orabidoo/

PATCH_SITES=	ftp://ftp.42.org/pub/orphan/	
PATCHFILES=	xtris-1.15-v6-19991218.diff.gz
PATCH_DIST_STRIP=	-p1

MAINTAINER=	sec@42.org
COMMENT=	A multi-player version of a popular game for the X Window system

RESTRICTED=	"Possible trademark infringement"
WRKSRC=		${WRKDIR}/xtris
USE_XORG=	x11 xext

MAN6=		xtris.6 xtserv.6 xtbot.6

MAKE_ENV=	IPV6_CFLAGS="-DINET6"

.include <bsd.port.mk>
