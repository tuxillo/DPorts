# New ports collection makefile for:   xtux
# Date created:        23 December 2000
# Whom:    G�ran Runfeldt <goranrunfeldt@home.se>
#
# $FreeBSD: ports/games/xtux/Makefile,v 1.20 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xtux
PORTVERSION=	2003.03.06
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/20030306
DISTNAME=	${PORTNAME}-src-${PORTVERSION:S/.//g}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Humorous Arcade game for X

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_XORG=	xpm
USE_GMAKE=	yes
MAKE_ENV=	CPP="${CC} -E"

CFLAGS+=	-DDATADIR=\\\"${DATADIR}\\\"

post-patch:
	@${FIND} ${WRKSRC}/src -name "Makefile" | ${XARGS} ${REINPLACE_CMD} -e \
		's|^CC|#CC|g ; \
		 s|^CFLAGS|#CFLAGS|g ; \
		 s|^CPP|#CPP|g ; \
		 s|^MAKE|#MAKE|g ; \
		 s|/usr/X11R6|$${LOCALBASE}|g'

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xtux ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/tux_serv ${PREFIX}/bin

	@${MKDIR} ${DATADIR}/demos
	@${MKDIR} ${DATADIR}/images/entities
	@${MKDIR} ${DATADIR}/images/events
	@${MKDIR} ${DATADIR}/images/items
	@${MKDIR} ${DATADIR}/images/weapons
	@${MKDIR} ${DATADIR}/images/tiles
	@${MKDIR} ${DATADIR}/maps

	${INSTALL_DATA} ${WRKSRC}/data/*.table ${DATADIR}
.for file in ascii.txt bios entities weapons
	${INSTALL_DATA} ${WRKSRC}/data/${file} ${DATADIR}
.endfor
.for dir in entities events items weapons tiles .
	${INSTALL_DATA} ${WRKSRC}/data/images/${dir}/*.xpm \
		${DATADIR}/images/${dir}
.endfor
	${INSTALL_DATA} ${WRKSRC}/data/demos/*.xtdem ${DATADIR}/demos
	${INSTALL_DATA} ${WRKSRC}/data/maps/*.map ${DATADIR}/maps

.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
