# New ports collection makefile for:	libjcode
# Date created:		8 MAY 1999
# Whom:			Shuichi Tanaka
#
# $FreeBSD: ports/japanese/libjcode/Makefile,v 1.8 2012/11/17 05:58:36 svnexp Exp $
#

PORTNAME=	libjcode
PORTVERSION=	1.00
CATEGORIES=	japanese net
MASTER_SITES=	http://keemun.soraneko.com/gtkicq/archives/
DISTNAME=	${PORTNAME}

MAINTAINER=	stanaka@bb.mbn.or.jp
COMMENT=	Japanese charset conversion library

WRKSRC=		${WRKDIR}/${DISTNAME}-${PORTVERSION}

do-install:
	${INSTALL_DATA}	${WRKSRC}/libjcode.a	${PREFIX}/lib/libjcode.a
	${INSTALL_DATA}	${WRKSRC}/jlib.h	${PREFIX}/include/jlib.h

.include <bsd.port.mk>
