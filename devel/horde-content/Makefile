# Ports collection makefile for:  horde-content
# Date created:			  7 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/devel/horde-content/Makefile,v 1.2 2012/12/18 13:28:40 svnexp Exp $
#

PORTNAME=	content
PORTVERSION=	2.0.1
CATEGORIES=	devel www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde tagging application

LATEST_LINK=	horde-${PORTNAME}

USE_PHP=	gettext json
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		Horde_Core \
		Horde_Date \
		Horde_Exception \
		Horde_Db \
		Horde_Injector \
		Horde_Rdo \
		Horde_Util

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
