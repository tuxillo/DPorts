# Ports collection makefile for:  pear-Horde_Rpc
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/net/pear-Horde_Rpc/Makefile,v 1.9 2012/12/27 05:51:55 svnexp Exp $

PORTNAME=	Horde_Rpc
PORTVERSION=	2.0.2
CATEGORIES=	net www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde RPC API

USE_HORDE_RUN=	Horde_Core \
		Horde_Exception \
		Horde_Perms \
		Horde_Serialize \
		Horde_Support \
		Horde_Translation \
		Horde_Util \
		Horde_Xml_Element

# Optional but we want it
USE_HORDE_RUN+=	Horde_ActiveSync \
		Horde_Lock \
		Horde_SyncMl \
		Horde_Http

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
