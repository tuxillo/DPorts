# ex:ts=8
# Ports collection makefile for:	wmDrawer
# Date created:			Apr 6, 2003
# Whom:				ijliao
#
# $FreeBSD: ports/x11/wmdrawer/Makefile,v 1.26 2012/11/17 06:03:20 svnexp Exp $
#

PORTNAME=	wmdrawer
PORTVERSION=	0.10.5
PORTREVISION=	9
CATEGORIES=	x11 windowmaker
MASTER_SITES=	http://people.easter-eggs.org/~valos/wmdrawer/:tarball \
		http://wikitest.freebsd.org/wiki/common/:pixmap
DISTFILES=	${EXTRACT_ONLY}:tarball \
		logo-beastie.png:pixmap
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A dockapp which provides a drawer to launch applications

USE_GNOME=	gdkpixbuf
USE_GMAKE=	yes
USE_PKGCONFIG=	build
CONFIGURE_ENV+=	DOCSDIR=${DOCSDIR}
MAKE_ENV+=	${CONFIGURE_ENV}

SUB_FILES+=	pkg-message

MANCOMPRESSED=	yes
MAN1=	wmdrawer.1x

post-patch:
	@${REINPLACE_CMD} -e "s,%%DATADIR%%,${DATADIR},g" ${WRKSRC}/wmdrawerrc.example
	@${REINPLACE_CMD} -e "s,CFLAGS = -O3,CFLAGS +=,g; \
		s,LDFLAGS =,LDFLAGS+=,g; s,PREFIX =,#PREFIX =,g; \
		s,$$[(]DESTDIR[)]/usr/local,${PREFIX},g; \
		s,CC =,#CC =,g; \
		s,/usr/X11R6,${LOCALBASE},g" ${WRKSRC}/Makefile

post-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${DISTDIR}/logo-beastie.png ${DATADIR}/beastie.png
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
