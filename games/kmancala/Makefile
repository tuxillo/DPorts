# New ports collection makefile for:	kmancala
# Date created:		2011-05-26
# Whom:			Max Brazhnikov <makc@FreeBSD.org>
#
# $FreeBSD: ports/games/kmancala/Makefile,v 1.5 2012/11/17 05:57:43 svnexp Exp $
#

PORTNAME=	kmancala
PORTVERSION=	1.0.2
PORTREVISION=	2
CATEGORIES=	games kde
MASTER_SITES=	http://horinek.net/~dal/ \
		LOCAL/makc
DISTNAME=	kMancala-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	A board game for KDE, also known as Mancala or Kalah

LIB_DEPENDS=	kdegames.5:${PORTSDIR}/games/kdegames4

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_KDE4=	kdelibs kdeprefix automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
