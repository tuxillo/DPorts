# New ports collection makefile for:	gtkimageview
# Date created:		1 August 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/x11-toolkits/gtkimageview/Makefile,v 1.15 2012/11/17 06:03:35 svnexp Exp $
#

PORTNAME=	gtkimageview
PORTVERSION=	1.6.4
PORTREVISION=	3
CATEGORIES=	x11-toolkits
MASTER_SITES=	LOCAL/kwm
# http://trac.bjourne.webfactional.com/

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Simple image viewer widget

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USE_GNOME=	gtk20
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^gtkimageview-marshal.[ch]:/s|$$[(]GLIB_GENMARSHAL[)]||'\
		${WRKSRC}/src/Makefile.in
	@${REINPLACE_CMD} -e '/^CFLAGS/s|-Werror||' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e '/^pkgconfigdir/s|=.*|=${PREFIX}/libdata/pkgconfig|'\
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
