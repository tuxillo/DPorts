# New ports collection makefile for:	xmms-jack
# Date created:				13 Mar 2004
# Whom:					David Yeske <dyeske@gmail.com>
#
# $FreeBSD: ports/audio/xmms-jack/Makefile,v 1.20 2012/11/17 05:54:48 svnexp Exp $

PORTNAME=	xmms-jack
PORTVERSION=	0.19
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XMMS plugin for jack

LIB_DEPENDS=	xmms.4:${PORTSDIR}/multimedia/xmms \
		jack.0:${PORTSDIR}/audio/jack \
		samplerate.1:${PORTSDIR}/audio/libsamplerate

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_GNOME=	gtk12
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool

PLIST_FILES=	lib/xmms/Output/libjackout.so

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g ; \
		 s|-ldl||g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|jack_free|jack_free_local|g' \
		${WRKSRC}/jack.c

do-install:
	cd ${WRKSRC}/.libs \
		&& ${INSTALL_DATA} libjackout.so ${PREFIX}/lib/xmms/Output

.include <bsd.port.post.mk>
