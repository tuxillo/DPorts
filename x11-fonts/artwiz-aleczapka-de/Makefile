# New ports collection makefile for:	artwiz-aleczapka-de
# Date created:			2004-08-28
# Whom:				Herbert J. Skuhra <herbert.skuhra@gmx.at>
#
# $FreeBSD: ports/x11-fonts/artwiz-aleczapka-de/Makefile,v 1.6 2012/11/17 06:03:27 svnexp Exp $

PORTNAME=		artwiz-aleczapka-de
PORTVERSION=		1.3
PORTREVISION=	2
CATEGORIES=		x11-fonts
MASTER_SITES=		SF/artwizaleczapka/iso-8859-1/${PORTVERSION}

MAINTAINER=	herbert.skuhra@gmx.at
COMMENT=	A set of (improved) artwiz fonts

NO_BUILD=	yes
USE_BZIP2=	yes
PKGMESSAGE=	${WRKDIR}/pkg-message

FONTS=	anorexia.de aqui.de cure.de drift.de edges.de fkp.de gelly.de \
	glisp-bold.de glisp.de kates.de lime.de mints-mild.de \
	mints-strong.de nu.de smoothansi.de snap.de
FONTDIR=	${LOCALBASE}/lib/X11/fonts/${PORTNAME}/
FILES=	${FONTS:S,$,.pcf,} ${WRKSRC}/fonts.alias \
	${WRKSRC}/fonts.dir

.include <bsd.port.pre.mk>

do-install:
	@${MKDIR} ${FONTDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${FILES} ${FONTDIR}

post-install:
	@${SED} 's|$${LOCALBASE}|${LOCALBASE}|g' \
		${PKGDIR}/pkg-message >${PKGMESSAGE}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
