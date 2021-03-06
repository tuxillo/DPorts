# New ports collection makefile for:	Code2000
# Date created:		6 Dec 2003
# Whom:			Thierry Thomas <thierry@pompo.net>
#
# $FreeBSD: ports/x11-fonts/code2000/Makefile,v 1.16 2012/11/17 06:03:27 svnexp Exp $
#

PORTNAME=	code2000
PORTVERSION=	1.171
CATEGORIES=	x11-fonts
MASTER_SITES=	http://code2000.net/	\
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	thierry/${DIST_SUBDIR}
DISTFILES=	${PORTNAME:tu}${EXTRACT_SUFX:tu}
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Shareware demo Unicode TrueType font

BUILD_DEPENDS=	mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale	\
		mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir	\
		fc-cache:${PORTSDIR}/x11-fonts/fontconfig

USE_ZIP=	yes

PLIST_SUB=	FONTSDIR="${FONTSDIR:S|${PREFIX}/||}"

SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_LIST=	FONTSDIR=${FONTSDIR}

FONTNAME=	${PORTNAME}
FONTSDIR?=	${PREFIX}/lib/X11/fonts/${FONTNAME}

MKFONTSCL_CMD=	${LOCALBASE}/bin/mkfontscale
MKFONTDIR_CMD=	${LOCALBASE}/bin/mkfontdir
FCCACHE_CMD=	${LOCALBASE}/bin/fc-cache -f -v

post-extract: move-fonts rename-license

move-fonts:
	${MKDIR} ${WRKSRC}
	${MV} ${WRKDIR}/CODE2000.TTF ${WRKSRC}/${FONTNAME}.ttf

rename-license:
	${MV} ${WRKDIR}/CODE2000.HTM ${WRKSRC}/${FONTNAME}.html

do-build:
	cd ${WRKSRC} &&	${MKFONTSCL_CMD}
	cd ${WRKSRC} &&	${MKFONTDIR_CMD}

do-install:
	${MKDIR} ${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/* ${FONTSDIR}

post-install:
	@${ECHO_MSG} "===> Running fc-cache"
	-${FCCACHE_CMD} ${FONTSDIR}
	@${ECHO_MSG}
	@${CAT} ${PKGMESSAGE}
	@${ECHO_MSG}

.include <bsd.port.mk>
