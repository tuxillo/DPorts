# New ports collection makefile for:	libopensync-plugin-file
# Date created:				6 November 2008
# Whom:					Alex Samorukov <samm@os2.kiev.ua>
#
# $FreeBSD: ports/deskutils/libopensync-plugin-file/Makefile,v 1.2 2012/11/17 05:55:29 svnexp Exp $
#

PORTNAME=	libopensync-plugin-file
PORTVERSION=	0.22
CATEGORIES=	deskutils
MASTER_SITES=	http://www.opensync.org/download/releases/${PORTVERSION}/

MAINTAINER=	samm@os2.kiev.ua
COMMENT=	File-Sync plugin for the opensync framework

LIB_DEPENDS=	opensync.0:${PORTSDIR}/devel/libopensync022

USE_BZIP2=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
