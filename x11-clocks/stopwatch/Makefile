# New ports collection makefile for:	stopwatch
# Date created:				28 August 2008
# Whom:					Edwin Groothuis <edwin@mavetju.org>
#
# $FreeBSD: ports/x11-clocks/stopwatch/Makefile,v 1.5 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	stopwatch
PORTVERSION=	3.5
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	http://expect.nist.gov/stopwatch/
DISTNAME=	stopwatch

MAINTAINER=	edwin@mavetju.org
COMMENT=	Stopwatch enables hand timing much like a physical stopwatch

WRKSRC=		${WRKDIR}/${PORTNAME}-3.4
USE_TK_RUN=	yes
USE_TK_WRAPPER=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/stopwatch

post-patch:
	${REINPLACE_CMD} -e "s,%%LOCALBASE%%,${LOCALBASE}," ${WRKSRC}/stopwatch

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/stopwatch ${PREFIX}/bin

.include <bsd.port.mk>
