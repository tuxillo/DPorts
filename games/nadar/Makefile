# New ports collection makefile for:	NADAR
# Date created:		22 April 2000
# Whom:			Sakai Hiroaki <sakai@seki.ee.kagu.sut.ac.jp>
#
# $FreeBSD: ports/games/nadar/Makefile,v 1.13 2012/11/17 05:57:46 svnexp Exp $
#

PORTNAME=	nadar
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://ftp.vector.co.jp/pack/unix/game/action/

MAINTAINER=	hsakai@m8.ffn.ne.jp
COMMENT=	A network tank battle game

MAKE_ENV=	X11BASE=${LOCALBASE}
USE_XORG=	xpm
MAKE_JOBS_UNSAFE=	yes

MAN1=		nadars.1 nadar.1
MANCOMPRESSED=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nadar ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/nadars ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/nadar.1.gz ${MANPREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/nadars.1.gz ${MANPREFIX}/man/man1

.include <bsd.port.mk>
