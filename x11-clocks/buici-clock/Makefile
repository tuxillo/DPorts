# New ports collection makefile for:	buici-clock
# Date created:		22nd Nov 2004
# Whom:				Hendrik Scholz <hscholz@raisdorf.net>
#
# $FreeBSD: ports/x11-clocks/buici-clock/Makefile,v 1.15 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	buici-clock
PORTVERSION=	0.4.9.2
CATEGORIES=	x11-clocks
MASTER_SITES=	DEBIAN
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Xlib implementation of an attractive, configurable clock

LICENSE=	GPLv2 # (or later)

LIB_DEPENDS=	cairo.2:${PORTSDIR}/graphics/cairo

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_XORG=	x11 xext
USE_BISON=	build
USE_GMAKE=	yes
USE_PKGCONFIG=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=yes

MAN1=		buici-clock.1
PLIST_FILES=	bin/buici-clock

post-patch:
	@${REINPLACE_CMD} -e \
		's|echo -e|echo| ; \
		 s|-g | |' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e \
		's|_=|+=| ; \
		 s|-g | |' ${WRKSRC}/xo/Makefile.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/buici-clock ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/buici-clock.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
