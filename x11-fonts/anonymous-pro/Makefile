# New ports collection makefile for:    anonymousPro
# Date Created:                         14 Nov 2011
# Whom:                                 Norberto Lopes <nlopes.ml@gmail.com>
#
# $FreeBSD: ports/x11-fonts/anonymous-pro/Makefile,v 1.2 2012/11/17 06:03:27 svnexp Exp $
#

PORTNAME=	anonymous-pro
PORTVERSION=	1.002
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.ms-studio.com/FontSales/
DISTNAME=	AnonymousPro-${PORTVERSION}

MAINTAINER=	nlopes.ml@gmail.com
COMMENT=	A fixed width sans designed especially for coders

LICENSE=	OFL
LICENSE_NAME=	Open Font License (OFL)
LICENSE_FILE=	${WRKSRC}/OFL.txt
LICENSE_PERMS=	auto-accept

RUN_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig

USE_ZIP=	yes
NO_BUILD=	yes

PLIST_SUB=	FONTSDIR="${FONTSDIR:S|${PREFIX}/||}"
FONTSDIR=	${PREFIX}/lib/X11/fonts/${PORTNAME}
SUB_LIST=	FONTSDIR=${FONTSDIR}
SUB_FILES=	pkg-message

WRKSRC=		${WRKDIR}/${DISTNAME}.001

do-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/*.txt ${DOCSDIR}
.endif
	@${MKDIR} ${FONTSDIR}
	@${INSTALL_DATA} ${WRKSRC}/*.ttf ${FONTSDIR}

post-install:
	@${ECHO_MSG} "===> Running fc-cache"
	-${LOCALBASE}/bin/fc-cache -f -v ${FONTSDIR}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
