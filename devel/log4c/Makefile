# Created by: ijliao
# $FreeBSD: ports/devel/log4c/Makefile,v 1.31 2012/11/17 05:55:58 svnexp Exp $

PORTNAME=	log4c
PORTVERSION=	1.2.2
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Logging for C Library

LICENSE=	LGPL21

OPTIONS_DEFINE=	EXPAT
OPTIONS_DEFAULT=EXPAT

USE_GNOME=	gnomehack
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MEXPAT}
LIB_DEPENDS+=	expat:${PORTSDIR}/textproc/expat2
.else
CONFIGURE_ARGS+=--without-expat
.endif

.include <bsd.port.mk>
