# New ports collection makefile for:	xmms-bluecurve-theme
# Date created:			29 May 2005
# Whom:				Jean-Yves Lefort <jylefort@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/xmms-bluecurve-theme/Makefile,v 1.8 2012/11/17 06:03:34 svnexp Exp $
#

PORTNAME=	xmms-bluecurve-theme
PORTREVISION=	2

COMMENT=	The Bluecurve XMMS skin

RUN_DEPENDS=	xmms:${PORTSDIR}/multimedia/xmms \
		unzip:${PORTSDIR}/archivers/unzip

MASTERDIR=	${.CURDIR}/../bluecurve-themes

PREFIX=		${LOCALBASE}

NO_BUILD=	yes

SKIN=		Bluecurve-xmms.zip
PLIST_FILES=	share/xmms/Skins/${SKIN}

do-install:
	${MKDIR} ${PREFIX}/share/xmms/Skins
	${INSTALL_DATA} ${WRKSRC}/art/xmms/${SKIN} ${PREFIX}/share/xmms/Skins

.include "${MASTERDIR}/Makefile"
