# New ports collection makefile for:	taglib-extras
# Date created:			Thu Aug 14 12:50:02 EDT 2008
# Whom:				Matt Tosto <datahead4@gmail.com>
#
# $FreeBSD: ports/audio/taglib-extras/Makefile,v 1.5 2012/11/17 05:54:45 svnexp Exp $

PORTNAME=	taglib-extras
PORTVERSION=	1.0.1
CATEGORIES=	audio
MASTER_SITES=	http://www.kollide.net/~jefferai/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Extra taglib features for Amarok 2.2

LIB_DEPENDS=	tag.1:${PORTSDIR}/audio/taglib

USE_CMAKE=	yes

.include <bsd.port.pre.mk>

post-extract:
	${REINPLACE_CMD} -e 's|$${LIB_INSTALL_DIR}/pkgconfig|libdata/pkgconfig|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.post.mk>
