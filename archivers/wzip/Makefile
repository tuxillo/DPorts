# Created by: Yonatan <onatan@gmail.com>
# $FreeBSD: ports/archivers/wzip/Makefile,v 1.8 2012/12/18 06:44:42 svnexp Exp $

PORTNAME=	wzip
PORTVERSION=	1.1.1
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_DEBIAN_POOL}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	onatan@gmail.com
COMMENT=	Preprocessor for lossy data compression

ALL_TARGET=	${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} 's|gcc|${CC}|' ${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MANPREFIX}/man/man1

.include <bsd.port.mk>
