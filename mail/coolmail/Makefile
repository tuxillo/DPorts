# New ports collection makefile for:	coolmail
# Date created:			Mon  6 Jul 12:00:06 CEST 1998
# Whom:				Udo Schweigert <ust@cert.siemens.de>
#
# $FreeBSD: ports/mail/coolmail/Makefile,v 1.16 2012/11/17 05:59:00 svnexp Exp $
#

PORTNAME=	coolmail
PORTVERSION=	1.3
PORTREVISION=	3
CATEGORIES=	mail
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=system/mail/biffs
EXTRACT_SUFX=	.tgz

MAINTAINER=	udo.schweigert@siemens.com
COMMENT=	A Xbiff like mail tool with animated 3D graphics

USE_XORG=	x11 xext xmu xi
PATCH_STRIP=	-p1

MAN1=		coolmail.1
PLIST_FILES=	bin/coolmail

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/coolmail ${PREFIX}/bin/coolmail
	${INSTALL_MAN} ${WRKSRC}/coolmail.man ${PREFIX}/man/man1/coolmail.1

.include <bsd.port.mk>
