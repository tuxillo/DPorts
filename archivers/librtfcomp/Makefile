# New ports collection makefile for:	librtfcomp
# Date Created:				13 June 2008
# Whom:					Alexander Logvinov <ports@logvinov.com>
#
# $FreeBSD: ports/archivers/librtfcomp/Makefile,v 1.9 2012/11/17 05:54:21 svnexp Exp $
#

PORTNAME=	librtfcomp
PORTVERSION=	1.1
CATEGORIES?=	archivers
MASTER_SITES=	SF/synce/SynCE/0.10.0

MAINTAINER=	avl@FreeBSD.org
COMMENT?=	LZRTF compression library

MAKE_JOBS_SAFE=	yes

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

.if defined(RTFCOMP_SLAVE) && ${RTFCOMP_SLAVE} == "pythonb"
CONFIGURE_ARGS=	--enable-python-bindings
.else
CONFIGURE_ARGS=	--disable-python-bindings
.endif

.include <bsd.port.post.mk>
