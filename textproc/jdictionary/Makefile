# Created by: janos.mohacsi@bsd.hu
# $FreeBSD: ports/textproc/jdictionary/Makefile,v 1.13 2012/12/10 13:48:08 svnexp Exp $

PORTNAME=	jdictionary
PORTVERSION=	1.8
PORTREVISION=	4
CATEGORIES=	textproc java
MASTER_SITES=	SF/jdictionary/jDictionary/jDictionary%20version%20${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION:S,.,_,}

MAINTAINER=	janos.mohacsi@bsd.hu
COMMENT=	Platform independent, plugin based dictionary

RUN_DEPENDS=	java:${PORTSDIR}/java/javavmwrapper

USE_JAVA=	yes
JAVA_VERSION=	1.6+

USE_ZIP=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
SUB_FILES=	jdictionary.sh

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/jdictionary.jar ${DATADIR}/
	${INSTALL_SCRIPT} ${WRKDIR}/jdictionary.sh ${PREFIX}/bin/jdictionary

.include <bsd.port.mk>
