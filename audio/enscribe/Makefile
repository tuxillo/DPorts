# New ports collection makefile for:	enscribe
# Date created:			15 Jul 2004
# Whom:				Jean-Yves Lefort <jylefort@brutele.be>
#
# $FreeBSD: ports/audio/enscribe/Makefile,v 1.14 2012/11/17 05:54:30 svnexp Exp $
#

PORTNAME=	enscribe
PORTVERSION=	0.1.0
PORTREVISION=	4
CATEGORIES=	audio graphics
MASTER_SITES=	http://www.coppercloudmusic.com/enscribe/
EXTRACT_SUFX=	.tgz

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Create digital audio watermark images from photographic images

LIB_DEPENDS=	sndfile.1:${PORTSDIR}/audio/libsndfile \
		gd.4:${PORTSDIR}/graphics/gd \
		jpeg.11:${PORTSDIR}/graphics/jpeg \
		png15:${PORTSDIR}/graphics/png \
		freetype.9:${PORTSDIR}/print/freetype2

LICENSE=	GPLv2

PORTDOCS=	README
PLIST_FILES=	bin/enscribe

do-build:
	cd ${BUILD_WRKSRC}; ${CC} ${CFLAGS} \
		`pkg-config --cflags --libs sndfile freetype2` \
		-I${LOCALBASE}/include -L${LOCALBASE}/lib \
		-lgd -lpng -ljpeg -lm -lz \
		-o enscribe enscribe.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/enscribe ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
