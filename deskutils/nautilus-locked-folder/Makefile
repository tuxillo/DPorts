# New ports collection makefile for:	nautilus-locked-folder
# Date created:		2005-09-17
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/nautilus-locked-folder/Makefile,v 1.24 2012/11/17 05:55:29 svnexp Exp $
#   $MCom: ports/deskutils/nautilus-locked-folder/Makefile,v 1.12 2009/11/28 05:58:59 mezz Exp $
#

PORTNAME=	nautilus-locked-folder
PORTVERSION=	1.0.0
PORTREVISION=	11
CATEGORIES=	deskutils security
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	pav

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Nautilus plugin that allows you to encrypt the contents of a folder

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GNOME=	nautilus2 eel2 libgnomeui
CONFIGURE_ENV=	LIBS="-lssl"
PKGCONFIGS=	gtk+-2.0 libglade-2.0 libnautilus-extension libgnomeui-2.0
# XXX: if was LDFLASG="..." Since variable is spelled incorrect,
# this may be not needed at all
LDFLAGS+=	-L${LOCALBASE}/lib `pkg-config --libs ${PKGCONFIGS}`
CPPFLAGS+=	-I${LOCALBASE}/include `pkg-config --cflags ${PKGCONFIGS}`
PLIST_FILES=	lib/nautilus/extensions-2.0/libnautilus-locked-folder.a \
		lib/nautilus/extensions-2.0/libnautilus-locked-folder.la \
		lib/nautilus/extensions-2.0/libnautilus-locked-folder.so

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/share/icons/hicolor/32x32/stock/data/|${LOCALBASE}/share/icons/hicolor/32x32/stock/data/|' \
		${WRKSRC}/src/lockedfolder-extension.c
	@${REINPLACE_CMD} -e 's|gladedir)"\\" \\|gladedir)"\\"|g ; \
		s|.*-Werror||g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
