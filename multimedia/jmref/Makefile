# New ports collection makefile for:	jmref
# Date created:		2009-08-06
# Whom:			Steve Wills <steve@mouf.net>
#
# $FreeBSD: ports/multimedia/jmref/Makefile,v 1.12 2012/11/17 05:59:50 svnexp Exp $
#

PORTNAME=	jmref
PORTVERSION=	18.4
CATEGORIES=	multimedia
MASTER_SITES=	http://iphome.hhi.de/suehring/tml/download/
DISTNAME=	jm${PORTVERSION}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	JM Reference Software

USE_ZIP=	yes
USE_GMAKE=	yes
WRKSRC=		${WRKDIR}/JM

PLIST_FILES=	bin/ldecod bin/lencod \
		bin/rtp_loss bin/rtpdump

USE_DOS2UNIX=	Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/ldecod.exe ${PREFIX}/bin/ldecod
	${INSTALL_PROGRAM} ${WRKSRC}/bin/lencod.exe ${PREFIX}/bin/lencod
	${INSTALL_PROGRAM} ${WRKSRC}/bin/rtp_loss.exe ${PREFIX}/bin/rtp_loss
	${INSTALL_PROGRAM} ${WRKSRC}/bin/rtpdump.exe ${PREFIX}/bin/rtpdump

.include <bsd.port.mk>
