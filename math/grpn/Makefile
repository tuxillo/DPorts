# New ports collection makefile for:	grpn
# Date created:				25 October 1999
# Whom:					Chris D. Faulhaber <jedgar@fxp.org>
#
# $FreeBSD: ports/math/grpn/Makefile,v 1.18 2012/11/17 05:59:21 svnexp Exp $
#

PORTNAME=	grpn
PORTVERSION=	1.1.2
PORTREVISION=	5
CATEGORIES=	math
MASTER_SITES=	http://lashwhip.com/grpn/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK+-based reverse polish notation (RPN) calculator

USE_GNOME=	gtk12

ALL_TARGET=

MAN1=		grpn.1
PLIST_FILES=	bin/grpn

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/grpn ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/grpn.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
