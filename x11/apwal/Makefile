# New ports collection makefile for:	apwal
# Date created:			Nov 26, 2003
# Whom:				Volker Stolz <stolz@i2.informatik.rwth-aachen.de>
#
# $FreeBSD: ports/x11/apwal/Makefile,v 1.23 2012/11/17 06:03:14 svnexp Exp $
#

PORTNAME=	apwal
PORTVERSION=	0.4.5
PORTREVISION=	10
CATEGORIES=	x11
MASTER_SITES=	http://apwal.free.fr/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple and powerful application launcher

USE_GNOME=	gtk20 libxml2
USE_GMAKE=	yes
USE_PKGCONFIG=	build

WRKSRC=		${WRKDIR}/${PORTNAME}/src

PLIST_FILES=	bin/apwal bin/apwal-editor

post-patch:
	@${CP} ${FILESDIR}/group_member.c ${WRKSRC}
	@${REINPLACE_CMD} -e 's|/usr/share|${PREFIX}/share|g' \
		${WRKSRC}/cereimg.c ${WRKSRC}/../example/apwalrc.xml

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/apwal ${PREFIX}/bin
	${LN} -sf ${PREFIX}/bin/apwal ${PREFIX}/bin/apwal-editor

.include <bsd.port.mk>
