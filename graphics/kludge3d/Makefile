# ex:ts=8
# Ports collection makefile for:	kludge3d
# Date created:			May 7, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/graphics/kludge3d/Makefile,v 1.42 2012/11/17 05:58:11 svnexp Exp $
#

PORTNAME=	kludge3d
PORTVERSION=	20040822
PORTREVISION=	11
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/source/2004-08-22

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple 3D editor

LIB_DEPENDS=	3ds-1.3:${PORTSDIR}/graphics/lib3ds \
		gtkglext-x11-1.0.0:${PORTSDIR}/x11-toolkits/gtkglext

USE_PYTHON=	yes
USE_GL=		gl
USE_GNOME=	gtk20
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-lib-GL

PLIST_FILES=	bin/kludge3d

CPPFLAGS+=	-I${LOCALBASE}/include \
		-I${PYTHON_INCLUDEDIR} ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib \
		-L${PYTHON_LIBDIR}/config ${PTHREAD_LIBS}

post-patch:
	@${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${REINPLACE_CMD} -e \
		's|@EXTRA_CFLAGS@|@CFLAGS@|g ; \
		 s| install-pixmapsDATA||g ; \
		 s|-lpthread||g'

.include <bsd.port.mk>
