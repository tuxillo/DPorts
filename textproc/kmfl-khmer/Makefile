# New ports collection makefile for:	kmfl-khmer
# Date created:		12 May 2011
# Whom:			Kuan-Chung Chiu <buganini@gmail.com>
#
# $FreeBSD: ports/textproc/kmfl-khmer/Makefile,v 1.5 2012/11/17 06:02:00 svnexp Exp $

PORTNAME=	khmer
PORTVERSION=	1.0
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/buganini/kmfl-${PORTNAME}/tarball/${PORTVERSION}/
PKGNAMEPREFIX=	kmfl-
DISTNAME=	buganini-${PORTNAME}-${PORTVERSION}-0-g${GITVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	KMFL SCIM IMEngine keyboard for Khmer language

RUN_DEPENDS=	kmflcomp:${PORTSDIR}/textproc/kmflcomp

GITVERSION=	a20cc89
FETCH_ARGS=	-pRr
WRKSRC=		${WRKDIR}/buganini-kmfl-${PORTNAME}-${GITVERSION}/kmfl
NO_BUILD=	yes

KMFL_DIR=	share/kmfl
KMFL_ICONS_DIR=	share/kmfl/icons

PLIST_FILES=	${KMFL_DIR}/khmer.kmn \
		${KMFL_ICONS_DIR}/khmer.bmp
PLIST_DIRSTRY=	${KMFL_ICONS_DIR} \
		${KMFL_DIR}

do-install:
	${MKDIR} ${PREFIX}/${KMFL_ICONS_DIR}
	${INSTALL_DATA} ${WRKSRC}/*.kmn ${PREFIX}/${KMFL_DIR}
	${INSTALL_DATA} ${WRKSRC}/*.bmp ${PREFIX}/${KMFL_ICONS_DIR}

.include <bsd.port.mk>
