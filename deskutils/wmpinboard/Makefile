# New ports collection makefile for:	wmpinboard
# Date created:			17 January 1999
# Whom:				Jim Mock <jim@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/wmpinboard/Makefile,v 1.25 2012/11/17 05:55:31 svnexp Exp $
#

PORTNAME=	wmpinboard
PORTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	deskutils afterstep windowmaker
MASTER_SITES=	${MASTER_SITE_DEBIAN_POOL}
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	t.kempka@web.de
COMMENT=	Post-it notes for the WindowMaker dock or AfterStep Wharf

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}.orig

USE_XORG=	xpm
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_ARGS=	ACLOCAL="${TRUE}" AUTOCONF="${TRUE}" AUTOMAKE="${TRUE}" \
		AUTOHEADER="${TRUE}"

MAN1=		wmpinboard.1

PLIST_FILES=	bin/wmpinboard

.include <bsd.port.mk>
