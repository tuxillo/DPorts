# New ports collection makefile for:	libgda2
# Date created:				02 June 2002
# Whom:					Joe Marcus Clarke <marcus@FreeBSD.org>
#
# $FreeBSD: ports/databases/libgda4-postgresql/Makefile,v 1.8 2012/11/17 05:55:09 svnexp Exp $
#   $MCom: ports/databases/libgda4-postgresql/Makefile,v 1.3 2010/10/18 12:47:12 kwm Exp $
#

PORTREVISION?=	1
CATEGORIES=	databases gnome
PKGNAMESUFFIX?=	-postgresql

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Provides postgresql access for the libgda4 library

MASTERDIR=	${.CURDIR}/../libgda4
BUILD_WRKSRC=	${WRKSRC}/providers/postgres/
INSTALL_WRKSRC=	${BUILD_WRKSRC}
PLIST=		${.CURDIR}/pkg-plist

LIBGDA4_SLAVE=	postgresql

.include "${MASTERDIR}/Makefile"
