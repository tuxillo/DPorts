# Ports collection makefile for:	sudoku_solver
# Date created:			Apr 9, 2006
# Whom:				ijliao
#
# $FreeBSD: ports/games/sudoku_solver/Makefile,v 1.4 2012/11/17 05:57:53 svnexp Exp $
#

PORTNAME=	sudoku_solver
PORTVERSION=	1.20
CATEGORIES=	games
MASTER_SITES=	http://www.techfinesse.com/game/
DISTNAME=	solver

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	A Sudoku Solver in C

WRKSRC=		${WRKDIR}/${DISTNAME}_${PORTVERSION}

ALL_TARGET=	# empty

PLIST_FILES=	bin/sudoku_solver

post-patch:
	@${REINPLACE_CMD} -e "s,^CC,#CC, ; s,^CFLAGS,#CFLAGS," \
		${WRKSRC}/${MAKEFILE}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/sudoku_solver ${PREFIX}/bin

.include <bsd.port.mk>
