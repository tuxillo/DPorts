# Created by: Sergey Akifyev <asa@gascom.ru>
# $FreeBSD: ports/audio/libmad/Makefile,v 1.19 2012/11/17 05:54:36 svnexp Exp $

PORTNAME=	libmad
PORTVERSION=	0.15.1b
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	SF/mad/${PORTNAME}/${PORTVERSION} \
		ftp://ftp.mars.org/pub/mpeg/


MAINTAINER=	ports@FreeBSD.org
COMMENT=	Libmad library (part of MAD project)

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GNOME=	pkgconfig
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--disable-debugging \
		--enable-sso
.if defined(WITH_SPEED)
CONFIGURE_ARGS+=	--enable-speed
.else
CONFIGURE_ARGS+=	--enable-accuracy
.endif

post-patch:
	@${SED} -e 's|%PREFIX%|${PREFIX}|g ; s|%VERSION%|${PORTVERSION}|g' \
		${FILESDIR}/mad.pc.in > ${WRKDIR}/mad.pc
	@${REINPLACE_CMD} -e 's| -fforce-mem||' \
		${WRKSRC}/configure

post-install:
	${MKDIR} ${PREFIX}/libdata/pkgconfig
	${INSTALL_DATA} ${WRKDIR}/mad.pc ${PREFIX}/libdata/pkgconfig

.include <bsd.port.mk>
