# Created by: ijliao
# $FreeBSD: ports/ftp/jftp/Makefile,v 1.24 2012/12/10 13:24:57 svnexp Exp $

PORTNAME=	jftp
PORTVERSION=	1.56
CATEGORIES=	ftp java
MASTER_SITES=	SF/j-ftp/${PORTNAME}/${PORTVERSION}
DISTNAME=	j-ftp-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java Network Browser

LICENSE=	GPLv2

RUN_DEPENDS=	java:${PORTSDIR}/java/javavmwrapper

JAVA_VERSION=	1.6+
NO_BUILD=	yes
USE_JAVA=	yes
WRKSRC=		${WRKDIR}/j-ftp

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
PLIST_DIRS=	%%DATADIR%%
PLIST_FILES=	bin/jftp %%DATADIR%%/jftp.jar
SUB_FILES=	jftp.sh

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_SCRIPT} ${WRKDIR}/jftp.sh ${PREFIX}/bin/jftp
	${INSTALL_DATA} ${WRKSRC}/build/jars/jftp.jar ${DATADIR}/

.include <bsd.port.mk>
