# New ports collection makefile for:	transfig
# Date created:		9 August 1996
# Whom:			chuckr@freebsd.org
#
# $FreeBSD: ports/print/transfig/Makefile,v 1.50 2012/11/17 06:00:55 svnexp Exp $
#

PORTNAME=	transfig
PORTVERSION=	3.2.5d
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	SF/mcj/mcj_dist_src/3.0/
DISTNAME=	${PORTNAME}.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tools to convert Xfig's .fig files

RUN_DEPENDS=	ppmtogif:${PORTSDIR}/graphics/netpbm
LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

MAKE_JOBS_SAFE=	yes

USE_GCC=	any
USE_GHOSTSCRIPT_RUN=	yes
USE_IMAKE=	yes
USE_XORG=	xpm
MAN1=		fig2dev.1 fig2ps2tex.1 pic2tpic.1 transfig.1

CFLAGS+=	-I${LOCALBASE}/include/libpng15
MAKE_ARGS+=	INSTALLFLAGS="${COPY}" \
		INSTPGMFLAGS="${STRIP} ${_BINOWNGRP} -m ${BINMODE}" \
		INSTBINFLAGS="${_BINOWNGRP} -m ${BINMODE}" \
		INSTDATFLAGS="${_SHROWNGRP} -m ${SHAREMODE}" \
		INSTMANFLAGS="${_MANOWNGRP} -m ${MANMODE}"

.include <bsd.port.mk>
