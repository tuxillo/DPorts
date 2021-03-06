# New ports collection makefile for:    lapack
# Date created:         2 July 1994
# Whom:                 jmz
#
# $FreeBSD: ports/math/lapack/Makefile,v 1.61 2013/01/05 12:47:44 svnexp Exp $
#

PORTNAME?=	lapack
PORTVERSION=	3.4.2
CATEGORIES=	math
MASTER_SITES=	NL/lapack/
DISTFILES=	lapack-${PORTVERSION}.tgz
.if make(makesum) || !(defined(BLAS_SLAVEPORT) || defined(XLAPACK_SLAVEPORT))
DISTFILES+=		manpages-${PORTVERSION}.tgz
.endif
DIST_SUBDIR=	lapack

MAINTAINER?=	maho@FreeBSD.org
COMMENT?=	A library of Fortran 77 subroutines for linear algebra

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_FORTRAN=	yes

OPTIONS=	PROFILE "Build profiling libraries" Off \
		SHARED	"Build shared libraries and PIC archives" On \
		STATIC	"Build (non-PIC) archives" On

MAKE_ENV=	BLASLIB="${BLASLIB}"
MAKE_JOBS_SAFE=	yes
PLIST_SUB=	SVERSION="${SVERSION}"

WRKSRC =		${WRKDIR}/lapack-${PORTVERSION}
WRKSRC_PROFILE =	${WRKSRC}_PROFILE
WRKSRC_SHARED=		${WRKSRC}_SHARED
WRKSRC_STATIC=		${WRKSRC}

.include <bsd.port.options.mk>

.if defined(BLAS_SLAVEPORT)
ALL_TARGET=		blaslib
BLASLIB=		../../libblas.a
LIBS=			blas
PLIST_SUB+=		BLAS="" LAPACK="@comment " XLAPACK="@comment "
SVERSION=		2
TEST_TARGET=		blas_testing
.else
ALL_TARGET=		lib
BLASLIB?=		-L${LOCALBASE}/lib -lblas
LIB_DEPENDS+=		blas.2:${PORTSDIR}/math/blas
LIBS=			lapack tmglib
SVERSION=		4
TEST_TARGET=		lapack_testing
.if defined(MAINTAINER_MODE) || defined(PACKAGE_BUILDING)
S=			${PYTHON_CMD}
USE_PYTHON_BUILD=	yes
.else
S=			\#
.endif
.if defined(XLAPACK_SLAVEPORT)
LIB_DEPENDS+=		xblas.0:${PORTSDIR}/math/xblas
MAKE_ENV+=		USEXBLAS=yes XBLASLIB="${XBLASLIB}"
P=			x
PLIST_SUB+=		BLAS="@comment " LAPACK="@comment " XLAPACK=""
XBLASLIB?=		-L${LOCALBASE}/lib -lxblas
.else
PLIST_SUB+=		BLAS="@comment " LAPACK="" XLAPACK="@comment "
.if defined(MAINTAINER_MODE)
BUILD_DEPENDS +=	doxygen:${PORTSDIR}/devel/doxygen
MAN_TARGET=		build-manpages
.endif
.endif
.endif

.if ${ARCH} == "sparc64"
PICFLAG?=	-fPIC
.else
PICFLAG?=	-fpic
.endif

FFLAGS_PROFILE?=	-pg
FFLAGS_SHARED ?=	${PICFLAG}

.if defined(WITH_PROFILE) && !exists(/usr/lib/libc_p.a)
IGNORE=	you have chosen WITH_PROFILE, but have not installed the\
base system profiling libraries
.endif

.if defined(WITH_SHARED)
USE_LDCONFIG=	yes
.endif

.for o in PROFILE SHARED STATIC
.if defined(WITH_${o})
PLIST_SUB+=	${o}=""
.else
PLIST_SUB+=	${o}="@comment "
.endif
.endfor

post-patch:
	@${SED} -Ee '\
		s@^(FORTRAN|LOADER)([[:blank:]]*=)(.*)@\1\2 $${FC}@; \
		s@^(OPTS[[:blank:]]*=)(.*)@\1 $${FFLAGS} $${EXTRAFLAGS}@; \
		s@^NOOPT[[:blank:]]*=.*@& $${EXTRAFLAGS}@; \
		s@^(LOADOPTS[[:blank:]]*=)(.*)@\1 $${LDFLAGS} $${EXTRAFLAGS}@; \
		\@(BLAS|RAN)LIB[[:blank:]]*=@d;' \
			${WRKSRC}/make.inc.example > ${WRKSRC}/make.inc
	@${REINPLACE_CMD} -e 's@\./lapack_testing\.py@${S} &@' \
		${WRKSRC}/Makefile
.for o in PROFILE SHARED
.if defined(WITH_${o})
	@${CP} -a ${WRKSRC} ${WRKSRC_${o}}
.endif
.endfor

do-build: ${MAN_TARGET} build-profile build-shared build-static

.for o in PROFILE SHARED STATIC
build-${o:tl}: patch
.if defined(WITH_${o})
	${PRINTF} "\n\nBuilding ${o:tl} libraries:\n\n\n"
	cd ${WRKSRC_${o}}; ${SETENV} ${MAKE_ENV} EXTRAFLAGS="${FFLAGS_${o}}" \
	${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} ARCH="${AR}" ${ALL_TARGET}

.endif
.endfor

.if defined (MAINTAINER_MODE)
build-manpages: patch
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} \
	${MAKE_ARGS} man

.endif

post-build:
.if defined(WITH_SHARED)
.for L in ${LIBS}
	cd ${WRKSRC_SHARED} ; ${FC} ${FFLAGS} ${FFLAGS_SHARED} ${LDFLAGS} -shared \
	-o lib${P}${L}.so.${SVERSION} -Wl,-x -Wl,-soname,lib${P}${L}.so.${SVERSION} \
	-Wl,--whole-archive lib${L}.a -Wl,--no-whole-archive
.endfor
.endif

.if defined(WITH_SHARED)
TESTS ?=	test-shared
.elif defined(WITH_STATIC)
TESTS ?=	test-static
.elif defined(WITH_PROFILE)
TESTS ?=	test-profile
.endif

check regression-test test: ${TESTS}

.for o in PROFILE SHARED STATIC
test-${o:tl}: build-${o:tl}
.if defined(WITH_${o})
	@${PRINTF} "\n\nTesting ${o:tl} libraries:\n\n\n"
	@cd ${WRKSRC_${o}}; ${SETENV} ${MAKE_ENV} EXTRAFLAGS="${FFLAGS_${o}}" \
	${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} ARCH="${AR}" ${TEST_TARGET}
.if defined(BLAS_SLAVEPORT)
	@${CAT} ${WRKSRC_${o}}/BLAS/*.out
.endif

.endif
.endfor

do-install:
.for L in ${LIBS}
.if defined(WITH_STATIC)
	@${INSTALL_DATA} ${WRKSRC}/lib${L}.a ${PREFIX}/lib/lib${P}${L}.a
.endif
.if defined(WITH_SHARED)
	@${INSTALL_DATA} ${WRKSRC_SHARED}/lib${L}.a ${PREFIX}/lib/lib${P}${L}_pic.a
	@${INSTALL_DATA} ${WRKSRC_SHARED}/lib${P}${L}.so.${SVERSION} ${PREFIX}/lib
	@${LN} -sf lib${P}${L}.so.${SVERSION} ${PREFIX}/lib/lib${P}${L}.so
.endif
.if defined(WITH_PROFILE)
	@${INSTALL_DATA} ${WRKSRC_PROFILE}/lib${L}.a ${PREFIX}/lib/lib${P}${L}_p.a
.endif
.endfor

.include  <bsd.port.pre.mk>

.if !(defined(BLAS_SLAVEPORT) || defined(XLAPACK_SLAVEPORT))

.include "${FILESDIR}/manpages"

post-install:
	@cd ${WRKDIR}/man ; ${ECHO_CMD} ${MAN3:S|^|man3/|} \
	| ${XARGS} -J @ ${INSTALL_MAN} @ ${MAN3PREFIX}/man/man3

.if defined(MAINTAINER_MODE)
package-manpages: build-manpages
	@${RM} -f ${WRKDIR}/lapack-manpages-${PORTVERSION}.tar.gz ; \
	cd ${WRKSRC}/DOCS/man; \
	${TAR} -czvf ${WRKDIR}/lapack-manpages-${PORTVERSION}.tar.gz \
	${MAN3:S|^|man3/|}

.endif
.endif
.include <bsd.port.post.mk>
