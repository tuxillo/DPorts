# New ports collection makefile for:	layouteditor
# Date created:				Sun, Apr 29 2007
# Whom:					Hiroki Sato <hrs@FreeBSD.org>
#
# $FreeBSD: ports/cad/layouteditor/Makefile,v 1.6 2012/11/17 05:54:54 svnexp Exp $
#

PORTNAME=	layouteditor
PORTVERSION=	0.0.20110614
PORTREVISION=	1
CATEGORIES=	cad
MASTER_SITES=	LOCAL
MASTER_SITE_SUBDIR=	hrs
DISTNAME=	LayoutEditor-${PORTVERSION:S,^0.0.,,}-gpl-src

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	IC/MEMS layout editor

USE_QT4=	corelib gui network moc_build sql uic_build \
		rcc_build qmake qt3support xml
USE_ZIP=	yes
USE_FREETYPE=	yes
WRKSRC=		${WRKDIR}/layout
PLIST_FILES=	bin/layout

do-configure:
	cd ${WRKSRC} && ${QMAKE} -makefile -spec ${QMAKESPEC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/layout ${PREFIX}/bin/

.include <bsd.port.mk>
