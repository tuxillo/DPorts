# Created by: Nicola Vitale	<nivit@email.it>
# $FreeBSD: ports/graphics/jdraw/Makefile,v 1.9 2012/12/10 13:24:58 svnexp Exp $

PORTNAME=	jdraw
PORTVERSION=	1.1.5
PORTREVISION=	2
CATEGORIES=	graphics java
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
DISTNAME=	${PORTNAME}_v${PORTVERSION}
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A pixel oriented graphics editor

NO_BUILD=	yes
USE_JAVA=	yes

OPTIONS=	PLASTIC3D "Use Plastic3DLook&Feel" on

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
SUB_FILES=	${PORTNAME}
SUB_LIST=	JAVA_VERSION=${JAVA_VERSION} JDRAWJAR=${JDRAWJAR} PLASTIC3D=${PLASTIC3D}

JDRAWJAR=	${DATADIR}/${DISTFILES}

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${DISTDIR}/${DISTFILES} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.pre.mk>

.if defined(WITH_PLASTIC3D)
PLASTIC3D=	"-Dlf=\"com.jgoodies.looks.plastic.Plastic3DLookAndFeel\""
RUN_DEPENDS+=	${JAVAJARDIR}/looks.jar:${PORTSDIR}/devel/looks
.endif
JAVA_VERSION=	1.6+

.include <bsd.port.post.mk>
