# New ports collection makefile for:	icbirc
# Date created:		8 Feb 2004
# Whom:			hrs
#
# $FreeBSD: ports/irc/icbirc/Makefile,v 1.4 2012/11/17 05:58:28 svnexp Exp $

PORTNAME=	icbirc
PORTVERSION=	1.8
CATEGORIES=	irc
MASTER_SITES=	http://www.benzedrine.cx/

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Proxy IRC client and ICB server

MAKE_ENV=	BINDIR="${PREFIX}/bin" MANDIR="${PREFIX}/man/man"
WRKSRC=		${WRKDIR}/${PORTNAME}

MAN8=		icbirc.8
MANCOMPRESSED=	maybe

PLIST_FILES=	bin/icbirc

.include <bsd.port.mk>
