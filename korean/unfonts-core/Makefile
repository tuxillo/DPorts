# New ports collection makefile for:	unfonts-core-ttf
# Date created:		27 September 2003
# Whom:			Hye-Shik Chang <perky@FreeBSD.org>
#
# $FreeBSD: ports/korean/unfonts-core/Makefile,v 1.5 2012/11/17 05:58:47 svnexp Exp $

PORTNAME=	unfonts
PORTVERSION?=	1.0.2.080608
CATEGORIES=	korean x11-fonts
MASTER_SITES?=	http://kldp.net/frs/download.php/4695/
PKGNAMESUFFIX=	-${FONTCAT}
DISTNAME=	un-fonts${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	jkim@FreeBSD.org
COMMENT=	GPL'd Korean TrueType Fonts by UN Koaunghi (${FONTCAT})

LICENSE=	GPLv2
LICENSE_FILE=	${FILESDIR}/COPYING

BUILD_DEPENDS+=	${LOCALBASE}/bin/mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir \
		${LOCALBASE}/bin/mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale

DISTINFO_FILE=	${PKGDIR}/distinfo.${FONTCAT}-ttf

WRKSRC=		${WRKDIR}/un-fonts
FONTSDIR=	lib/X11/fonts/${PORTNAME}-${FONTCAT}
FONTCAT?=	core
FONTLIST?=	UnBatang \
		UnBatangBold \
		UnDinaru \
		UnDinaruBold \
		UnDinaruLight \
		UnDotum \
		UnDotumBold \
		UnGraphic \
		UnGraphicBold \
		UnGungseo \
		UnPilgi \
		UnPilgiBold

PLIST_DIRS=	${FONTSDIR}
.for f in ${FONTLIST}
PLIST_FILES+=	${FONTSDIR}/${f}.ttf
.endfor
PLIST_FILES+=	${FONTSDIR}/fonts.dir \
		${FONTSDIR}/fonts.scale

do-build:
	${LOCALBASE}/bin/mkfontscale ${WRKSRC}
	${LOCALBASE}/bin/mkfontdir ${WRKSRC}

do-install:
	${MKDIR} ${PREFIX}/${FONTSDIR}
.for f in ${FONTLIST}
	${INSTALL_DATA} ${WRKSRC}/${f}.ttf ${PREFIX}/${FONTSDIR}
.endfor
	${INSTALL_DATA} ${WRKSRC}/fonts.dir ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/fonts.scale ${PREFIX}/${FONTSDIR}

post-install:
	@${ECHO_CMD} "@exec fc-cache -s %D/${FONTSDIR} 2>/dev/null || true" >> ${TMPPLIST}
	@${ECHO_CMD} "@unexec fc-cache -s %D/${FONTSDIR} 2>/dev/null || true" >> ${TMPPLIST}
	@-${LOCALBASE}/bin/fc-cache -s ${PREFIX}/${FONTSDIR} 2>/dev/null

.include <bsd.port.mk>
