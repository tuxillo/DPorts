# ports collection makefile for:	gsmc
# Date created:		11 February 2006
# Whom:			db
#
# $FreeBSD: ports/science/gsmc/Makefile,v 1.16 2012/11/17 06:00:57 svnexp Exp $
#

PORTNAME=	gsmc
PORTVERSION=	1.1
PORTREVISION=	4
CATEGORIES=	science hamradio
MASTER_SITES=	http://www.qsl.net/ik5nax/

MAINTAINER=	db@FreeBSD.org
COMMENT=	Smith chart program for impedance matching

USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_GMAKE=	yes
USE_AUTOTOOLS=	aclocal automake autoconf
AUTOMAKE_ARGS=	-i --add-missing --foreign --copy

MAN1=		gsmc.1
PLIST_FILES=	bin/gsmc

.include <bsd.port.mk>
