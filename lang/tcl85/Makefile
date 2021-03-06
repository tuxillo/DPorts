# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: ports/lang/tcl85/Makefile,v 1.48 2013/02/07 11:56:32 svnexp Exp $

PORTNAME=	tcl
PORTVERSION=	8.5.13
CATEGORIES=	lang
MASTER_SITES=	SF/tcl/Tcl/${PORTVERSION}
DISTNAME=	tcl${PORTVERSION}-src

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Tool Command Language

LICENSE=	BSD

OPTIONS_DEFINE=	TCLMAN TZDATA MODULES THREADS
OPTIONS_DEFAULT=MODULES THREADS
TCLMAN_DESC=	Install Tcl function manpages
TZDATA_DESC=	Install Tcl timezone data
MODULES_DESC=	Install Tcl common modules

WRKSRC=		${WRKDIR}/${DISTNAME:S/-src//}/unix
ALL_TARGET=	all
INSTALL_TARGET=	install install-libraries

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared \
		--enable-man-suffix=.${MAN_SUFFIX} \
		--includedir=${PREFIX}/include/tcl${TCL_VER}
CONFIGURE_ENV=	PORTSDIR=${PORTSDIR}

TCL_VER=	8.5
SHORT_TCL_VER=	${TCL_VER:S/8./8/}
LATEST_LINK=	${PORTNAME}${SHORT_TCL_VER}
MAN_SUFFIX=	${LATEST_LINK}

MAKE_ENV=	SHORT_TCL_VER=${SHORT_TCL_VER} \
		MAN_SUFFIX=.${MAN_SUFFIX} \
		LANG=C LC_ALL=C	# LANG=C is required for some of UTF-using tests

PLIST_SUB=	TCL_VER=${TCL_VER} \
		SHORT_TCL_VER=${SHORT_TCL_VER}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MTCLMAN}
INSTALL_TARGET+=install-doc
.include "${.CURDIR}/Makefile.man"
.endif

.if ${PORT_OPTIONS:MTHREADS}
CONFIGURE_ARGS+=	--enable-threads
.else
CONFIGURE_ARGS+=	--disable-threads
.endif

.if ${PORT_OPTIONS:MMODULES}
INSTALL_TARGET+=install-tm
PLIST_SUB+=	MODULES=""
.else
PLIST_SUB+=	MODULES="@comment "
.endif

.if ${PORT_OPTIONS:MTZDATA}
PLIST_SUB+=		TZDATA=""
CONFIGURE_ARGS+=--with-tzdata
INSTALL_TARGET+=install-tzdata
.else
PLIST_SUB+=		TZDATA="@comment "
CONFIGURE_ARGS+=--without-tzdata
.endif

post-configure:
	${REINPLACE_CMD} \
		-e 's,-DNO_MEMMOVE=1,,' -e 's,-DNO_STRING_H=1,,' \
		-e 's,^COMPAT_OBJS.*,,' ${WRKSRC}/Makefile

regression-test:	build
	cd ${WRKSRC} && LC_ALL=C ${MAKE} test

.include <bsd.port.mk>
