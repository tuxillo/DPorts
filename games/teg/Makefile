# New ports collection makefile for:	teg
# Date created:				31 October 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/games/teg/Makefile,v 1.42 2012/11/17 05:57:54 svnexp Exp $
#

PORTNAME=	teg
PORTVERSION=	0.11.2
PORTREVISION=	6
CATEGORIES=	games gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A turn-based strategy game for GNOME

USE_GNOME=	gnomehack gnomeprefix intlhack libgnomeui
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-ggz

GCONF_SCHEMAS=	teg.schemas

post-patch:
	@${GREP} -lR " LIST_NEXT" ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e \
		's| LIST_NEXT| TEG_LIST_NEXT|g'
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|pl||g' \
		${WRKSRC}/docs/gnome-help/Makefile.in

.include <bsd.port.mk>
