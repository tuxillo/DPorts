# New ports collection makefile for:	xxgdb
# Date created:		2 May 1995
# Whom:			jkh
#
# $FreeBSD: ports/devel/xxgdb/Makefile,v 1.22 2012/11/17 05:57:07 svnexp Exp $
#

PORTNAME=	xxgdb
PORTVERSION=	1.12
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	utilities

MAINTAINER=	cy@FreeBSD.org
COMMENT=	An X window interface for gdb

USE_IMAKE=	yes
USE_XORG=	ice sm x11 xaw xext xmu xt
MAN1=		xxgdb.1

.include <bsd.port.pre.mk>

# This isn't included in the original Imakefile for some reason.
#  Yes, I know this will recompile the program every time, but
#  we have the cookie anyway and it's much easier this way
#  than modifying the Imakefile.
post-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -o xxgdbiowin xxgdbiowin.c

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xxgdbiowin ${PREFIX}/bin

.include <bsd.port.post.mk>
