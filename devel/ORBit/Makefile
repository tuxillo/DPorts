# New ports collection makefile for:   orbit
# Date Created:			16 Aug 1998
# Whom:				Chia-liang Kao <clkao@CirX.ORG>
#
# $FreeBSD: ports/devel/ORBit/Makefile,v 1.93 2012/11/17 05:55:32 svnexp Exp $
#

PORTNAME=	ORBit
PORTVERSION=	0.5.17
PORTREVISION=	5
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	High-performance CORBA ORB with support for the C language

USE_BZIP2=	yes
USE_GETTEXT=	yes
USE_GNOME=	glib12
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS= --disable-indent
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INFO=		libIDL

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' ${WRKSRC}/configure ${WRKSRC}/libIDL/configure ${WRKSRC}/popt/configure
	@${TOUCH} ${WRKSRC}/configure

post-install:
	@${ECHO_CMD} "ORBIIOPIPv4=0" > ${PREFIX}/etc/orbitrc.default
	@${ECHO_CMD} "ORBIIOPIPv6=0" >> ${PREFIX}/etc/orbitrc.default
	@if [ ! -f ${PREFIX}/etc/orbitrc ]; then \
		${CP} -p ${PREFIX}/etc/orbitrc.default ${PREFIX}/etc/orbitrc ; \
	fi

.include <bsd.port.mk>
