# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/graphics/evas_generic_loaders-pdf/Makefile,v 1.4 2012/12/22 21:09:57 svnexp Exp $

PORTNAME=	pdf
PORTVERSION=	1.7.4
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://download.enlightenment.org/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	evas_generic_loaders-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Additional loader for Evas (pdf)

LICENSE=	GPLv2

LIB_DEPENDS=	poppler:${PORTSDIR}/graphics/poppler

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	eina
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes

BINSRC=		${WRKSRC}/src/bin/${PORTNAME}

do-build:
	${MAKE} -C ${BINSRC}

do-install:
	${MAKE} -C ${BINSRC} install

.include <bsd.port.mk>
