# New ports collection makefile for:	gmpc-shout
# Date created:		March 27 2008
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/audio/gmpc-shout/Makefile,v 1.16 2012/11/17 05:54:33 svnexp Exp $
#

PORTNAME=	gmpc-shout
PORTVERSION=	0.20.0
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://download.sarine.nl/Programs/gmpc/${PORTVERSION}/ \
		http://freebsd.unixfreunde.de/sources/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Shoutcast stream for gmpc

LIB_DEPENDS=	mpd.4:${PORTSDIR}/audio/libmpd \
		cairo.2:${PORTSDIR}/graphics/cairo
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gmpc.pc:${PORTSDIR}/audio/gmpc
RUN_DEPENDS=	gmpc:${PORTSDIR}/audio/gmpc \
		ogg123:${PORTSDIR}/audio/vorbis-tools

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack pkgconfig intltool glib20 gtk20 libxml2
USE_GETTEXT=	yes

.include <bsd.port.mk>
