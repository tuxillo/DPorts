# New ports collection makefile for:	libgda4-bdb
# Date created:				28 February 2009
# Whom:					Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/databases/libgda4-bdb/Makefile,v 1.9 2012/11/17 05:55:09 svnexp Exp $
#

PORTREVISION?=	1
CATEGORIES=	databases gnome
PKGNAMESUFFIX?=	-bdb

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Provides Berkeley DB backend for the libgda4 library

MASTERDIR=	${.CURDIR}/../libgda4
BUILD_WRKSRC=	${WRKSRC}/providers/bdb/
INSTALL_WRKSRC=	${BUILD_WRKSRC}
PLIST=		${.CURDIR}/pkg-plist

LIBGDA4_SLAVE=	bdb

.include "${MASTERDIR}/Makefile"
