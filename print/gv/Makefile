# ex:ts=8
# Ports collection makefile for:  gv
# Date created:			  16 Apr 1996
# Whom:				  tg@freebsd.org
#
# $FreeBSD: ports/print/gv/Makefile,v 1.75 2012/11/17 06:00:50 svnexp Exp $
#

PORTNAME=	gv
PORTVERSION=	3.7.3
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	bf@FreeBSD.org
COMMENT=	A PostScript and PDF previewer

LIB_DEPENDS=	Xaw3d:${PORTSDIR}/x11-toolkits/Xaw3d

USE_XORG=	xpm ice sm xext xmu x11
USE_GHOSTSCRIPT=	yes
USE_GMAKE=	yes
USE_ICONV=	yes
USE_PERL5_BUILD=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ENV +=	LDFLAGS="${LDFLAGS}" LIBS="-liconv"
CONFIGURE_ARGS+=	--libdir=${PREFIX}/lib/X11 \
			--enable-setenv-code \
			--enable-SIGCHLD-fallback

MAN1=		gv.1 gv-update-userconfig.1
INFO=		gv
PLIST_FILES=	bin/gv \
		bin/gv-update-userconfig \
		%%DATADIR%%/gv_system.ad \
		%%DATADIR%%/safe-gs-workdir/.keep_me \
		lib/X11/app-defaults/GV
PLIST_DIRS=	%%DATADIR%%/safe-gs-workdir \
		%%DATADIR%%

post-install:
	@${TOUCH} ${DATADIR}/safe-gs-workdir/.keep_me

.include <bsd.port.mk>
