# Ports collection makefile for:  thcrut
# Date created:			  23 Aug 2001
# Whom:				  Kris Kennaway <kris@FreeBSD.org>
#
# $FreeBSD: ports/net/thcrut/Makefile,v 1.11 2012/11/17 06:00:23 svnexp Exp $
#

PORTNAME=	thcrut
PORTVERSION=	1.2.5
CATEGORIES=	net
MASTER_SITES=	http://thc.org/releases/ \
		http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Local network discovery tool

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--with-libnet=${LOCALBASE} \
		 	--sysconfdir=${DATADIR}

.include <bsd.port.mk>
