# Created by: roam@FreeBSD.org
# $FreeBSD: ports/games/nonsense/Makefile,v 1.12 2012/11/17 05:57:47 svnexp Exp $

PORTNAME=	nonsense
PORTVERSION=	0.6
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	A nonsense text generator

NO_BUILD=	defined

MAN6=		nonsense.6

.include <bsd.port.options.mk>

post-configure:
		${REINPLACE_CMD} -e "s,/usr/local,${PREFIX}," ${WRKSRC}/nonsense
		${SED} -e "s^%%PREFIX%%^${PREFIX}^g" \
			< ${FILESDIR}/${MAN6} > ${WRKSRC}/${MAN6}

do-install:
		${INSTALL_SCRIPT} ${WRKSRC}/nonsense ${PREFIX}/bin
		${MKDIR} ${PREFIX}/share/nonsense/data
		${MKDIR} ${PREFIX}/share/nonsense/template
		${INSTALL_DATA} ${WRKSRC}/*.data ${PREFIX}/share/nonsense/data
		${INSTALL_DATA} ${WRKSRC}/*.template ${PREFIX}/share/nonsense/template
		${INSTALL_MAN} ${WRKSRC}/${MAN6} ${PREFIX}/man/man6/
.if ${PORT_OPTIONS:MDOCS}
		${MKDIR} ${PREFIX}/share/doc/nonsense
		${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/nonsense/
.endif

.include <bsd.port.mk>
