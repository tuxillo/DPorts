# New ports collection makefile for:   cdplay
# Date created:        8 July 1997
# Whom:                Antti Kaipila <anttik@iki.fi>
#
# $FreeBSD: ports/audio/cdplay/Makefile,v 1.18 2012/11/17 05:54:29 svnexp Exp $
#

PORTNAME=	cdplay
PORTVERSION=	0.92
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	dannyboy

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CD-player with text-based user interface

MAKE_ARGS=	CFLAGS="${CFLAGS} -c -ansi"	\
		BINPATH="${PREFIX}/bin/"	\
		MANPATH="${MANPREFIX}/man/man1/"
MAKE_JOBS_UNSAFE=	yes

MAN1=		cdplay.1
PLIST_FILES=	bin/cdplay

post-patch:
	${REINPLACE_CMD}			\
		-e 's/^CC=/CC?=/'		\
		-e 's/^OPTIMISE=.*$$/OPTIMISE=/'\
		-e 's/^CFLAGS=/CFLAGS+=/'	\
		-e 's/^BINPATH=/BINPATH?=/'	\
		-e 's/^MANPATH=/MANPATH?=/'	\
		${WRKSRC}/Makefile

pre-patch:
	@${GUNZIP_CMD} ${WRKSRC}/cdplay.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cdplay ${PREFIX}/bin
	${INSTALL_MAN}	${WRKSRC}/cdplay.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
