# $FreeBSD: ports/astro/jday/Makefile,v 1.18 2012/11/17 05:54:25 svnexp Exp $

PORTNAME=	jday
PORTVERSION=	2.4
CATEGORIES=	astro
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Astronomical Julian date calculator

USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

MAN1=	jday.1

PLIST_FILES=	bin/jday bin/j2d bin/dbd \
		include/jday.h lib/libjday.a \
		lib/libjday.so lib/libjday.so.2 \
		lib/libjday.la libdata/pkgconfig/jday.pc

.include <bsd.port.mk>
