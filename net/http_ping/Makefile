# New ports collection makefile for:	http_ping
# Date created:			11 August 2001
# Whom:				dd
#
# $FreeBSD: ports/net/http_ping/Makefile,v 1.8 2012/11/17 06:00:02 svnexp Exp $
#

PORTNAME=	http_ping
PORTVERSION=	20050629
CATEGORIES=	net www
MASTER_SITES=	http://www.acme.com/software/${PORTNAME}/
DISTNAME=	${PORTNAME}_29jun2005

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sends HTTP requests every few seconds and times how long they take

WRKSRC=		${WRKDIR}/${PORTNAME}
MAN1=		http_ping.1
MANCOMPRESSED=	no
PLIST_FILES=	bin/http_ping

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/http_ping ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/http_ping.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
