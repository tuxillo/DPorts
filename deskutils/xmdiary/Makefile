# New ports collection makefile for:	xmdiary
# Date created:		29 Sep 1997
# Whom:			mi@aldan.ziplink.net
#
# $FreeBSD: ports/deskutils/xmdiary/Makefile,v 1.18 2012/11/17 05:55:31 svnexp Exp $
#

PORTNAME=	xmdiary
PORTVERSION=	3.0.3
PORTREVISION=	3
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	office
DISTFILES=	${DISTNAME}.tar.gz

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Personal and group calendar utility

NO_CDROM=	"Don't sell for profit"
EXTRACT_ONLY=	${DISTNAME}.tar.gz
USE_MOTIF=	yes
USE_IMAKE=	yes
USE_XORG=	x11 xext xp xpm xt
MAN1=		xdaclunix.1 xdalarm.1 xdcustom.1 xddump.1 xdiary.1 xdinitdb.1 \
		xdlight.1 xdnotify.1 xdprformat.1 xdremind.1 xdremove.1 \
		xdrestore.1

post-patch:
	@${ECHO_MSG} removing the "malloc.h" includes
	${SCRIPTDIR}/nomalloc $(WRKSRC) 2>&1 > /dev/zero
	@${ECHO_MSG} removing unneccessary DependTarget from Imakefile-s
	${SCRIPTDIR}/noextradepend $(WRKSRC) 2>&1 > /dev/zero
	${REINPLACE_CMD} -e 's|/usr/X11R6|${LOCALBASE}|g' \
		-e 's|CcCmd gcc|CcCmd ${CC}|' '${WRKSRC}/XDiary.tmpl'

.include <bsd.port.mk>
