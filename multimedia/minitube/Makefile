# $FreeBSD: ports/multimedia/minitube/Makefile,v 1.23 2012/11/17 05:59:51 svnexp Exp $

PORTNAME=	minitube
PORTVERSION=	1.9
CATEGORIES=	multimedia www
MASTER_SITES=	http://flavio.tordini.org/files/minitube/

MAINTAINER=	makc@FreeBSD.org
COMMENT=	TV-like client for YouTube

USE_QT4=	gui network xml dbus phonon phonon-gst \
		qmake_build moc_build rcc_build imageformats_run
USE_GSTREAMER=	ffmpeg
HAS_CONFIGURE=	yes
INSTALLS_ICONS=	yes
MAKE_JOBS_SAFE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

QMAKE_ARGS=	-recursive PREFIX=${PREFIX} QMAKE_LRELEASE=${LRELEASE} ${QMAKE_PRO}
QMAKE_PRO=	${WRKSRC}/${PORTNAME}.pro
LRELEASE=	${LOCALBASE}/bin/lrelease-qt4

STRIP_FILES=	bin/minitube

OPTIONS_DEFINE=	NLS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USE_QT4+=	linguist_build
PLIST_SUB+=	NLS=""
.else
PLIST_SUB+=	NLS="@comment "
.endif

pre-configure:
	${REINPLACE_CMD} -e 's,$$$$PKGDATADIR,${DATADIR},g' ${QMAKE_PRO}
.if !${PORT_OPTIONS:MNLS}
	${REINPLACE_CMD} -e '/include(locale\/locale.pri)/d' ${QMAKE_PRO}
.endif

do-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${QMAKE} ${QMAKEFLAGS} ${QMAKE_ARGS}

post-install:
	${STRIP_CMD} ${STRIP_FILES:S,^,${PREFIX}/,}

.include <bsd.port.mk>
