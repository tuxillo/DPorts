# New ports collection makefile for: 	Ninja-irc
# Date created:	 	10 April 1999
# Whom:			Chris Piazza <cpiazza@FreeBSD.org>
#
# $FreeBSD: ports/irc/ninja/Makefile,v 1.37 2012/11/17 05:58:29 svnexp Exp $
#

PORTNAME=	ninja
PORTVERSION=	1.5.8.1
CATEGORIES=	irc
MASTER_SITES=	http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Another ircII based irc client

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	IRCLIB="${DATADIR}"
MAKE_JOBS_UNSAFE=	yes

LATEST_LINK=	irc-ninja

post-patch:
	@${REINPLACE_CMD} -e "s|%%IRCLIB%%|${DATADIR}|g" \
		${WRKSRC}/include/config.h.dist

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ninja ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/ninjawserv ${PREFIX}/bin
	@${MKDIR} ${DATADIR}/translation
	${INSTALL_DATA} ${WRKSRC}/translation/* ${DATADIR}/translation

.include <bsd.port.mk>
