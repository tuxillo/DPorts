# ex:ts=8
# New ports collection makefile for:	Kisomandel
# Date created:			Jun 10, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/graphics/kisomandel/Makefile,v 1.24 2012/11/17 05:58:11 svnexp Exp $
#

PORTNAME=	kisomandel
PORTVERSION=	0.66
PORTREVISION=	8
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fractal rendering program with nice 3D-display in realtime

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

PLIST_FILES=	bin/kisomandel
USE_BZIP2=	yes
USE_QT_VER=	3
GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
USE_GMAKE=	yes

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e "s,-lqt,-lqt-mt ${PTHREAD_LIBS},g" ${WRKSRC}/configure
	@${FIND} ${WRKSRC} -name Makefile.in | ${XARGS} \
		${REINPLACE_CMD} -e "s,-lqt,-lqt-mt ${PTHREAD_LIBS},g"
	@${REINPLACE_CMD} -e "s,malloc.h,stdlib.h,g" \
		${WRKSRC}/kisomandel/fractal.cpp
	@${REINPLACE_CMD} -e "s,-ffast-math -fomit-frame-pointer,${CFLAGS}," \
		${WRKSRC}/kisomandel/Makefile.in

.include <bsd.port.post.mk>
