# New ports collection makefile for:	xerces-c3
# Date created:				23 June 2010
# Whom:					gahr@FreeBSD.org
#
# $FreeBSD: ports/textproc/xerces-c3/Makefile,v 1.6 2012/11/17 06:02:24 svnexp Exp $
#

PORTNAME=	xerces-c3
PORTVERSION=	3.1.1
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_APACHE}
MASTER_SITE_SUBDIR=	xerces/c/3/sources
DISTNAME=	xerces-c-${PORTVERSION}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Validating XML parser from the Apache XML Project

CONFLICTS=	xerces_c-[0-9]* xerces-c2-[0-9]*

USE_GMAKE=	yes
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig \
		--enable-transcoder-iconv
MAKE_ENV+=	XERCESCROOT=${WRKSRC}

MAKE_JOBS_UNSAFE=yes

post-install:
	${LN} -sf libxerces-c-${PORTVERSION:R}.so ${PREFIX}/lib/libxerces-c.so.${PORTVERSION:R:R}

test:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.mk>
