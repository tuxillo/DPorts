# New ports collection makefile for:	kchmviewer
# Date created:				Mon Jul 25 10:42:16 CEST 2005
# Whom:					Markus Brueffer <markus@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/kchmviewer/Makefile,v 1.27 2012/12/30 18:55:45 svnexp Exp $
#

PORTNAME=	kchmviewer
PORTVERSION=	3.1
PORTREVISION=	5
CATEGORIES=	deskutils kde
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}-2
DISTNAME=	${PORTNAME}-${PORTVERSION}-2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Qt/KDE viewer for CHM files

LIB_DEPENDS+=	chm:${PORTSDIR}/misc/chmlib

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
DO_NOT_COMPILE+=chmlib
CONFIGURE_ENV+=	DO_NOT_COMPILE="${DO_NOT_COMPILE}"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	${PTHREAD_LIBS} -L${LOCALBASE}/lib

.if !defined(WITHOUT_KDE)
USE_KDELIBS_VER=3
PLIST_SUB+=	KDE=""
PLIST_SUB+=	QT="@comment "
CONFIGURE_ARGS+=--with-kde
.else
USE_QT_VER=	3
USE_PERL5_BUILD=yes
RUN_DEPENDS+=	${LOCALBASE}/share/icons/hicolor/index.theme:${PORTSDIR}/misc/hicolor-icon-theme
PLIST_SUB+=	KDE="@comment "
PLIST_SUB+=	QT=""
DO_NOT_COMPILE+=kio-msits
.endif

pre-everything::
.if !defined(WITHOUT_KDE)
	@${ECHO_MSG} "You can disable KDE support by defining WITHOUT_KDE."
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g;s|-lpthread|${PTHREAD_LIBS}|g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}

post-configure:
.if defined(WITHOUT_KDE)
	@${REINPLACE_CMD} -e 's|src po|src|g' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} \
		-e 's|kde_icondir =.*|kde_icondir = ${PREFIX}/share/icons|g' \
		${WRKSRC}/src/pics/Makefile
	@${REINPLACE_CMD} -e 's|crystalsvg|hicolor|g' \
		${WRKSRC}/src/pics/Makefile
.endif

pre-install:
.if defined(WITHOUT_KDE)
	@${REINPLACE_CMD} -e 's|Categories=.*|Categories=Utility;|g' \
		${WRKSRC}/lib/kio-msits/kchmviewer.desktop
	@${INSTALL_DATA} ${WRKSRC}/lib/kio-msits/kchmviewer.desktop \
		${PREFIX}/share/applications
.endif

.include <bsd.port.mk>
