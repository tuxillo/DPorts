# Created by: FURUSAWA, Kazuhisa <kazu@jp.freebsd.org>
# $FreeBSD: ports/x11-clocks/mouseclock/Makefile,v 1.16 2012/11/17 06:03:24 svnexp Exp $

PORTNAME=	mouseclock
PORTVERSION=	1.0
PORTREVISION=	4
CATEGORIES=	x11-clocks
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	X11/clocks

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display the current time using the X root cursor

USE_GMAKE=	yes
USE_IMAKE=	yes
USE_XORG=	x11 xext
XMKMF=		xmkmf
NO_INSTALL_MANPAGES=	yes

post-configure:
	@${TOUCH} ${WRKSRC}/mouseclock.man

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
