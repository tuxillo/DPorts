# New ports collection makefile for:    ladder
# Date created:         11 Sep 2006
# Whom:                 gurkan@phys.ethz.ch
#
# $FreeBSD: ports/games/gnustep-ladder/Makefile,v 1.14 2012/11/17 05:57:40 svnexp Exp $
#

PORTNAME=	ladder
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	games gnustep
MASTER_SITES=	${MASTER_SITE_SAVANNAH} \
		${MASTER_SITE_GNUSTEP_CH}
MASTER_SITE_SUBDIR=	gap
PKGNAMEPREFIX=	gnustep-
DISTNAME=	Ladder-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU Go frontend for GNUstep

RUN_DEPENDS=	gnugo:${PORTSDIR}/games/gnugo

LICENSE=	GPLv2

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}

.include <bsd.port.mk>
