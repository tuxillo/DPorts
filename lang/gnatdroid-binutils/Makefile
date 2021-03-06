# New ports collection makefile for:	gnatdroid-binutils
# Date created:				2011-07-20
# Whom:					John Marino <draco@marino>
#
# $FreeBSD: ports/lang/gnatdroid-binutils/Makefile,v 1.3 2012/11/17 05:58:50 svnexp Exp $
#

PORTNAME=		binutils
PORTVERSION=		2.21.1
CATEGORIES=		lang
MASTER_SITES=		${MASTER_SITE_SOURCEWARE}
MASTER_SITE_SUBDIR=	binutils/releases
PKGNAMEPREFIX=		gnatdroid-

MAINTAINER=	draco@marino.st
COMMENT=	Infrastructure for C/Ada Android cross-compiler

BUILD_DEPENDS=	gnatdroid-sysroot>=9:${PORTSDIR}/lang/gnatdroid-sysroot \
		${LOCALBASE}/lib/libgmp.so:${PORTSDIR}/math/gmp \
		${LOCALBASE}/lib/libmpfr.so:${PORTSDIR}/math/mpfr
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	YES
USE_GCC=	any
USE_GMAKE=	YES
HAS_CONFIGURE=	YES
NO_MTREE=	YES
MAKE_JOBS_SAFE=	YES

WRKSRC=			${WRKDIR}/binutils-${PORTVERSION}
PREFIX=			${LOCALBASE}/android9
BRANCH1=		ARMv5
BRANCH2=		ARMv7
BR1_PREFIX=		${PREFIX}/${BRANCH1}
BR2_PREFIX=		${PREFIX}/${BRANCH2}
ARMTARGET=		arm-android-eabi
PLIST_SUB+=		TARGET="${ARMTARGET}"
PLIST_SUB+=		BRANCH1="${BRANCH1}"
PLIST_SUB+=		BRANCH2="${BRANCH2}"

CONFIGURE_ARGS+=	--target=${ARMTARGET}
CONFIGURE_ARGS+=	--prefix=${BR1_PREFIX}
CONFIGURE_ARGS+=	--with-sysroot=${PREFIX}
CONFIGURE_ARGS+=	--with-gmp=${LOCALBASE}
CONFIGURE_ARGS+=	--with-mpfr=${LOCALBASE}
CONFIGURE_ARGS+=	--disable-nls

post-install:
	${MKDIR} ${BR2_PREFIX}
	(cd ${BR1_PREFIX} && ${COPYTREE_BIN} \* ${BR2_PREFIX})

.include <bsd.port.mk>
