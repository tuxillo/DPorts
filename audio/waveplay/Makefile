# New ports collection makefile for:    waveplay
# Date created:         23 Jan 1999
# Whom:                 Yoshihide SONODA <ysonoda@dontaku.csce.kyushu-u.ac.jp>
#
# $FreeBSD: ports/audio/waveplay/Makefile,v 1.12 2012/11/17 05:54:47 svnexp Exp $
#

PORTNAME=		waveplay
PORTVERSION=		2001.09.24
PORTREVISION=		1
CATEGORIES=		audio
MASTER_SITES=		http://www.sokohiki.org/~yoshi/FreeBSD/ports/
DISTNAME=		waveplay-20010924

MAINTAINER=		yshd@na.rim.or.jp
COMMENT=	A simple wav file player

MAN1=			waveplay.1
MANLANG=		"" ja
ONLY_FOR_ARCHS=		i386 amd64
PLIST_FILES=		bin/waveplay

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/waveplay ${PREFIX}/bin/waveplay
	${INSTALL_MAN} ${WRKSRC}/waveplay.1 ${PREFIX}/man/man1/waveplay.1
	${INSTALL_MAN} ${WRKSRC}/waveplay.ja.1 ${PREFIX}/man/ja/man1/waveplay.1

.include <bsd.port.mk>
