# New ports collection makefile for:   mlclock
# Date created:        December 05 1997
# Whom:                Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
#
# $FreeBSD: ports/x11-clocks/mlclock/Makefile,v 1.18 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	mlclock
PORTVERSION=	1.1
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	http://www2u.biglobe.ne.jp/~y-miyata/mlvwm/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Clock for mlvwm window manager

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_XORG=	x11 xau xdmcp

PLIST_FILES=	bin/mlclock %%DATADIR%%/mlclockrc %%DATADIR%%/mlclockrc-kanji
PLIST_DIRS=	%%DATADIR%%

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -I${LOCALBASE}/include \
		-DRCFILE=\".mlclockrc\" mlclock.c -o mlclock \
		-L${LOCALBASE}/lib -lX11

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mlclock ${PREFIX}/bin
	@${MKDIR} ${DATADIR}
.for i in mlclockrc mlclockrc-kanji
	${INSTALL_DATA} ${WRKSRC}/rcfile/${i} ${DATADIR}
.endfor

.include <bsd.port.mk>
