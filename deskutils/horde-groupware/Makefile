# Ports collection makefile for:  horde-groupware
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/horde-groupware/Makefile,v 1.3 2013/01/10 18:34:39 svnexp Exp $

PORTNAME=	groupware
PORTVERSION=	5.0.3
CATEGORIES=	deskutils www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Groupware

CONFLICTS=	horde-webmail-[456]*

LATEST_LINK=	horde-${PORTNAME}

USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		content \
		horde \
		kronolith \
		mnemo \
		nag \
		timeobjects \
		turba

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
