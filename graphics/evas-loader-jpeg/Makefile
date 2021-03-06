# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: ports/graphics/evas-loader-jpeg/Makefile,v 1.15 2013/01/15 17:46:00 svnexp Exp $

PORTNAME=	loader-jpeg
PORTVERSION=	1.7.5
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	evas-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	A hardware accelerated canvas API (JPEG loader)

LICENSE=	BSD

LIB_DEPENDS=	jpeg:${PORTSDIR}/graphics/jpeg \
		freetype:${PORTSDIR}/print/freetype2

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	evas librt_hack libtool_hack
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes

MAKEDIRS=	${WRKSRC}/src/modules/loaders/jpeg \
		${WRKSRC}/src/modules/savers/jpeg

.include "../evas-core/Makefile.inc"
CONFIGURE_ARGS+=	--enable-image-loader-jpeg

LDFLAGS+=	-L${LOCALBASE}/lib -levas

post-patch:
	@${REINPLACE_CMD} -E \
		-e 's,\$$\(top_builddir\)/src/lib/\.libs,${LOCALBASE}/lib,' \
		-e 's,\$$\(top_builddir\)/src/lib/libevas\.la,,' \
		${MAKEDIRS:S,$,/Makefile.in,}

do-build:
	@(for DIR in ${MAKEDIRS}; do cd $${DIR}; ${SETENV} ${MAKE_ENV} ${MAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${ALL_TARGET}; done)

do-install:
	@(for DIR in ${MAKEDIRS}; do cd $${DIR}; ${SETENV} ${MAKE_ENV} ${MAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${INSTALL_TARGET}; done)

.include <bsd.port.mk>
