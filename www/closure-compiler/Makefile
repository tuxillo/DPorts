# New ports collection makefile for:	closure-compiler
# Date created:		2009-11-14
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/closure-compiler/Makefile,v 1.11 2012/11/17 06:02:30 svnexp Exp $
#

PORTNAME=	closure-compiler
PORTVERSION=	20120430
CATEGORIES=	www java
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	compiler-${PORTVERSION}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Closure Compiler

LICENSE=	AL2

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
SUB_FILES=	closure-compiler
SUB_LIST=	JAVA="${JAVA}"
USE_JAVA=	yes

PLIST_DIRSTRY=	%%DATADIR%%
PLIST_FILES=	bin/closure-compiler \
		%%DATADIR%%/compiler.jar

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/compiler.jar ${DATADIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/closure-compiler ${PREFIX}/bin/

.include <bsd.port.mk>
