# New ports collection makefile for:	goom
# Date created:				12 February 2005
# Whom:					Koop Mast <kwm@FreeBSD.org>
#
# $FreeBSD: ports/graphics/goom/Makefile,v 1.19 2012/11/17 05:58:08 svnexp Exp $
#

PORTNAME=	goom
PORTVERSION=	2k4.0
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}2k4/0
DISTNAME=	${PORTNAME}-${PORTVERSION:S|.|-|}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Visual effects library

USE_AUTOTOOLS=	libtool
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION:S|.|-|}
USE_GNOME=	gnomehack
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-sdltest --enable-static
USE_LDCONFIG=	yes

.if exists(${X11R6}/bin/xmms) || defined(WITH_XMMS)
LIB_DEPENDS+=	xmms.4:${PORTSDIR}/multimedia/xmms
PLIST_SUB+=	XMMS=""
.else
PLIST_SUB+=	XMMS="@comment "
.endif

pre-everything::
.if !defined(WITH_XMMS)
	@${ECHO} ""
	@${ECHO} "Define WITH_XMMS to build goom xmms visualization plugin"
	@${ECHO} ""
.endif

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on powerpc
.endif

.include <bsd.port.post.mk>
