# New ports collection makefile for:    h5utils
# Date created:				Mar 11, 2011
# Whom:					Klaus Aehlig <aehlig@linta.de>
# $FreeBSD: ports/science/h5utils/Makefile,v 1.3 2012/11/17 06:00:57 svnexp Exp $

PORTNAME=	h5utils
PORTVERSION=	1.12.1
PORTREVISION=	1
CATEGORIES=	science
MASTER_SITES=	http://ab-initio.mit.edu/${PORTNAME}/

MAINTAINER=	aehlig@linta.de
COMMENT=	A set of utilities for visualization and conversion of HDF5 format

LICENSE=	MIT GPLv2
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

MAN1=		h5totxt.1 h5fromtxt.1 h5tovtk.1 h5topng.1 h5math.1

GNU_CONFIGURE=	YES
CFLAGS +=	-L${LOCALBASE}/lib -I${LOCALBASE}/include \
		-I${LOCALBASE}/include/libpng15 ${PTHREAD_LIBS}

BUILD_DEPENDS+=	gawk:${PORTSDIR}/lang/gawk
LIB_DEPENDS +=	hdf5:${PORTSDIR}/science/hdf5 \
		png15:${PORTSDIR}/graphics/png \
		matheval.1:${PORTSDIR}/devel/libmatheval

.include <bsd.port.mk>
