# Ports collection makefile for:   ggobi
# Date created:        31 January 2010
# Whom:                rhurlin
#
# $FreeBSD: ports/math/ggobi/Makefile,v 1.7 2012/11/17 05:59:21 svnexp Exp $
#

PORTNAME=	ggobi
PORTVERSION=	2.1.9
PORTREVISION=	1
CATEGORIES=	math graphics
MASTER_SITES=	http://www.ggobi.org/downloads/

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	Data visualization system

USE_BZIP2=	yes
USE_GNOME=	gtk20 libxml2 gnomehack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libltdl

CONFIGURE_ARGS+=	--with-all-plugins

ALL_TARGET=	all ggobirc

post-patch:
	@${REINPLACE_CMD} -e 's|ND_coord_i|ND_coord|' \
		${WRKSRC}/plugins/GraphLayout/graphviz.c
	@${REINPLACE_CMD} -e 's|#line 0|#line 1|' \
		${WRKSRC}/src/ggobi-data.c \
		${WRKSRC}/src/ggobi-renderer-cairo.c \
		${WRKSRC}/src/ggobi-renderer-factory.c \
		${WRKSRC}/src/ggobi-renderer.c

post-install:
	${MKDIR} ${PREFIX}/etc/xdg/ggobi
	${INSTALL_DATA} ${WRKSRC}/ggobirc ${PREFIX}/etc/xdg/ggobi/ggobirc.sample
	@if [ ! -f ${PREFIX}/etc/xdg/ggobi/ggobirc ]; then \
		${CP} -p ${PREFIX}/etc/xdg/ggobi/ggobirc.sample ${PREFIX}/etc/xdg/ggobi/ggobirc ; \
	fi

.include <bsd.port.mk>
