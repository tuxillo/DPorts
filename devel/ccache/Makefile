# Created by: Dominic Marks <d.marks@student.umist.ac.uk>
# $FreeBSD: ports/devel/ccache/Makefile,v 1.76 2013/01/15 13:46:53 svnexp Exp $

PORTNAME=	ccache
PORTVERSION=	3.1.9
CATEGORIES=	devel
MASTER_SITES=	http://www.samba.org/ftp/ccache/ CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A tool to minimize the compile time of C/C++ programs

LICENSE=	GPLv3

GNU_CONFIGURE=	yes

HOWTO=		ccache-howto-freebsd.txt
CCLINKDIR=	libexec/ccache
SUB_FILES=	${HOWTO} world-ccache pkg-message ccache-update-links.sh

MAN1=		ccache.1

PORTDOCS=	ccache-howto-freebsd.txt MANUAL.html

OPTIONS_DEFINE=	CLANGLINK LLVMLINK STATIC DOCS

CLANGLINK_DESC=	Create clang compiler links if clang is installed
LLVMLINK_DESC=	Create llvm compiler links if llvm is installed

.include <bsd.port.options.mk>

PLIST_SUB+=	CCLINKDIR="${CCLINKDIR}"

.if ${ARCH}=="i386"
CCACHE_COMPILERS+=	icc icpc
.endif

GNU_COMPILERS+=		34 42 43 44 45 46 47 48
CCACHE_COMPILERS+=	cc c++ gcc g++ ${GNU_COMPILERS:S|^|gcc|} ${GNU_COMPILERS:S|^|g++|}

.if ${PORT_OPTIONS:MCLANGLINK}
CCACHE_COMPILERS+=	clang clang++
.endif

.if ${PORT_OPTIONS:MLLVMLINK}
CCACHE_COMPILERS+=	llvm-gcc llvm-c++ llvm-g++
.endif

.if ${PORT_OPTIONS:MSTATIC}
LDFLAGS+=		"--static"
.endif

CCACHE_COMPILERS+=	${EXTRA_COMPILERS}
SUB_LIST+=	CCACHE_COMPILERS="${CCACHE_COMPILERS}" \
		CCLINKDIR="${CCLINKDIR}" \
		ICCPREFIX="${LOCALBASE}/intel_cc_80/bin" \
		HOWTO="${HOWTO}"

post-build:
.if !defined(TINDERBOX)
	@${MKDIR} ${WRKDIR}/tb/opt
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${WRKDIR}/tb/opt
.for l in ${CCACHE_COMPILERS}
	@${LN} -sf ${PORTNAME} ${WRKDIR}/tb/opt/${l}
.endfor
	@${TAR} -C ${WRKDIR}/tb -cpf ${WRKSRC}/${PORTNAME}.tar opt
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ccache ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${PREFIX}/man/man1
	@${MKDIR} ${PREFIX}/${CCLINKDIR}/world
	${INSTALL_SCRIPT} ${WRKDIR}/world-ccache \
		${PREFIX}/${CCLINKDIR}/world/ccache
	${INSTALL_SCRIPT} ${WRKDIR}/ccache-update-links.sh \
		${PREFIX}/bin/ccache-update-links
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.tar ${DATADIR}
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/MANUAL.html ${DOCSDIR}
	${INSTALL_DATA} ${WRKDIR}/${HOWTO} ${DOCSDIR}
.endif

post-install:
	@${ECHO_CMD} "Creating compiler links..."
	@${PREFIX}/bin/ccache-update-links -v
	@${CAT} ${PKGMESSAGE}
.if ${PORT_OPTIONS:MCLANGLINK}
	@${CAT} ${FILESDIR}/pkg-message-clang
.endif

.include <bsd.port.mk>
