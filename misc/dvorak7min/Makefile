# New ports collection makefile for:	dvorak7min
# Date created:			31 Jan 2003
# Whom:				Leland Wang <llwang@infor.org>
#
# $FreeBSD: ports/misc/dvorak7min/Makefile,v 1.6 2012/11/17 05:59:34 svnexp Exp $
#

PORTNAME=	dvorak7min
PORTVERSION=	1.6.1
CATEGORIES=	misc
MASTER_SITES=	http://www.linalco.com/ragnar/

MAINTAINER=	llwang@infor.org
COMMENT=	An ncurses-based Dvorak typing tutor

.include <bsd.port.pre.mk>

MAKE_ARGS=	PROF="${CPPFLAGS} ${CFLAGS}" LDFLAGS="${LDFLAGS}"

pre-build:
	@cd ${WRKSRC} ; ${MAKE} clean

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dvorak7min ${PREFIX}/bin

.include <bsd.port.post.mk>
