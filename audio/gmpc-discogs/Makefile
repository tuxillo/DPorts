# New ports collection makefile for:	gmpc-discogs
# Date created:		September 14 2007
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/audio/gmpc-discogs/Makefile,v 1.9 2012/11/17 05:54:32 svnexp Exp $
#

PORTNAME=	gmpc-discogs
PORTVERSION=	0.20.0
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://download.sarine.nl/Programs/gmpc/${PORTVERSION}/ \
		http://freebsd.unixfreunde.de/sources/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Album Image fetcher for gmpc

LIB_DEPENDS=	mpd.4:${PORTSDIR}/audio/libmpd
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gmpc.pc:${PORTSDIR}/audio/gmpc
RUN_DEPENDS=	gmpc:${PORTSDIR}/audio/gmpc

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack pkgconfig glib20 gtk20 intltool libxml2
USE_GETTEXT=	yes

.include <bsd.port.mk>
