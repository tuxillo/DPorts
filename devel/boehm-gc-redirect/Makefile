# New ports collection makefile for:	boehm-gc-redirect
# Date created:		12/17/2009
# Whom:			stas
#
# $FreeBSD: ports/devel/boehm-gc-redirect/Makefile,v 1.6 2012/11/17 05:55:35 svnexp Exp $
#

PORTNAME=	boehm-gc
PORTVERSION=	7.1
CATEGORIES=	devel
MASTER_SITES=	http://www.hpl.hp.com/personal/Hans_Boehm/gc/gc_source/
PKGNAMESUFFIX=	-${GC_VARIANT}
DISTNAME=	gc-${PORTVERSION:S/.a/alpha/}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Garbage collection and memory leak detection for C and C++

RUN_DEPENDS=	${PREFIX}/include/gc/gc.h:${PORTSDIR}/devel/boehm-gc

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-cplusplus --disable-static --disable-threads \
		--enable-redirect-malloc
CONFIGURE_ENV=	CFLAGSS="${CFLAGS} LIBS="${LIBS}
MAKE_JOBS_UNSAFE=	yes
INSTLIBS=	cord gc gccpp
GC_VARIANT=	redirect
SOVER=	1

OPTIONS_DEFINE=	DEBUG

PLIST_FILES=	${INSTLIBS:S,^,lib/lib,g:S,$,-${GC_VARIANT}.so.${SOVER},g} \
		${INSTLIBS:S,^,lib/lib,g:S,$,-${GC_VARIANT}.so,g}

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64"
BROKEN=	Does not compile on ia64
.endif

.if ${PORT_OPTIONS:MDEBUG}
CONFIGURE_ARGS+=	--enable-gc-debug
PKGNAMESUFFIX:=	${PKGNAMESUFFIX}+fulldebug
.endif

post-patch:
	${REINPLACE_CMD} -E -e 's,libgc\.la,libgc-${GC_VARIANT}.la,g' \
		-e 's,libgccpp\.la,libgccpp-${GC_VARIANT}.la,g' \
		-e 's,libcord\.la,libcord-${GC_VARIANT}.la,g' \
		${WRKSRC}/Makefile.in

do-install:
.for LIB in ${INSTLIBS}
	${INSTALL_DATA} ${WRKSRC}/.libs/lib${LIB}-${GC_VARIANT}.so.${SOVER} \
	    ${PREFIX}/lib/lib${LIB}-${GC_VARIANT}.so.${SOVER}
	@(cd ${PREFIX}/lib && ${LN} -s lib${LIB}-${GC_VARIANT}.so.${SOVER} \
	    lib${LIB}-${GC_VARIANT}.so)
.endfor

test: build
	cd ${WRKSRC} && ${MAKE} check

.include <bsd.port.post.mk>
