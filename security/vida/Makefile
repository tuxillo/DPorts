# New ports collection makefile for:   vida
# Date created:        Thu Apr 17 11:22:35 GMT 2003
# Whom:                mich@freebsdcluster.org
#
# $FreeBSD: ports/security/vida/Makefile,v 1.5 2012/11/17 06:01:22 svnexp Exp $
#

PORTNAME=	vida
PORTVERSION=	0.7.1
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	http://vidatapipe.sourceforge.net/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Vida is a multi-datapipe handler

BUILD_DEPENDS=	${LIBNET_CONFIG}:${PORTSDIR}/net/libnet10

LDFLAGS+=	${PTHREAD_LIBS} -lncurses -lpcap `${LIBNET_CONFIG} --libs`

WRKSRC=		${WRKDIR}/${PORTNAME}

LIBNET_CONFIG?=	${LOCALBASE}/bin/libnet10-config

do-build:
	cd ${WRKSRC} && \
	${CC} `${LIBNET_CONFIG} --defines --cflags` ${CFLAGS} \
	vida.c funz.c dnshijacking.c ${LDFLAGS} -o ${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/vida.1.gz ${PREFIX}/man/man1/

MAN1=		vida.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/vida

.include <bsd.port.mk>
