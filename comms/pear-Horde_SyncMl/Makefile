# Ports collection makefile for:  pear-Horde_SyncMl
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/comms/pear-Horde_SyncMl/Makefile,v 1.10 2012/12/12 15:19:46 svnexp Exp $

PORTNAME=	Horde_SyncMl
PORTVERSION=	2.0.1
CATEGORIES=	comms www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde API for processing SyncML requests

USE_HORDE_RUN=	Horde_Date \
		Horde_Icalendar \
		Horde_Log \
		Horde_Support \
		Horde_Util \
		Horde_Xml_Wbxml \
		Horde_Translation \

# optional but we want it
USE_HORDE_RUN+= Horde_Auth \
		Horde_Core

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>