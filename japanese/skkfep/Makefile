# New ports collection Makefile for:	skkfep
# Date created:		22 Jul 1998
# Whom:			Yusuke Nawano <azuki@azkey.org>
#
# $FreeBSD: ports/japanese/skkfep/Makefile,v 1.25 2012/11/17 05:58:40 svnexp Exp $
#

PORTNAME=	skkfep
PORTVERSION=	0.87
PORTREVISION=	2
CATEGORIES=	japanese
MASTER_SITES=	http://homepage2.nifty.com/aito/skkfep/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SKK-like Kana-to-Kanji FrontEnd Processor

RUN_DEPENDS=	${LOCALBASE}/sbin/skkserv:${PORTSDIR}/japanese/skk

MAN1=		skkfep.1
PLIST_FILES=	bin/skkfep

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/skkfep ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/skkfep.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
