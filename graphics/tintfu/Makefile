# Created by: ijliao
# $FreeBSD: ports/graphics/tintfu/Makefile,v 1.9 2012/12/10 13:24:58 svnexp Exp $

PORTNAME=	tintfu
PORTVERSION=	0.0.4
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}_${PORTVERSION:S/./_/g}
EXTRACT_SUFX=	.jar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GraphViz .dot file editor

RUN_DEPENDS=	java:${PORTSDIR}/java/javavmwrapper

NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=	# empty
EXTRACT_AFTER_ARGS=	.
NO_BUILD=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+

PLIST_FILES=	%%JAVAJARDIR%%/${DISTNAME}.jar \
		bin/tintfu

SUB_FILES=	tintfu.sh
SUB_LIST=	DISTNAME=${DISTNAME}

do-install:
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME}.jar ${JAVAJARDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/tintfu.sh ${PREFIX}/bin/tintfu

.include <bsd.port.mk>
