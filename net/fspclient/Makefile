# New ports collection makefile for:	fspclient
# Date created:		7 Nov 1994
# Whom:			ache
#
# $FreeBSD: ports/net/fspclient/Makefile,v 1.36 2012/11/17 06:00:00 svnexp Exp $
#

PORTNAME=	fspclient
PORTVERSION=	0.93.0
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	cy@FreeBSD.org
COMMENT=	A ftp-like client for the FSP service

USE_BZIP2=	yes
USE_SCONS=	yes
SCONS_ARGS=	prefix=${PREFIX}

MAN1=		fsp.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/fsp

.include <bsd.port.pre.mk>

.include <bsd.port.post.mk>
