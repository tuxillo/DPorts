# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: ports/devel/netscape-java40/Makefile,v 1.8 2012/12/10 11:29:54 svnexp Exp $

PORTNAME=	netscape-java40
PORTVERSION=	1999.11.15
PORTREVISION=	2
CATEGORIES=	devel java
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	thierry
DISTNAME=	${PORTNAME}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Classes to allow a Java applet access to JavaScript objects

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

JARFILES=	java40.jar LICENSE.java40.txt

PLIST_FILES=	${JARFILES:S|^|%%JAVAJARDIR%%/|}

post-extract:
	${MV} ${WRKSRC}/License ${WRKSRC}/LICENSE.java40.txt

do-install:
	${INSTALL_DATA} ${JARFILES:S|^|${WRKSRC}/|} ${JAVAJARDIR}

.include <bsd.port.mk>
