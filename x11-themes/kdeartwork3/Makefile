# -*-mode: makefile-*-
# New ports collection makefile for:	KDE artwork
# Date created:				20 August 2001
# Whom:					Dmitry Sivachenko <demon@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/kdeartwork3/Makefile,v 1.67 2012/12/30 18:56:35 svnexp Exp $
#

PORTNAME=	kdeartwork
PORTVERSION=	${KDE_VERSION}
PORTREVISION=	6
CATEGORIES=	x11-themes kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTVERSION:S/.0//}/src
DIST_SUBDIR=	KDE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Additional themes, sounds, wallpapers and window styles for KDE

CONFLICTS=	phase-[0-9]* kde-windeco-smoothblend-[0.9]*

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

USE_KDEBASE_VER=3
PREFIX=		${KDE_PREFIX}

USE_GL=		yes
USE_BZIP2=	yes
USE_GMAKE=	yes

USE_AUTOTOOLS=  libtool
USE_LDCONFIG=	yes

.include "${.CURDIR}/../../x11/kde3/Makefile.kde"
.include <bsd.port.pre.mk>

.if exists(${LOCALBASE}/bin/xscreensaver)
WITH_XS=	yes
.endif # exists(${LOCALBASE}/bin/xscreensaver)

.if exists(${LOCALBASE}/share/gnome/control-center-2.0/capplets/screensaver-properties.desktop)
WITH_XSGNOME=	yes
.endif # exists(${LOCALBASE}/bin/screensaver-properties-capplet)

.if defined(WITH_XS) && !defined(WITH_XSGNOME)
RUN_DEPENDS+=	kxsconfig:${PORTSDIR}/x11/xscreensaver-kde
.endif # defined(WITH_XS)

.if defined(WITH_XSGNOME)
RUN_DEPENDS+=	kxsconfig:${PORTSDIR}/x11/xscreensaver-kde
.endif # defined(WITH_XSGNOME)

pre-configure:
	@${REINPLACE_CMD} -e 's|kxsconfig||g' ${WRKSRC}/kscreensaver/Makefile.in

post-configure:
	@${REINPLACE_CMD} -e 's|.*XSCREENSAVER.*||g' ${WRKSRC}/config.h

.include <bsd.port.post.mk>
