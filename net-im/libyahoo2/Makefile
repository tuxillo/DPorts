# ex:ts=8
# Ports collection makefile for:	libyahoo2
# Date created:			Apr 6, 2003
# Whom:				ijliao
#
# $FreeBSD: ports/net-im/libyahoo2/Makefile,v 1.30 2012/11/17 06:00:27 svnexp Exp $
#

PORTNAME=	libyahoo2
PORTVERSION=	1.0.1
CATEGORIES=	net-im
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A C library that handles the new Yahoo! Messenger protocol

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_GNOME=	glib20 gnomehack
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-Wall -ansi -pedantic||g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|-g -Wall||g ; \
		 s| -module ||g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
