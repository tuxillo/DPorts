# New ports collection makefile for:   uim-kde
# Date created:        10 March 2007
# Whom:                MANTANI Nobutaka <nobutaka@FreeBSD.org>
#
# $FreeBSD: ports/textproc/uim-kde/Makefile,v 1.12 2012/11/17 06:02:24 svnexp Exp $
#

PKGNAMESUFFIX=	-kde

COMMENT=	KDE panel applet of uim input method

LIB_DEPENDS=	uim.8:${PORTSDIR}/textproc/uim
RUN_DEPENDS=	uim-pref-qt:${PORTSDIR}/textproc/uim-qt

USE_GCC=	4.2+
USE_KDELIBS_VER=3
USE_QT_VER=	3
USE_AUTOTOOLS=	libtool

MASTERDIR=	${.CURDIR}/../../textproc/uim
PKGDIR=		${.CURDIR}
CONFIGURE_ARGS=	--with-qt --enable-pref --enable-default-toolkit=qt \
		--enable-kde-applet
CONFIGURE_ENV=	QTDIR=${LOCALBASE}/lib QTINCDIR=${LOCALBASE}/include \
		LIBS="${LIBS} ${PTHREAD_LIBS} -L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	${PTHREAD_LIBS} -L${LOCALBASE}/lib
CXXFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include
UIM_SLAVE=	yes

EXTRA_PATCHES=	${PATCHDIR}/extra-patch-qt3_toolbar_Makefile.in

.if defined(WITHOUT_X11)
IGNORE=		requires X11
.endif

do-build:
	(cd ${WRKSRC}/qt3/toolbar && ${SETENV} ${MAKE_ENV} ${GMAKE} uim_panelapplet.la)

do-install:
	(cd ${WRKSRC}/qt3/toolbar && ${SETENV} ${MAKE_ENV} ${GMAKE} install-appletLTLIBRARIES install-lnkDATA)

.include "${MASTERDIR}/Makefile"
