# New ports collection makefile for:	pidgin-fetion
# Date created:				17 October 2008
# Whom:					Alexander Logvinov <ports@logvinov.com>
#
# $FreeBSD: ports/net-im/pidgin-fetion/Makefile,v 1.17 2012/11/17 06:00:28 svnexp Exp $
#

PORTNAME=	fetion
PORTVERSION=	0.98.5.2
PORTREVISION=	4
CATEGORIES=	net-im
MASTER_SITES=	http://www.logvinov.ru/files/dist/fetion/ \
		LOCAL/avl
PKGNAMEPREFIX=	pidgin-

MAINTAINER=	avl@FreeBSD.org
COMMENT=	Fetion protocol plugin for libpurple

LIB_DEPENDS=	purple.10:${PORTSDIR}/net-im/libpurple

MAKE_JOBS_SAFE=	yes

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

.include <bsd.port.mk>
