# Created by: olgeni
# $FreeBSD: ports/lang/clojure-contrib/Makefile,v 1.5 2012/12/10 13:24:59 svnexp Exp $

PORTNAME=	clojure-contrib
PORTVERSION=	1.2.0
CATEGORIES=	lang lisp java
MASTER_SITES=	http://cloud.github.com/downloads/clojure/clojure-contrib/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Extensions and enhancements to the Clojure libraries

BUILD_DEPENDS=	${LOCALBASE}/bin/clojure:${PORTSDIR}/lang/clojure

USE_ZIP=	yes
USE_JAVA=	yes
NO_BUILD=	yes
JAVA_VERSION=	1.6+

PLIST_FILES=	%%JAVAJARDIR%%/clojure-contrib-1.2.0.jar

do-install:
	@${INSTALL_DATA} ${WRKSRC}/target/clojure-contrib-1.2.0.jar ${JAVAJARDIR}

.include <bsd.port.mk>
