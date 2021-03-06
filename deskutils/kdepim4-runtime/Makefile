# New ports collection Makefile for:	kdepimp4
# Date created:				2008-31-05
# Whom:					miwi
#
# $FreeBSD: ports/deskutils/kdepim4-runtime/Makefile,v 1.25 2012/11/17 05:55:28 svnexp Exp $

PORTNAME=	kdepim-runtime
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	deskutils kde ipv6
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries for KDE-PIM applications

LIB_DEPENDS=	boost_thread.4:${PORTSDIR}/devel/boost-libs
BUILD_DEPENDS=	xsltproc:${PORTSDIR}/textproc/libxslt

CONFLICTS_INSTALL=	kdepim-runtime-4.4.*

USE_XZ=	yes
USE_GNOME=	libxml2
USE_KDE4=	kdehier kdelibs kdeprefix pimlibs \
		akonadi automoc4 ontologies sharedmime soprano strigi
KDE4_BUILDENV=	yes
USE_QT4=	dbus designer gui network xml xmlpatterns \
		qmake_build moc_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes
CMAKE_ARGS=	-DKDEPIM_MOBILE_UI:BOOL=OFF

post-patch:
	${GREP} -H -r "#include <q" ${WRKSRC} | ${CUT} -d: -f1 | uniq | \
		${XARGS} ${REINPLACE_CMD} -f ${FILESDIR}/qt3to4headers.txt
# Prevent updating MIME during build.
	${REINPLACE_CMD} -e '/^update_xdg_mimetypes/ d' \
		${PATCH_WRKSRC}/CMakeLists.txt \
		${PATCH_WRKSRC}/accountwizard/CMakeLists.txt

post-install:
	@-update-mime-database ${KDE4_PREFIX}/share/mime

.include <bsd.port.mk>
