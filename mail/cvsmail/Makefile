# New ports collection makefile for:	cvsmail
# Date created:		23rd August, 2000
# Whom:			Ben Smithurst <ben@FreeBSD.org>
#
# $FreeBSD: ports/mail/cvsmail/Makefile,v 1.17 2012/11/17 05:59:00 svnexp Exp $
#

PORTNAME=	cvsmail
PORTVERSION=	2.2
CATEGORIES=	mail
MASTER_SITES=	LOCAL/pgollucci
DISTNAME=	mailutils-${PORTVERSION}

MAINTAINER=	pgollucci@FreeBSD.org
COMMENT=	A small program to add cvsweb links to FreeBSD commit messages

ALL_TARGET=	cvsmail
MANCOMPRESSED=	no
MAN1=		cvsmail.1
PLIST_FILES=	bin/cvsmail

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cvsmail ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/cvsmail.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
