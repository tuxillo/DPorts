# ex:ts=8
# Ports collection makefile for:	peeper
# Date created:			Aug 9, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/x11/peeper/Makefile,v 1.15 2012/11/17 06:03:18 svnexp Exp $
#

PORTNAME=	peeper
PORTVERSION=	0.1
PORTREVISION=	9
CATEGORIES=	x11
MASTER_SITES=	http://peeper.sourceforge.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	View an area of the screen at a certain magnification

USE_GNOME=	imlib
USE_GMAKE=	yes
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS} `${IMLIB_CONFIG} --cflags-gdk`" \
		LIBS="`${IMLIB_CONFIG} --libs-gdk`"
ALL_TARGET=	peeper

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/peeper ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
