# Created by: Denise H. G. <darcsis@gmail.com>
# $FreeBSD: ports/devel/tig/Makefile,v 1.13 2012/11/17 05:57:05 svnexp Exp $

PORTNAME=	tig
PORTVERSION=	1.1
CATEGORIES=	devel
MASTER_SITES=	http://jonas.nitro.dk/tig/releases/

MAINTAINER=	darcsis@gmail.com
COMMENT=	Text-mode interface for git

LICENSE=	GPLv2

RUN_DEPENDS=	git:${PORTSDIR}/devel/git

MAN1=		tig.1
MAN5=		tigrc.5
MAN7=		tigmanual.7

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libiconv=${LOCALBASE}

USE_GMAKE=	yes
USE_ICONV=	yes

PLIST_FILES=	bin/tig

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MANPREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}rc.5 ${MANPREFIX}/man/man5/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}manual.7 ${MANPREFIX}/man/man7

.include <bsd.port.mk>
