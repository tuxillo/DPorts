# New ports collection makefile for:	amanda
# Date created:				28th Feb 1995
# Whom:					gpalmer
#
# $FreeBSD: ports/misc/amanda-client/Makefile,v 1.69 2012/11/17 05:59:32 svnexp Exp $
#

PKGNAMESUFFIX=	-client
PORTREVISION=	0

COMMENT=	The Advanced Maryland Automatic Network Disk Archiver (client)

MASTERDIR=	${.CURDIR}/../amanda-server
PKGINSTALL=	mustnotexist

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
