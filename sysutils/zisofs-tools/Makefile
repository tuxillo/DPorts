# New ports collection makefile for:	zisofs-tools
# Date created:				24 Nov 2003
# Whom:					Nosov Artem <chip-set@mail.ru>
#
# $FreeBSD: ports/sysutils/zisofs-tools/Makefile,v 1.15 2012/11/17 06:01:51 svnexp Exp $
#

PORTNAME=	zisofs-tools
PORTVERSION=	1.0.8
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_KERNEL_ORG}
MASTER_SITE_SUBDIR=	linux/utils/fs/zisofs

MAINTAINER=	chip-set@mail.ru
COMMENT=	User utilities for zisofs

PORTDOCS=	CHANGES COPYING INSTALL MRULES README

USE_AUTOTOOLS=	autoconf
USE_BZIP2=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

MAKE_ARGS+=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include"

MAN1=		mkzftree.1

PLIST_FILES=	bin/mkzftree

OPTIONS=	LFS "Enable Large Files Support" on

.if defined(WITHOUT_LFS)
CONFIGURE_ARGS+=	--disable-largefile
.endif

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
