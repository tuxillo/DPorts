# New ports collection makefile for:	picviz
# Date created:         08 Nov 2008
# Whom:                 Tim Hemel
#
# $FreeBSD: ports/graphics/picviz/Makefile,v 1.7 2012/12/10 19:24:01 svnexp Exp $
#

PORTNAME=	picviz
PORTVERSION=	0.4
PORTREVISION=	4
CATEGORIES=	graphics security
MASTER_SITES=	http://www.wallinfire.net/picviz/attachment/wiki/ReleasesDownload/
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}?format=raw

MAINTAINER=	ports@timit.nl
COMMENT=	Parallel coordinates plotter

LIB_DEPENDS=	pcre.3:${PORTSDIR}/devel/pcre \
		cairo.2:${PORTSDIR}/graphics/cairo

USE_CMAKE=	yes
USE_LDCONFIG=	yes
USE_BISON=	build

MAN1=		pcv.1

.include <bsd.port.mk>
