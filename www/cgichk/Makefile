# New ports collection makefile for:	cgichk
# Date created:			Jun 8, 2001
# Whom:				Mark Pulford <mark@kyne.com.au>
#
# $FreeBSD: ports/www/cgichk/Makefile,v 1.8 2012/11/17 06:02:29 svnexp Exp $
#

PORTNAME=	cgichk
PORTVERSION=	2.60
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A web site vulnerability scanner

WRKSRC=		${WRKDIR}/${PORTNAME}
ALL_TARGET=	cgichk

post-patch:
	${REINPLACE_CMD} -e "s/^(CC|CFLAGS).+//g" ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e \
		"s@/etc/@${PREFIX}/etc/@g; s/#include <getopt.h>//g;" \
		${WRKSRC}/cgichk.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cgichk ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/cgichk.cfg ${PREFIX}/etc/cgichk.cfg.sample

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
