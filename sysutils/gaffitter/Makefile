# ex:ts=8
# Ports collection makefile for:	gaffitter
# Date created:			13 Mar 2010
# Whom:				corky1951@comcast.net
#
# $FreeBSD: ports/sysutils/gaffitter/Makefile,v 1.3 2012/11/17 06:01:32 svnexp Exp $
#

PORTNAME=	gaffitter
PORTVERSION=	0.6.0
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A bin packing utility that uses a genetic algorithm

USE_BZIP2=	yes

.if !defined(NO_INSTALL_MANPAGES)
MAN1=		${PORTNAME}.1
.endif

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${PREFIX}/bin
.if !defined(NO_INSTALL_MANPAGES)
	${INSTALL_MAN} ${FILESDIR}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1
.endif

.include <bsd.port.mk>
