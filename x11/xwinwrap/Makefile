# New ports collection makefile for:	xwinwrap
# Date created:		2009-11-16
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/x11/xwinwrap/Makefile,v 1.5 2012/11/17 06:03:23 svnexp Exp $
#

PORTNAME=	xwinwrap
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/ \
		http://tourservice.kz/zloidemon/distfiles/ \
		http://z-up.ru/zloidemon/distfiles/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	XWinWrap replace a desktop background with a movie or screensaver

WRKSRC=		${WRKDIR}/${PORTNAME}

ONLY_FOR_ARCHS=	amd64 i386
USE_BZIP2=	yes
USE_XORG=	x11 xproto xrender xext
PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
MAKE_ARGS+=	ARCH=x86_64
.endif

.include <bsd.port.post.mk>
