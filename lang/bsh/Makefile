# Created by: Kimura Fuyuki <fuyuki@mj.0038.net>
# $FreeBSD: ports/lang/bsh/Makefile,v 1.27 2012/12/10 13:24:59 svnexp Exp $

PORTNAME=	bsh
PORTVERSION=	2.0.b4
PORTREVISION=	6
CATEGORIES=	lang java
MASTER_SITES=	http://www.beanshell.org/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.b/b/}
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=

MAINTAINER=	simon@olofsson.de
COMMENT=	A Java scripting language

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

SUB_FILES=	${PORTNAME}.sh
SUB_LIST=	JARNAME=${PORTNAME}.jar

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar \
		bin/${PORTNAME}

do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTFILES} ${JAVAJARDIR}/${PORTNAME}.jar
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
