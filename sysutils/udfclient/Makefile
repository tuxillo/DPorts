# New ports collection makefile for:   udfclient
# Date created:        3 January 2005
# Whom:                Andriy Gapon <avg@icyb.net.ua>
#
# $FreeBSD: ports/sysutils/udfclient/Makefile,v 1.23 2012/12/14 15:53:09 svnexp Exp $
#

PORTNAME=	udfclient
PORTVERSION=	0.7.5
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.13thmonkey.org/udfclient/releases/ \
		${MASTER_SITE_NETBSD} \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	miwi
DISTFILES=	UDFclient.${PORTVERSION}.tgz

MAINTAINER=	avg@icyb.net.ua
COMMENT=	Tools for UDF filesystem

WRKSRC=		${WRKDIR}/UDFclient.${PORTVERSION}

GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	with_pthread_cflags="${PTHREAD_CFLAGS}" \
		with_thread_libs="${PTHREAD_LIBS}"
MAKE_ARGS+=	INSTALL="${INSTALL_PROGRAM}"

OPTIONS=	FUSE	"udfclientfs via FUSE"	off \
		DEBUG	"build with debug support" off

PLIST_FILES=	bin/udfdump \
		bin/udfclient \
		bin/newfs_udf \
		bin/cd_sessions \
		bin/cd_disect \
		bin/mmc_format

.include <bsd.port.options.mk>

.if defined(WITH_FUSE)
UDFCLIENTFS_NAME=	udfclientfs
UDFCLIENTFS_VERSION=	0.4
UDFCLIENTFS_DIR=	${WRKDIR}/udfclientfs

MASTER_SITES+=	http://www.icyb.net.ua/~avg/distfiles/:fuse
DISTFILES+=	${UDFCLIENTFS_NAME}-${UDFCLIENTFS_VERSION}.tgz:fuse
EXTRA_PATCHES+=	${UDFCLIENTFS_DIR}/${UDFCLIENTFS_NAME}.patch

USE_FUSE=	yes

PLIST_FILES+=	bin/${UDFCLIENTFS_NAME}
.endif

.if defined(WITH_DEBUG)
CFLAGS+=	-O0 -ggdb3
.endif

post-patch:
.if defined(WITH_FUSE)
	${CP} ${UDFCLIENTFS_DIR}/${UDFCLIENTFS_NAME}.c ${WRKSRC}
.endif

.include <bsd.port.mk>
