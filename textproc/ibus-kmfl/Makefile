# New ports collection makefile for:	ibus-kmfl
# Date created:		4 June 2010
# Whom:			Nikola Lecic <nikola.lecic@anthesphoria.net>
#
# $FreeBSD: ports/textproc/ibus-kmfl/Makefile,v 1.8 2012/11/17 06:01:59 svnexp Exp $
#

PORTNAME=	ibus-kmfl
PORTVERSION=	1.0.3
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	SF/kmfl/${PORTNAME}/${PORTVERSION} \
		http://anthesphoria.net/FreeBSD/ports/distfiles/${DIST_SUBDIR}/
DIST_SUBDIR=	kmfl

MAINTAINER=	nikola.lecic@anthesphoria.net
COMMENT=	KMFL IMEngine for IBus framework

LIB_DEPENDS=	ibus-1.0:${PORTSDIR}/textproc/ibus \
		kmfl.0:${PORTSDIR}/textproc/libkmfl \
		kmflcomp.0:${PORTSDIR}/textproc/kmflcomp
RUN_DEPENDS=	kmflcomp:${PORTSDIR}/textproc/kmflcomp

USE_GNOME=	glib20 pkgconfig

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.if !defined(WITHOUT_NLS)
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

post-patch:
	@${CP} ${WRKSRC}/icons/default.png ${WRKSRC}/icons/default-kmfl.png
	@${REINPLACE_CMD} -e 's|/usr/|${PREFIX}/|g' \
		${WRKSRC}/src/kmflutil.c ${WRKSRC}/src/kmfl.xml.in.in
	@${REINPLACE_CMD} -e 's|default\.png|default-kmfl.png|g' \
		${WRKSRC}/src/kmflutil.c ${WRKSRC}/icons/Makefile.in

.include <bsd.port.mk>
