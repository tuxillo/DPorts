# New ports collection makefile for:	pscal
# Date created:			Apr 16, 2001
# Whom:				Mark Pulford <mark@kyne.com.au>
#
# $FreeBSD: ports/print/pscal/Makefile,v 1.9 2012/11/17 06:00:53 svnexp Exp $
#

PORTNAME=	pscal
PORTVERSION=	1.16
CATEGORIES=	print
MASTER_SITES=	http://www.panix.com/~mbh/pscal/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A utility for generating Postscript calendars

NO_BUILD=	yes
PLIST_FILES=	bin/pscal

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pscal ${PREFIX}/bin

.include <bsd.port.mk>
