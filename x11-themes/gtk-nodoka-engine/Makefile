# New ports collection makefile for:	gtk-nodoka-engine
# Date created:		2009-01-27
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/x11-themes/gtk-nodoka-engine/Makefile,v 1.8 2012/11/17 06:03:31 svnexp Exp $
#

PORTNAME=	gtk-nodoka-engine
PORTVERSION=	0.7.5
PORTREVISION=	1
CATEGORIES=	x11-themes
MASTER_SITES=	https://fedorahosted.org/releases/n/o/nodoka/

MAINTAINER=	romain@FreeBSD.org
COMMENT=	GTK nodoka engine and themes

OPTIONS=	ANIMATION	"Enable animation support"	off \
		ANIMATIONTOLEFT	"Animation from right to left"	off

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

.if defined(WITH_ANIMATION) && !defined(WITHOUT_ANIMATION)
CONFIGURE_ARGS+=	--enable-animation
.else
CONFIGURE_ARGS+=	--disable-animation
.endif

.if defined(WITH_ANIMATIONTOLEFT) && !defined(WITHOUT_ANIMATIONTOLEFT)
CONFIGURE_ARGS+=	--enable-animationtoleft
.else
CONFIGURE_ARGS+=	--disable-animationtoleft
.endif

.include <bsd.port.post.mk>
