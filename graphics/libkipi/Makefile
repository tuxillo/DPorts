# New ports collection makefile for:	libkipi
# Date created:				Mon Oct 18 19:41:36 CEST 2004
# Whom:					Markus Brueffer <markus@FreeBSD.org>
#
# $FreeBSD: ports/graphics/libkipi/Makefile,v 1.23 2012/11/17 05:58:13 svnexp Exp $

PORTNAME=	libkipi
PORTVERSION=	0.1.6
PORTREVISION=	6
CATEGORIES=	graphics kde devel
MASTER_SITES=	SF/kipi/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	KDE Image Plugin Interface

USE_BZIP2=	yes
USE_KDELIBS_VER=3
USE_GNOME=	gnomehack pkgconfig
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
USE_GETTEXT=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g;s|-fno-schedule-insns -fno-inline||g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}
	@${REINPLACE_CMD} 's/install-data-local: install-apidox/install-data-local:/' \
		${WRKSRC}/libkipi/Makefile.in
	@${TOUCH} ${WRKSRC}/libkipi/libkipi/*

.include <bsd.port.mk>
