# New ports collection makefile for:	clearlooks-metacity
# Date created:		2005-03-20
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/clearlooks-metacity/Makefile,v 1.19 2012/11/17 06:03:30 svnexp Exp $
#   $MCom: ports/x11-themes/clearlooks-metacity/Makefile,v 1.3 2007/09/10 15:44:29 mezz Exp $
#

PORTNAME=	clearlooks-metacity
PORTVERSION=	2.0
PORTREVISION=	7
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.stellingwerff.com/
#MASTER_SITES=	${MASTER_SITE_SOURCEFORGE}
#MASTER_SITE_SUBDIR=	clearlooks

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Clearlooks Metacity theme

CONFLICTS=	gnome-themes-2.11.9[1-9]* gnome-themes-2.*

WRKSRC=		${WRKDIR}/Clearlooks/metacity-1/
USE_GNOME=	metacity gnomeprefix
DATADIR=	share/themes/Clearlooks/metacity-1
NO_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/metacity-theme-1.xml
PLIST_DIRS=	%%DATADIR%% \
		share/themes/Clearlooks

do-install:
	${MKDIR} ${PREFIX}/${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/metacity-theme-1.xml ${PREFIX}/${DATADIR}

.include <bsd.port.mk>
