# New ports collection makefile for:	telepathy-salut
# Date created:				Apr 16 2007
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/net-im/telepathy-salut/Makefile,v 1.30 2012/11/17 06:00:30 svnexp Exp $
#   $MCom: ports/net-im/telepathy-salut/Makefile,v 1.4 2009/01/08 07:12:15 marcus Exp $
#

PORTNAME=	telepathy-salut
PORTVERSION=	0.4.0
CATEGORIES=	net-im
MASTER_SITES=	http://telepathy.freedesktop.org/releases/${PORTNAME}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Link-local Connection Manager for Telepathy Framework

LIB_PC_DEPENDS=	gobject-2.0.pc:${PORTSDIR}/devel/glib20 \
		avahi-glib.pc:${PORTSDIR}/net/avahi-app \
		telepathy-glib.pc:${PORTSDIR}/net-im/telepathy-glib \
		libsoup-2.4.pc:${PORTSDIR}/devel/libsoup

BUILD_DEPENDS=	xsltproc:${PORTSDIR}/textproc/libxslt

BUILD_DEPENDS+=	${LIB_PC_DEPENDS:C|^|${LOCALBASE}/libdata/pkgconfig/|g}
RUN_DEPENDS+=	${LIB_PC_DEPENDS:C|^|${LOCALBASE}/libdata/pkgconfig/|g}

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack pkgconfig
USE_OPENSSL=	yes
USE_PYTHON_BUILD=	yes
CONFIGURE_ENV=	LIBS="${PTHREAD_LIBS}"
CPPFLAGS+=	${PTHREAD_CFLAGS}

MAN8=		telepathy-salut.8

post-patch:
	@${REINPLACE_CMD} -e 's|make -C|${GMAKE} -C|g' \
		${WRKSRC}/src/Makefile.in \
		${WRKSRC}/tests/Makefile.in

.include <bsd.port.mk>
