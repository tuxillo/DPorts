# New ports collection makefile for:	rio500
# Date created:		27 May 2000
# Whom:			Kazumasa Nishizawa <k_nishizawa@anet.ne.jp>
#
# $FreeBSD: ports/audio/rio500/Makefile,v 1.17 2012/11/17 05:54:43 svnexp Exp $
#

PORTNAME=	rio500
PORTVERSION=	0.7
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utilities for Diamond Rio500

USE_GNOME=	glib12
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-devicepath='/dev' \
		--with-deviceentry='urio0' \
		--with-id3support


.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e "s,byteswap.h,sys/endian.h," \
		${WRKSRC}/lib/libfon.c \
		${WRKSRC}/lib/librio500.c
	${REINPLACE_CMD} -e "s,getopt.h,," ${WRKSRC}/include/Makefile.in

.include <bsd.port.post.mk>
