# New ports collection makefile for:    qtcurve-gtk2
# Date created:                         23 May 2008
# Whom:                                 Dmitry Klimov <lazyklimm@gmail.com>
#
# $FreeBSD: ports/x11-themes/qtcurve-gtk2/Makefile,v 1.29 2012/11/17 06:03:33 svnexp Exp $
#

PORTNAME=	qtcurve
PORTVERSION=	1.8.15
CATEGORIES=	x11-themes
MASTER_SITES=	http://craigd.wikispaces.com/file/view/
PKGNAMEPREFIX=	gtk2-
PKGNAMESUFFIX=	-theme
DISTNAME=	QtCurve-Gtk2-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	QtCurve GTK2 Theme Engine

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_GNOME=	gtk20

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800067
.if ${ARCH} == "x86_64"
CFLAGS+=	-fPIC
.endif
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-style-qt_settings.c
.endif

post-extract:
.if ${OSVERSION} < 800067
	${CP} ${FILESDIR}/getline.h ${WRKSRC}/style
	${CP} ${FILESDIR}/getline.c ${WRKSRC}/style
.endif

.include <bsd.port.post.mk>
