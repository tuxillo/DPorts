# New ports collection makefile for:	libzvbi
# Date created:				15 May 2003
# Whom:					Oliver Lehmann <oliver@freebsd.org>
#
# $FreeBSD: ports/devel/libzvbi/Makefile,v 1.49 2012/11/17 05:55:57 svnexp Exp $
#

PORTNAME=	libzvbi
PORTVERSION=	0.2.33
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	SF/zapping/zvbi/${PORTVERSION}
DISTNAME=	${PORTNAME:S/lib//}-${PORTVERSION}

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	Routines to access raw VBI capture devices

LIB_DEPENDS+=	png15:${PORTSDIR}/graphics/png \
		unicode.0:${PORTSDIR}/devel/libunicode

USE_GETTEXT=	yes
USE_BZIP2=	yes
USE_GNOME=	gnomehack pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAN1=		zvbi-ntsc-cc.1

CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib -L/usr/lib"
CFLAGS+=	-I${LOCALBASE}/include

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|#cpu (\([^)]*\))|defined(__\1__)|g' \
		${WRKSRC}/src/misc.h \
		${WRKSRC}/src/exp-gfx.c
	@${REINPLACE_CMD} -e 's|zvbi-atsc-cc$$(EXEEXT)||g; \
		s|zvbi-atsc-cc\.1||g' ${WRKSRC}/contrib/Makefile.in

.include <bsd.port.mk>
