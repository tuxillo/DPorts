# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: ports/www/yuicompressor/Makefile,v 1.10 2012/12/10 13:48:09 svnexp Exp $

PORTNAME=	yuicompressor
PORTVERSION=	2.4.7
CATEGORIES=	www java
MASTER_SITES=	http://yui.zenfs.com/releases/yuicompressor/

MAINTAINER=	skv@FreeBSD.org
COMMENT=	The Yahoo! JavaScript and CSS Compressor

USE_ZIP=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

PLIST_FILES=	bin/yuicompressor %%DATADIR%%/yuicompressor.jar
PLIST_DIRS=	%%DATADIR%%
SUB_FILES=	yuicompressor

PORTDOCS=	README

.include <bsd.port.pre.mk>

do-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/build/yuicompressor-${PORTVERSION}.jar ${DATADIR}/yuicompressor.jar
	${INSTALL_SCRIPT} ${WRKDIR}/yuicompressor ${PREFIX}/bin

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/README ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
