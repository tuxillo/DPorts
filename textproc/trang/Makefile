# Created by: Kimura Fuyuki <fuyuki@nigredo.org>
# $FreeBSD: ports/textproc/trang/Makefile,v 1.10 2012/12/10 13:48:08 svnexp Exp $

PORTNAME=	trang
PORTVERSION=	2008.10.28
CATEGORIES=	textproc java
MASTER_SITES=	http://jing-trang.googlecode.com/files/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.//g}

MAINTAINER=	gabor@FreeBSD.org
COMMENT=	Multi-format schema converter based on RELAX NG

USE_ZIP=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

.if !defined(NOPORTDOCS)
PORTDOCS=	copying.txt trang-manual.html
.endif

SUB_FILES=	trang.sh
PLIST_FILES=	%%JAVAJARDIR%%/trang.jar bin/trang

do-install:
	${INSTALL_DATA} ${WRKSRC}/trang.jar ${JAVAJARDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/trang.sh ${PREFIX}/bin/trang
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}; ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
