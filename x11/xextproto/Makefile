# New ports collection makefile for:	xextproto
# Date Created:				07 Aug 2005
# Whom:					Dejan Lesjak <lesi@FreeBSD.org>
#
# $FreeBSD: ports/x11/xextproto/Makefile,v 1.6 2012/11/17 06:03:21 svnexp Exp $
#

PORTNAME=	xextproto
PORTVERSION=	7.2.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	XExt extension headers

XORG_CAT=	proto

CONFIGURE_ARGS+=--disable-specs

post-patch:
	@${REINPLACE_CMD} '/^SUBDIR/s/specs//' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
